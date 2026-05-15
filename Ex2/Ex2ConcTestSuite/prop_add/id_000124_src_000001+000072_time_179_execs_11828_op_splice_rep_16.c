/* id_000124_src_000001+000072_time_179_execs_11828_op_splice_rep_16.c
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
    { void *vp; treetable_get(t, &(int32_t){4982791}, &vp); }
    treetable_add(t, &(int32_t){922747114}, &(int32_t){-909522633});
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    treetable_add(t, &(int32_t){-909560009}, &(int32_t){-909522487});
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    treetable_add(t, &(int32_t){1007726511}, &(int32_t){872415232});
    treetable_add(t, &(int32_t){-1343690520}, &(int32_t){3936431});
    treetable_add(t, &(int32_t){-1347480312}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347473489}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){9718}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16720129}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){588527585}, &(int32_t){1315860});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347431761}, &kp); }
    treetable_add(t, &(int32_t){-387446785}, &(int32_t){938010856});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }