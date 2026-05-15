/* id_000138_src_000001+000072_time_193_execs_12342_op_splice_rep_13.c
 * Property: get_greater_than correctness — treetable_get_greater_than(k) must
 * return the immediate in-order successor of k among all inserted keys.
 * If k is the maximum, no successor exists.
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
    treetable_add(t, &(int32_t){921960682}, &(int32_t){459208});
    { void *vp; treetable_get(t, &(int32_t){17157}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690520}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387403857}, &kp); }
    treetable_add(t, &(int32_t){16777728}, &(int32_t){15263976});
    treetable_add(t, &(int32_t){1465339223}, &(int32_t){-129});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1409746695}, &kp); }
    treetable_add(t, &(int32_t){29898484}, &(int32_t){86048775});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-520093696}, &kp); }
    treetable_add(t, &(int32_t){1460527360}, &(int32_t){117901056});
    { void *kp; treetable_get_greater_than(t, &(int32_t){117901063}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1353230505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1418506159}, &kp); }
    treetable_add(t, &(int32_t){-1348427616}, &(int32_t){-1347440721});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }