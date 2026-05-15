/* id_000241_src_000003+000214_time_1664_execs_56966_op_splice_rep_11.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1769472}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){458759}, &vp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){1679038996});
    treetable_add(t, &(int32_t){9495}, &(int32_t){-102170392});
    treetable_add(t, &(int32_t){-968753152}, &(int32_t){1677772486});
    { void *kp; treetable_get_greater_than(t, &(int32_t){9721}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-970907359}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-637583039}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-891682855}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){5251361}, &vp); }
    treetable_add(t, &(int32_t){1358954495}, &(int32_t){1347440720});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1829901332}, &(int32_t){14614291});
    treetable_add(t, &(int32_t){355016448}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){352446696}, &(int32_t){-968753152});
    treetable_add(t, &(int32_t){-267059010}, &(int32_t){-637582850});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050471}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){2465952});
    treetable_add(t, &(int32_t){16744258}, &(int32_t){0});
    treetable_add(t, &(int32_t){2088532992}, &(int32_t){-1179026308});
    { void *vp; treetable_get(t, &(int32_t){-13369159}, &vp); }
    treetable_add(t, &(int32_t){1346538496}, &(int32_t){336860180});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-1179010561});
    { void *vp; treetable_get(t, &(int32_t){-388366375}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){-2490559}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959784449}, &vp); }
    treetable_add(t, &(int32_t){-1179009860}, &(int32_t){-1179010631});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    treetable_add(t, &(int32_t){336860174}, &(int32_t){487898112});
    treetable_add(t, &(int32_t){-216787949}, &(int32_t){-553708692});
    treetable_add(t, &(int32_t){689897488}, &(int32_t){2080374805});
    treetable_add(t, &(int32_t){-2021884804}, &(int32_t){2430786});
    treetable_add(t, &(int32_t){-1128529920}, &(int32_t){223});
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-1162149912});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){690604761}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-1179010561});
    { void *vp; treetable_get(t, &(int32_t){-388431840}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }