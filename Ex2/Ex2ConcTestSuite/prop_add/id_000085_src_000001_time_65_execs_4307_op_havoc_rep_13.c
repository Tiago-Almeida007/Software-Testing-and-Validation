/* id_000085_src_000001_time_65_execs_4307_op_havoc_rep_13.c
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
    { void *vp; treetable_get(t, &(int32_t){1598226439}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){5726047}, &kp); }
    treetable_add(t, &(int32_t){-1493172221}, &(int32_t){50388802});
    treetable_add(t, &(int32_t){-398285056}, &(int32_t){117568771});
    treetable_add(t, &(int32_t){65280}, &(int32_t){-184293368});
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){256066});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }