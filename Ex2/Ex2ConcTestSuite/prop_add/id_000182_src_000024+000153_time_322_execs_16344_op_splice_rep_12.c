/* id_000182_src_000024+000153_time_322_execs_16344_op_splice_rep_12.c
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
    { void *vp; treetable_get(t, &(int32_t){16777223}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){20735}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485695}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1346538496}, &(int32_t){336860180});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2135067648}, &(int32_t){1347440720});
    treetable_add(t, &(int32_t){-1347480556}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){23727}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){687925480}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-957818369}, &vp); }
    treetable_add(t, &(int32_t){-1596326078}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){631283872});
    treetable_add(t, &(int32_t){-8437248}, &(int32_t){0});
    treetable_add(t, &(int32_t){2145910784}, &(int32_t){1459617920});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-437918633}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-437918235}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2080433637}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2092546489}, &vp); }
    treetable_add(t, &(int32_t){2430786}, &(int32_t){-1140850688});
    treetable_add(t, &(int32_t){33554655}, &(int32_t){15269684});
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){437523476}, &(int32_t){387212288});
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010751}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1128482375}, &vp); }
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-160318276});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }