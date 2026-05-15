/* id_000096_src_000001_time_131_execs_9155_op_havoc_rep_15.c
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
    treetable_add(t, &(int32_t){1593835520}, &(int32_t){-1946090657});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){58624}, &(int32_t){926351360});
    { void *vp; treetable_get(t, &(int32_t){15335431}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){2141233312});
    { void *kp; treetable_get_greater_than(t, &(int32_t){14080}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){269959820}, &vp); }
    treetable_add(t, &(int32_t){229}, &(int32_t){0});
    treetable_add(t, &(int32_t){56581888}, &(int32_t){390237185});
    treetable_add(t, &(int32_t){234881024}, &(int32_t){1431654400});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1432114519}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-336860181}, &kp); }
    treetable_add(t, &(int32_t){1431655765}, &(int32_t){1431655765});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }