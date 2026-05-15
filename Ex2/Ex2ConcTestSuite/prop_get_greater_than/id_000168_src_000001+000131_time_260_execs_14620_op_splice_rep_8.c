/* id_000168_src_000001+000131_time_260_execs_14620_op_splice_rep_8.c
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
    { void *vp; treetable_get(t, &(int32_t){59655}, &vp); }
    treetable_add(t, &(int32_t){1412890700}, &(int32_t){-369096959});
    treetable_add(t, &(int32_t){20395776}, &(int32_t){1060569095});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107632438}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13879}, &kp); }
    treetable_add(t, &(int32_t){-1343684812}, &(int32_t){909619119});
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-387849759}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-505348096}, &(int32_t){-1354571295});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-391133777}, &kp); }
    treetable_add(t, &(int32_t){-518251492}, &(int32_t){-1470671089});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-43177}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-400810980}, &kp); }
    treetable_add(t, &(int32_t){-1343742948}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){1465341864}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233313}, &(int32_t){-16773026});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }