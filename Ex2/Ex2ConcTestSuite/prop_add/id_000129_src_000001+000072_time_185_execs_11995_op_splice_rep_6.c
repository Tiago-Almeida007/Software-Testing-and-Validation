/* id_000129_src_000001+000072_time_185_execs_11995_op_splice_rep_6.c
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
    treetable_add(t, &(int32_t){922747114}, &(int32_t){134676791});
    treetable_add(t, &(int32_t){22313216}, &(int32_t){15335431});
    treetable_add(t, &(int32_t){117520183}, &(int32_t){1107632384});
    treetable_add(t, &(int32_t){937492480}, &(int32_t){-1347440841});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347113041}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465364399}, &kp); }
    treetable_add(t, &(int32_t){-1355292416}, &(int32_t){-1347440721});
    treetable_add(t, &(int32_t){-1513240}, &(int32_t){33554560});
    treetable_add(t, &(int32_t){-387389439}, &(int32_t){1465363456});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){336860195}, &(int32_t){-1606270464});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){1072767});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389433}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }