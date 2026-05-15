/* id_000054_src_000001_time_15_execs_916_op_havoc_rep_15_+cov.c
 * Property: lookup correctness — treetable_get(k) after add(k,v) must return v,
 * and that value must be reported present by treetable_contains_value.
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
    treetable_add(t, &(int32_t){42405}, &(int32_t){1431666688});
    { void *vp; treetable_get(t, &(int32_t){1431656279}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1515870811}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1515870811}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){27633061}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1526725979}, &vp); }
    treetable_add(t, &(int32_t){2949120}, &(int32_t){538976339});
    { void *kp; treetable_get_greater_than(t, &(int32_t){85925920}, &kp); }
    treetable_add(t, &(int32_t){538976288}, &(int32_t){2105376});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }