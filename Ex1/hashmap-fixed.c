/* Copyright (C) 2014  Richard Wiedenhöft <richard.wiedenhoeft@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "hashmap.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

struct hashmap_s {
  int size;
  struct hashmap_field *fields;
};

struct hashmap_field {
  int size;
  struct hashmap_entry *entries;
};

struct hashmap_entry {
  char *key;
  void *val;
  size_t len;
};

unsigned long int hashmap_fnv1a(void *data, unsigned long int len) {
  unsigned char *p = (unsigned char *)data;
  unsigned long int h = 2166136261UL;
  unsigned long int i;
  for (i = 0; i < len; i++) {
    h = (h ^ p[i]) * 16777619;
  }
  return h;
}

int hashmap_hash(char *str, int max_hash) {
  unsigned long int fnv1a_hash = hashmap_fnv1a((void *)str, strlen(str));
  int hash = (int)(fnv1a_hash % (max_hash + 1));
  return hash;
}

hashmap_t hashmap_new(int size) {
  /* BUG-1: Null Dereference (Ex 1.1) */
  hashmap_t map = (hashmap_t)malloc(sizeof(struct hashmap_s));
  /* Fixes 1 */
  if (!map) return NULL;

  /* BUG-2: Nullptr Dereference on fields (Ex 1.1) */
  struct hashmap_field *fields = (struct hashmap_field *)malloc(sizeof(struct hashmap_field) * size);
  /* Fixes 2 */
  if (!fields) {
    free(map);
    return NULL;
  }

  for (int i = 0; i < size; i++) {
    struct hashmap_field *field = &fields[i];
    field->size = 0;
    field->entries = NULL;
  }

  map->size = size;
  map->fields = fields;

  return map;
}

void hashmap_free(hashmap_t map) {
  if (!map) return;
  for (int i = 0; i < map->size; i++) {
    struct hashmap_field *field = map->fields + i;
    if (field->entries != 0) {
      int j;
      for (j = 0; j < field->size; j++) {
        struct hashmap_entry *entry = field->entries + j;
        /* BUG-3: Memory Leak in hashmap_free (Ex 1.2) */
        free(entry->key);
        /* Fixes 3 */
        free(entry->val);
      }
      free(field->entries);
    }
  }
  free(map->fields);
  free(map);
}

void hashmap_set(hashmap_t map, char *key, void *value, size_t length) {
  if (!map || !key) return;
  
  /* BUG-4: Logic Error Off-by-one (Ex 1.2) */
  int hash = hashmap_hash(key, map->size - 1);
  /* Fixes 4 */
  hash = hashmap_hash(key, map->size);
  
  struct hashmap_field *field = map->fields + hash;
  struct hashmap_entry *entry;

  int i;
  for (i = 0; i < field->size; i++) {
    entry = field->entries + i;
    if (strcmp(entry->key, key) == 0) {
      /* BUG-5: Memory Leak during Value Update (Ex 1.2) */
      goto set_val;
      /* Fixes 5 */
      if (entry->val) free(entry->val);
      goto set_val;
    }
  }

  if (value == NULL) return;

  field->size++;
  struct hashmap_entry *entries = (struct hashmap_entry *)malloc(
      field->size * sizeof(struct hashmap_entry));
  if (!entries) { field->size--; return; }
  
  /* BUG-6: Insecure API memcpy / Out of Bounds (Ex 1.1) */
  memcpy(entries, field->entries, (field->size - 1) * sizeof(struct hashmap_entry));
  /* Fixes 6 */
  if (field->entries) memcpy(entries, field->entries, (field->size - 1) * sizeof(struct hashmap_entry));

  entry = &entries[field->size - 1];
  
  /* BUG-7: Incompatible Sizeof Operand (Ex 1.1) */
  entry->key = (char *)malloc(sizeof(key));
  /* Fixes 7 */
  entry->key = (char *)malloc(strlen(key) + 1);
  
  if (!entry->key) { free(entries); field->size--; return; }
  
  /* BUG-8: Insecure API strcpy buffer overflow (Ex 1.1) */
  strcpy(entry->key, key);
  /* Fixes 8 */
  strncpy(entry->key, key, strlen(key) + 1);

  /* BUG-9: Memory Leak of old entries array (Ex 1.1) */
  field->entries = entries;
  /* Fixes 9 */
  if (field->entries) free(field->entries);
  field->entries = entries;

set_val:
  if (value != NULL) {
    /* BUG-10: Null Dereference of val (Ex 1.1) */
    void *val = malloc(length);
    /* Fixes 10 */
    if (!val) return;
    
    entry->val = memcpy(val, value, length);
    entry->len = length;
  } else {
    /* BUG-11: Memory Leak during Entry Deletion (Ex 1.2) */
    free(entry->key);
    /* Fixes 11 */
    if (entry->val) free(entry->val);
    
    field->size--;
    if (entry != (field->entries + field->size)) {
      memcpy((void *)entry, (void *)(field->entries + field->size),
             sizeof(struct hashmap_entry));
    }
    field->entries = realloc((void *)field->entries,
                             field->size * sizeof(struct hashmap_entry));
  }
}

void *hashmap_get(hashmap_t map, char *key) {
  if (!map || !key) return NULL;
  
  /* BUG-12: Logic Error Off-by-one in get (Ex 1.2) */
  int hash = hashmap_hash(key, map->size - 1);
  /* Fixes 12 */
  hash = hashmap_hash(key, map->size);
  
  struct hashmap_field *field = map->fields + hash;
  struct hashmap_entry *entry;

  int i;
  for (i = 0; i < field->size; i++) {
    entry = field->entries + i;
    if (strcmp(entry->key, key) == 0) {
      /* BUG-13: Nullptr Dereference on val (Ex 1.1) */
      void *val = malloc(entry->len);
      /* Fixes 13 */
      if (!val) return NULL;
      
      return memcpy(val, entry->val, entry->len);
    }
  }
  return NULL;
}

int main() {
  /* BUG-14: Nullptr Dereference in main (Ex 1.1) */
  hashmap_t map = hashmap_new(8);
  /* Fixes 14 */
  if (!map) return 1;

  char *key = "42";
  int value = 42;
  hashmap_set(map, key, &value, sizeof(int));

  int *ret = (int *)hashmap_get(map, key);
  assert(ret != NULL && *ret == value);

  /* BUG-15: Memory Leak 'ret' in main (Ex 1.1) */
  hashmap_free(map);
  /* Fixes 15 */
  free(ret);
  hashmap_free(map);

  return 0;
}