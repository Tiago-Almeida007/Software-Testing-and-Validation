/* id_000152_src_000001+000111_time_221_execs_13390_op_splice_rep_1.c
 * Property: validity preservation — after treetable_add(k,v), the table must be
 * balanced+sorted, contain k mapped to v, and size must grow by 1 (new key)
 * or stay the same (duplicate).
 */

#include <stdint.h>
#include <string.h>
#include "treetable.h"

void test(void) {
    TreeTable *t;
    treetable_new(&t);
    /* Mirror the harness's pre-population */
    int a=5, b=10, c=15, d=20, e=25;
    int v1=35, v2=40, v3=45, v4=50, v5=55;
    treetable_add(t, &b, &v2);
    treetable_add(t, &c, &v3);
    treetable_add(t, &a, &v1);
    treetable_add(t, &e, &v5);
    treetable_add(t, &d, &v4);
    { void *vp; treetable_get(t, &(int32_t){16777223}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807935}, &kp); }
    treetable_add(t, &(int32_t){622269540}, &(int32_t){0});
    treetable_add(t, &(int32_t){1350517388}, &(int32_t){340807760});
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){335614996});
    treetable_add(t, &(int32_t){325915156}, &(int32_t){57087});
    treetable_add(t, &(int32_t){690563359}, &(int32_t){-32495319});
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){15263976});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){2465952});
    treetable_add(t, &(int32_t){16744258}, &(int32_t){0});
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){622281356}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-1128481604});
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-160318276});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }