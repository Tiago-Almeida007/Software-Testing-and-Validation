/* id_000213_src_000003+000202_time_565_execs_24690_op_splice_rep_8.c
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
    treetable_add(t, &(int32_t){-1343684864}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){558923586});
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){18683068}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){701159935});
    { void *vp; treetable_get(t, &(int32_t){-32495319}, &vp); }
    treetable_add(t, &(int32_t){-387432448}, &(int32_t){32041192});
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582850}, &(int32_t){-959784449});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){65536}, &(int32_t){-1970632192});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){2080374784}, &(int32_t){2088533116});
    { void *vp; treetable_get(t, &(int32_t){12171705}, &vp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){336875586});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){-960036880});
    { void *vp; treetable_get(t, &(int32_t){1107292180}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-2508359}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-12500481}, &(int32_t){-1178992679});
    { void *vp; treetable_get(t, &(int32_t){-637544007}, &vp); }
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){262144});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2088533116}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_add(t, &(int32_t){-385928192}, &(int32_t){-1513258});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){1376744});
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    treetable_add(t, &(int32_t){32041177}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }