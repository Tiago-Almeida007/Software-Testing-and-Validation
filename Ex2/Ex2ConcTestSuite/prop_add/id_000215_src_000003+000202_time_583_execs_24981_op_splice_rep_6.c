/* id_000215_src_000003+000202_time_583_execs_24981_op_splice_rep_6.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){16646159}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){924778496}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1536}, &(int32_t){117571557});
    treetable_add(t, &(int32_t){459008}, &(int32_t){-16777209});
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807935}, &kp); }
    treetable_add(t, &(int32_t){622269540}, &(int32_t){-437780480});
    treetable_add(t, &(int32_t){14816249}, &(int32_t){-960051646});
    treetable_add(t, &(int32_t){637080420}, &(int32_t){0});
    treetable_add(t, &(int32_t){1350517388}, &(int32_t){555819297});
    { void *vp; treetable_get(t, &(int32_t){-642139871}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-65536}, &vp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){347865108});
    { void *vp; treetable_get(t, &(int32_t){336860161}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    treetable_add(t, &(int32_t){57342}, &(int32_t){-385928192});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-891682855}, &kp); }
    treetable_add(t, &(int32_t){-12452096}, &(int32_t){-891682855});
    { void *vp; treetable_get(t, &(int32_t){-1607915223}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2135031808}, &vp); }
    treetable_add(t, &(int32_t){2088532992}, &(int32_t){-1179026308});
    { void *vp; treetable_get(t, &(int32_t){-13369159}, &vp); }
    treetable_add(t, &(int32_t){1346538496}, &(int32_t){336860180});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-1179010561});
    { void *vp; treetable_get(t, &(int32_t){-388366375}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){-2490559}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){16777296}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    treetable_add(t, &(int32_t){-1937998724}, &(int32_t){2430786});
    treetable_add(t, &(int32_t){-1128529920}, &(int32_t){223});
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-387383320});
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    treetable_add(t, &(int32_t){1376744}, &(int32_t){-960085504});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }