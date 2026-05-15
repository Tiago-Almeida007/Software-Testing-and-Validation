/* id_000075_src_000001_time_43_execs_2771_op_havoc_rep_15.c
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
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2071165820}, &(int32_t){-1956346748});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147447925}, &kp); }
    treetable_add(t, &(int32_t){2046}, &(int32_t){1792});
    treetable_add(t, &(int32_t){16728831}, &(int32_t){239206633});
    treetable_add(t, &(int32_t){-1465384705}, &(int32_t){4194472});
    treetable_add(t, &(int32_t){-1465341784}, &(int32_t){-240605016});
    treetable_add(t, &(int32_t){-1476369240}, &(int32_t){-707443969});
    { void *vp; treetable_get(t, &(int32_t){-2066358827}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }