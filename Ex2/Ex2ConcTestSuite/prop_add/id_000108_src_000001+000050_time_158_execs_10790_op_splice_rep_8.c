/* id_000108_src_000001+000050_time_158_execs_10790_op_splice_rep_8.c
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
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){437523476}, &(int32_t){387191828});
    { void *vp; treetable_get(t, &(int32_t){536870912}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807728}, &kp); }
    treetable_add(t, &(int32_t){1829901332}, &(int32_t){14614291});
    treetable_add(t, &(int32_t){390237184}, &(int32_t){7205});
    treetable_add(t, &(int32_t){390237184}, &(int32_t){1116471333});
    { void *kp; treetable_get_greater_than(t, &(int32_t){37}, &kp); }
    treetable_add(t, &(int32_t){387191808}, &(int32_t){37});
    treetable_add(t, &(int32_t){336890880}, &(int32_t){2136937492});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8413050}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){140}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }