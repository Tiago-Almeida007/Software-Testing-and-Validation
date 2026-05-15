/* id_000273_src_000043+000267_time_8746_execs_259693_op_splice_rep_1.c
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
    treetable_add(t, &(int32_t){20}, &(int32_t){251855170});
    treetable_add(t, &(int32_t){251854848}, &(int32_t){50331648});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    treetable_add(t, &(int32_t){189668}, &(int32_t){0});
    treetable_add(t, &(int32_t){5377}, &(int32_t){-1128481594});
    treetable_add(t, &(int32_t){1860713660}, &(int32_t){1011310});
    treetable_add(t, &(int32_t){983808}, &(int32_t){390202112});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){458801}, &(int32_t){0});
    treetable_add(t, &(int32_t){18481152}, &(int32_t){-436240363});
    treetable_add(t, &(int32_t){58624}, &(int32_t){255323391});
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){-387389312}, &(int32_t){-2122087549});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1376744}, &kp); }
    treetable_add(t, &(int32_t){-1043200}, &(int32_t){-1931656895});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){353638932});
    treetable_add(t, &(int32_t){-3750145}, &(int32_t){1793});
    treetable_add(t, &(int32_t){458759}, &(int32_t){-1350566144});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1514229841}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){459173}, &vp); }
    treetable_add(t, &(int32_t){-1515870811}, &(int32_t){1358954374});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){342103066});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-402653147}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1107329317}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094844400}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-2508359}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968752926}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088688135}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16744258}, &vp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){16803004}, &(int32_t){33547520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440513}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){-2046820224}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-1189543936});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943212089}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208487}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263257515}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-637580469}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-12451840}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){1263225637}, &(int32_t){-892908725});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    treetable_add(t, &(int32_t){-1236992}, &(int32_t){695958513});
    treetable_add(t, &(int32_t){-943208450}, &(int32_t){12171705});
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){1090387968});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-31869}, &kp); }
    treetable_add(t, &(int32_t){-2147483425}, &(int32_t){1536});
    { void *vp; treetable_get(t, &(int32_t){-1043200}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-642139719}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){8382702}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1978335193}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){1107296416});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1392520448}, &(int32_t){455090208});
    treetable_add(t, &(int32_t){-943251424}, &(int32_t){-1010317369});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225799}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    treetable_add(t, &(int32_t){352446696}, &(int32_t){1078067200});
    treetable_add(t, &(int32_t){-267059200}, &(int32_t){-12500481});
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1073774592}, &(int32_t){-469631232});
    treetable_add(t, &(int32_t){1709499620}, &(int32_t){1701143909});
    { void *vp; treetable_get(t, &(int32_t){1701143909}, &vp); }
    treetable_add(t, &(int32_t){1122297060}, &(int32_t){3843});
    treetable_add(t, &(int32_t){5368}, &(int32_t){1845707264});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    treetable_add(t, &(int32_t){-960054855}, &(int32_t){-267059002});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2490593}, &kp); }
    treetable_add(t, &(int32_t){-1179002624}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){706167436}, &(int32_t){5});
    treetable_add(t, &(int32_t){1330597820}, &(int32_t){1330597711});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){805306368}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-2081888024});
    treetable_add(t, &(int32_t){-2147483425}, &(int32_t){1536});
    { void *vp; treetable_get(t, &(int32_t){369295871}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-65536}, &kp); }
    treetable_add(t, &(int32_t){18486292}, &(int32_t){1107296277});
    { void *vp; treetable_get(t, &(int32_t){1977}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }