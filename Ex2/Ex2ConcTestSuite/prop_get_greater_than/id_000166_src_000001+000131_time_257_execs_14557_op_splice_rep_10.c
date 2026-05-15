/* id_000166_src_000001+000131_time_257_execs_14557_op_splice_rep_10.c
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
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){1412890700}, &(int32_t){-369096959});
    treetable_add(t, &(int32_t){437523476}, &(int32_t){387214868});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){538976288});
    treetable_add(t, &(int32_t){538976288}, &(int32_t){32});
    treetable_add(t, &(int32_t){-1114112}, &(int32_t){0});
    treetable_add(t, &(int32_t){-13369344}, &(int32_t){-1347440664});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-505348096}, &(int32_t){0});
    treetable_add(t, &(int32_t){536870912}, &(int32_t){1465341728});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1549227863}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1347468575}, &vp); }
    treetable_add(t, &(int32_t){471662364}, &(int32_t){-518251492});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1470650199}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){481275823}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347448913}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2141233327}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14319871}, &kp); }
    treetable_add(t, &(int32_t){1470628072}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336864020}, &kp); }
    treetable_add(t, &(int32_t){-1600020320}, &(int32_t){1080000416});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }