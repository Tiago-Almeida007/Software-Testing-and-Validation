/* id_000162_src_000001+000131_time_251_execs_14400_op_splice_rep_11.c
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
    { void *vp; treetable_get(t, &(int32_t){4103}, &vp); }
    treetable_add(t, &(int32_t){1412890700}, &(int32_t){-368965887});
    treetable_add(t, &(int32_t){20395776}, &(int32_t){1060569095});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107632438}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13879}, &kp); }
    treetable_add(t, &(int32_t){-1343684812}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){269488144}, &(int32_t){269488144});
    treetable_add(t, &(int32_t){1052688}, &(int32_t){-387446785});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2130706433}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){15263976}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){15263969}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-505749023}, &(int32_t){44866});
    treetable_add(t, &(int32_t){471656448}, &(int32_t){-538976289});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-538976289}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-538976289}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-538976289}, &kp); }
    treetable_add(t, &(int32_t){262376}, &(int32_t){-1347440896});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){274628512}, &(int32_t){269488144});
    treetable_add(t, &(int32_t){269488144}, &(int32_t){269488144});
    treetable_add(t, &(int32_t){134152208}, &(int32_t){-5912});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-270892801}, &kp); }
    treetable_add(t, &(int32_t){1470628072}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336864020}, &kp); }
    treetable_add(t, &(int32_t){-1600020320}, &(int32_t){274628512});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }