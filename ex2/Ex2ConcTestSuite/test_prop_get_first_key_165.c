/* id_000165_src_000001+000131_time_256_execs_14516_op_splice_rep_11.c
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
    treetable_add(t, &(int32_t){-1600101822}, &(int32_t){-1600085790});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16728738}, &kp); }
    treetable_add(t, &(int32_t){232852480}, &(int32_t){1793});
    treetable_add(t, &(int32_t){14848}, &(int32_t){0});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-369096959}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1060569095}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){14300727}, &(int32_t){-402587646});
    treetable_add(t, &(int32_t){1470628072}, &(int32_t){1412890700});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1116471555}, &kp); }
    treetable_add(t, &(int32_t){15007751}, &(int32_t){1459676416});
    treetable_add(t, &(int32_t){-1343684812}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-505348092}, &(int32_t){453044449});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-67503865}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16054777}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604252}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341856}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471619415}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){471604399}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-1600020320}, &(int32_t){274628512});
    treetable_add(t, &(int32_t){-387446785}, &(int32_t){-1});
    treetable_add(t, &(int32_t){131290}, &(int32_t){-387389439});
    treetable_add(t, &(int32_t){1465341864}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233313}, &(int32_t){-16773026});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }