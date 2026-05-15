/* id_000220_src_000003+000206_time_634_execs_26050_op_splice_rep_1.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331663}, &kp); }
    treetable_add(t, &(int32_t){-2088566528}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-553614461}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){458759}, &vp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){1679038996});
    treetable_add(t, &(int32_t){9495}, &(int32_t){-102177304});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968752926}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){9721}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1191172831}, &vp); }
    treetable_add(t, &(int32_t){5251361}, &(int32_t){459008});
    treetable_add(t, &(int32_t){1358954495}, &(int32_t){1347440720});
    treetable_add(t, &(int32_t){1315860}, &(int32_t){18683068});
    treetable_add(t, &(int32_t){1829901332}, &(int32_t){14614291});
    treetable_add(t, &(int32_t){355016448}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){631283872}, &(int32_t){2135031808});
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    treetable_add(t, &(int32_t){-943212164}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2143733314}, &(int32_t){-1042945});
    { void *vp; treetable_get(t, &(int32_t){-637543937}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-943194608}, &vp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){232});
    treetable_add(t, &(int32_t){336875586}, &(int32_t){337253396});
    { void *vp; treetable_get(t, &(int32_t){-959971344}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){32041177}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178992679}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1127823670}, &vp); }
    treetable_add(t, &(int32_t){-385881880}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-1179052799}, &(int32_t){-1179010631});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    treetable_add(t, &(int32_t){-1937998724}, &(int32_t){2430786});
    treetable_add(t, &(int32_t){-1128529920}, &(int32_t){223});
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-387383320});
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    treetable_add(t, &(int32_t){1376744}, &(int32_t){-960085504});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }