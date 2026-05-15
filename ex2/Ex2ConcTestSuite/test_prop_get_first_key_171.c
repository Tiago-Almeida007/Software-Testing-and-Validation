/* id_000171_src_000001+000131_time_267_execs_14785_op_splice_rep_15.c
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
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){-399048628}, &(int32_t){-369098749});
    treetable_add(t, &(int32_t){20395776}, &(int32_t){1060569095});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1121329462}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13879}, &kp); }
    treetable_add(t, &(int32_t){-1343684812}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-505290271}, &(int32_t){15263969});
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){1465341783});
    { void *vp; treetable_get(t, &(int32_t){1137751}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604252}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341864}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471619415}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604399}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440748}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347485440}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440693}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600082001}, &kp); }
    treetable_add(t, &(int32_t){-369096959}, &(int32_t){274628512});
    { void *vp; treetable_get(t, &(int32_t){-387447012}, &vp); }
    treetable_add(t, &(int32_t){-16641574}, &(int32_t){-387389439});
    treetable_add(t, &(int32_t){1465341864}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233313}, &(int32_t){-16773026});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }