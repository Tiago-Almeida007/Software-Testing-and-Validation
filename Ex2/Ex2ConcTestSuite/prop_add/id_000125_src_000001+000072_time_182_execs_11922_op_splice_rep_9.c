/* id_000125_src_000001+000072_time_182_execs_11922_op_splice_rep_9.c
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
    { void *vp; treetable_get(t, &(int32_t){-1583242847}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1583242847}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1583242847}, &vp); }
    treetable_add(t, &(int32_t){1412825164}, &(int32_t){721422081});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15346475}, &kp); }
    treetable_add(t, &(int32_t){243}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1660864713});
    { void *vp; treetable_get(t, &(int32_t){4326813}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){54}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-391139409}, &kp); }
    treetable_add(t, &(int32_t){131072}, &(int32_t){-387389439});
    treetable_add(t, &(int32_t){1465341864}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){909578334});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }