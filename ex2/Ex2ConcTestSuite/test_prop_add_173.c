/* id_000173_src_000001+000131_time_271_execs_14894_op_splice_rep_15.c
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
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){1412890700}, &(int32_t){-369096959});
    treetable_add(t, &(int32_t){20395776}, &(int32_t){473366535});
    treetable_add(t, &(int32_t){-1347440664}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440699}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-505290271}, &kp); }
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){22501207});
    { void *kp; treetable_get_greater_than(t, &(int32_t){19543}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){471597056}, &(int32_t){1460658460});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341865}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471619415}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926882991}, &kp); }
    treetable_add(t, &(int32_t){937492480}, &(int32_t){13879});
    treetable_add(t, &(int32_t){5705185}, &(int32_t){-1343684812});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){2465952}, &(int32_t){8192});
    treetable_add(t, &(int32_t){1343701644}, &(int32_t){340807760});
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){23639}, &kp); }
    treetable_add(t, &(int32_t){1107301396}, &(int32_t){10526786});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1585422496}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }