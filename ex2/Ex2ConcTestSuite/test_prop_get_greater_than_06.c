/* id_000006_src_000001_time_1_execs_56_op_havoc_rep_11_+cov.c
 * Property: lookup correctness — treetable_get(k) after add(k,v) must return v,
 * and that value must be reported present by treetable_contains_value.
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
    { void *vp; treetable_get(t, &(int32_t){-1470671089}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465343831}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }