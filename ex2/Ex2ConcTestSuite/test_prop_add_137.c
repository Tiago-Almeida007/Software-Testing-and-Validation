/* id_000137_src_000001+000072_time_193_execs_12308_op_splice_rep_1.c
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
    treetable_add(t, &(int32_t){922747114}, &(int32_t){459063});
    { void *vp; treetable_get(t, &(int32_t){16901}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690520}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387403857}, &kp); }
    treetable_add(t, &(int32_t){16777728}, &(int32_t){15263976});
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){1465341783});
    treetable_add(t, &(int32_t){23679}, &(int32_t){588527585});
    treetable_add(t, &(int32_t){1107301396}, &(int32_t){-1600085950});
    treetable_add(t, &(int32_t){1585422496}, &(int32_t){134152208});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }