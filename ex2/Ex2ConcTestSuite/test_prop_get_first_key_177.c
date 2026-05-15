/* id_000177_src_000001+000131_time_293_execs_15480_op_splice_rep_16.c
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
    { void *vp; treetable_get(t, &(int32_t){-629080313}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-286369961}, &kp); }
    treetable_add(t, &(int32_t){-286370048}, &(int32_t){22359});
    treetable_add(t, &(int32_t){117506114}, &(int32_t){922766344});
    treetable_add(t, &(int32_t){-369096959}, &(int32_t){926351360});
    { void *vp; treetable_get(t, &(int32_t){1060569095}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1460521271}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1448914863}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-505290271}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){15335431}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926889728}, &kp); }
    treetable_add(t, &(int32_t){1107623936}, &(int32_t){-520093696});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-505290496}, &(int32_t){1111638760});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604252}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341864}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471619415}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604399}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){44975}, &kp); }
    treetable_add(t, &(int32_t){335614996}, &(int32_t){1829901332});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1358897409}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1583308640}, &kp); }
    treetable_add(t, &(int32_t){-402129152}, &(int32_t){-24});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459673728}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465380590}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465380590}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){337843255}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }