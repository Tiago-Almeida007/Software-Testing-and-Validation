/* id_000134_src_000001+000072_time_190_execs_12190_op_splice_rep_7.c
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
    treetable_add(t, &(int32_t){922747114}, &(int32_t){459063});
    { void *vp; treetable_get(t, &(int32_t){16901}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690520}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1162891345}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){937492480}, &(int32_t){336864020});
    treetable_add(t, &(int32_t){65536}, &(int32_t){-1600086016});
    treetable_add(t, &(int32_t){-1347461505}, &(int32_t){-1347440721});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }