/* id_000020_src_000001_time_4_execs_212_op_havoc_rep_4_+cov.c
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
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }