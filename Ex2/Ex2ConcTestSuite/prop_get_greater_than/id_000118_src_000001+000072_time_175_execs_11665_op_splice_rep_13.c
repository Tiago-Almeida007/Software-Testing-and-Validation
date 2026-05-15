/* id_000118_src_000001+000072_time_175_execs_11665_op_splice_rep_13.c
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
    treetable_add(t, &(int32_t){-1358954262}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-13369169}, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-387444504});
    treetable_add(t, &(int32_t){-488048408}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-1347444576}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-13369257}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){11513775}, &kp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){-1347440664});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471602192}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15263971}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){274618199}, &kp); }
    treetable_add(t, &(int32_t){588527585}, &(int32_t){459028});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-65536}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }