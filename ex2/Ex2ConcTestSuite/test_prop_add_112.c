/* id_000112_src_000001+000050_time_170_execs_11449_op_splice_rep_13.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){117526608}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){37}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-33619968}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-9726828}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-614506657}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-606348325}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-606348325}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-606348325}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    { void *vp; treetable_get(t, &(int32_t){336860180}, &vp); }
    treetable_add(t, &(int32_t){336855316}, &(int32_t){325915156});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){390237184}, &(int32_t){1358328064});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }