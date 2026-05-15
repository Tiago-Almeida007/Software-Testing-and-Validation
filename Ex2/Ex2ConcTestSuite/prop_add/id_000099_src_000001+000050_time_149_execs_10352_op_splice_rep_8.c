/* id_000099_src_000001+000050_time_149_execs_10352_op_splice_rep_8.c
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
    treetable_add(t, &(int32_t){655627284}, &(int32_t){387191828});
    { void *vp; treetable_get(t, &(int32_t){1701117952}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1701143909}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-419350729}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){3553079}, &kp); }
    treetable_add(t, &(int32_t){1829901332}, &(int32_t){14618899});
    treetable_add(t, &(int32_t){390237184}, &(int32_t){37});
    treetable_add(t, &(int32_t){390237184}, &(int32_t){37});
    treetable_add(t, &(int32_t){391181937}, &(int32_t){37});
    treetable_add(t, &(int32_t){390230784}, &(int32_t){1347440720});
    treetable_add(t, &(int32_t){19469332}, &(int32_t){1347425300});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }