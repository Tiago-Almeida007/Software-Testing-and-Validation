/* id_000144_src_000001+000072_time_203_execs_12701_op_splice_rep_15.c
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
    { void *vp; treetable_get(t, &(int32_t){205785095}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1549227863}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-520093691}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){54}, &kp); }
    treetable_add(t, &(int32_t){1474881536}, &(int32_t){15359063});
    { void *vp; treetable_get(t, &(int32_t){66}, &vp); }
    treetable_add(t, &(int32_t){232849408}, &(int32_t){-13369257});
    treetable_add(t, &(int32_t){-1819044973}, &(int32_t){-1819044973});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1819044973}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1819044973}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){754974774}, &kp); }
    treetable_add(t, &(int32_t){-1819045120}, &(int32_t){-1818913901});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690605}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440729}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){132689839}, &kp); }
    treetable_add(t, &(int32_t){937492480}, &(int32_t){937492480});
    treetable_add(t, &(int32_t){909579299}, &(int32_t){-520093696});
    { void *vp; treetable_get(t, &(int32_t){6553687}, &vp); }
    treetable_add(t, &(int32_t){937492714}, &(int32_t){336864020});
    treetable_add(t, &(int32_t){-1606270464}, &(int32_t){-16736096});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1595348760}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }