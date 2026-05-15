/* id_000218_src_000003+000202_time_607_execs_25360_op_splice_rep_6.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388608}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1793}, &kp); }
    treetable_add(t, &(int32_t){-256}, &(int32_t){336875600});
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){2430740});
    treetable_add(t, &(int32_t){-102177304}, &(int32_t){1107354131});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){558923586});
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    treetable_add(t, &(int32_t){459264}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){18683068}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){701159935});
    { void *vp; treetable_get(t, &(int32_t){1059113}, &vp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){336875586});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){352370380});
    treetable_add(t, &(int32_t){-637582850}, &(int32_t){-959784449});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){2465952}, &(int32_t){-8437248});
    treetable_add(t, &(int32_t){0}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){-1179010631}, &(int32_t){57342});
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){-64024});
    { void *vp; treetable_get(t, &(int32_t){1107296277}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-642139719}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1107296277}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094844400}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-2508359}, &vp); }
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-4605508});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600086015}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1598252288}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){5726047}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2088548793}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){32041192});
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){1102690815}, &(int32_t){-1174414849});
    { void *vp; treetable_get(t, &(int32_t){2144697}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-2147483648}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }