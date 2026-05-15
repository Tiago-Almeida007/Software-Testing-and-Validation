/* id_000120_src_000001+000072_time_176_execs_11715_op_splice_rep_14.c
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
    { void *vp; treetable_get(t, &(int32_t){4982791}, &vp); }
    treetable_add(t, &(int32_t){1107296490}, &(int32_t){922758400});
    { void *kp; treetable_get_greater_than(t, &(int32_t){922761015}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){20395842}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1460527360}, &(int32_t){-385928186});
    treetable_add(t, &(int32_t){1869573999}, &(int32_t){1869573999});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1869573999}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1869573999}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-395350161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1323284}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2141233312}, &kp); }
    treetable_add(t, &(int32_t){84017152}, &(int32_t){-1358895103});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107976}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }