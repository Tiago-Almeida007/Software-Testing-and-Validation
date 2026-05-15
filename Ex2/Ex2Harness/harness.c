#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "treetable.h"

__AFL_FUZZ_INIT();

void syncing_add(TreeTable *t, int32_t *k, int32_t *v, int32_t *sync_list_keys) {
    if (!treetable_contains_key(t, k))
        sync_list_keys[(treetable_size(t))] = *k;
    treetable_add(t, k, v);
}

int main(void) {
    __AFL_INIT();
    unsigned char *buf = __AFL_FUZZ_TESTCASE_BUF;

    while (__AFL_LOOP(10000)) {
        int len = __AFL_FUZZ_TESTCASE_LEN;

        TreeTable *t;
        treetable_new(&t);
        assert(balanced(t) && sorted(t));
        int32_t sync_list_keys[10000];

        int a=5, b=10, c=15, d=20, e=25;
        int v1=35, v2=40, v3=45, v4=50, v5=55;

        syncing_add(t, &b, &v2, sync_list_keys);
        assert(balanced(t) && sorted(t));
        syncing_add(t, &c, &v3, sync_list_keys);
        assert(balanced(t) && sorted(t));
        syncing_add(t, &a, &v1, sync_list_keys);
        assert(balanced(t) && sorted(t));
        syncing_add(t, &e, &v5, sync_list_keys);
        assert(balanced(t) && sorted(t));
        syncing_add(t, &d, &v4, sync_list_keys);
        assert(balanced(t) && sorted(t));

        int32_t *keys[10000];
        int32_t *vals[10000];
        int alloc_count = 0;

        for (int i = 0; i + 9 <= len; i += 9) {
            uint8_t op = buf[i] % 4;
            int32_t *k = malloc(sizeof(int32_t));
            int32_t *v = malloc(sizeof(int32_t));
            memcpy(k, &buf[i + 1], sizeof(*k));
            memcpy(v, &buf[i + 5], sizeof(*v));
            keys[alloc_count] = k;
            vals[alloc_count] = v;
            alloc_count++;

            switch (op) {

            case 0: {
                /* PROPERTY: after treetable_add(k,v), table should be balanced + sorted and contain key value(k,v) ~
                    : size grows by 0 if key already contained, 1 otherwise
                    : v is the value of k
                */
                int count_Size  = treetable_size(t);
                int contained_K = treetable_contains_key(t, k);

                syncing_add(t, k, v, sync_list_keys);
                assert(balanced(t) && sorted(t));
                assert(treetable_contains_key(t, k));
                assert(treetable_size(t) == count_Size + (contained_K ? 0 : 1));

                void *new_v_ptr;
                treetable_get(t, k, &new_v_ptr);
                assert(*(int32_t*)new_v_ptr == *v);
                break;
            }

            case 1: {
                /* PROPERTY: after add->get , gives a V that must be contained at least once in the table
                    and corresponds to the value of the key we added */
                syncing_add(t, k, v, sync_list_keys);
                assert(balanced(t) && sorted(t));

                void *v_out_ptr;
                treetable_get(t, k, &v_out_ptr);
                assert(*(int32_t*)v_out_ptr == *v);
                assert(treetable_contains_value(t, v_out_ptr) > 0);
                break;
            }

            case 2: {
                /* PROPERTY: get_first_key */
                // Returns a key that exists && is the smallest key
                syncing_add(t, k, v, sync_list_keys);
                assert(balanced(t) && sorted(t));

                int min_key = sync_list_keys[0];
                for (size_t j = 1; j < treetable_size(t); j++) {
                    if (sync_list_keys[j] < min_key)
                        min_key = sync_list_keys[j];
                }

                void *k_out_ptr;
                treetable_get_first_key(t, &k_out_ptr);
                assert(treetable_contains_key(t, k_out_ptr));
                assert(*(int32_t*)k_out_ptr == min_key);
                break;
            }

            case 3: {
                /* PROPERTY: get_greater_than(t,k) */
                // Returns a k that exists && is the key after k
                syncing_add(t, k, v, sync_list_keys);
                assert(balanced(t) && sorted(t));

                int max = INT32_MAX;
                for (size_t j = 0; j < treetable_size(t); j++) {
                    if (sync_list_keys[j] > *k && sync_list_keys[j] < max)
                        max = sync_list_keys[j];
                }

                void *k_out_ptr;
                if (max != INT32_MAX) {
                    treetable_get_greater_than(t, k, &k_out_ptr);
                    assert(treetable_contains_key(t, k_out_ptr));
                    assert(max == *(int32_t*)k_out_ptr);
                } else {
                    assert(treetable_contains_key(t, k));
                }
                break;
            }

            }
        }

        treetable_destroy(t);

        for (int i = 0; i < alloc_count; i++) {
            free(keys[i]);
            free(vals[i]);
        }
    }
    return 0;
}