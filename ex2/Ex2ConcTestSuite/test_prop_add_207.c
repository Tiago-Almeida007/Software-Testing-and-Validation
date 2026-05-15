/* id_000207_src_000003+000202_time_532_execs_24173_op_splice_rep_8.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){8453888}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1793}, &kp); }
    treetable_add(t, &(int32_t){-256}, &(int32_t){336875600});
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){2430740});
    treetable_add(t, &(int32_t){-102177304}, &(int32_t){1107354131});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){558923586});
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){18683068}, &(int32_t){-960097260});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010631}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-32495319}, &vp); }
    treetable_add(t, &(int32_t){-502007320}, &(int32_t){-960085504});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2135067648}, &(int32_t){555819344});
    { void *vp; treetable_get(t, &(int32_t){-387383519}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1107296277}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-12452112}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){631283872}, &(int32_t){2135031808});
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    treetable_add(t, &(int32_t){-1179010692}, &(int32_t){-13369159});
    treetable_add(t, &(int32_t){59624}, &(int32_t){1346538496});
    treetable_add(t, &(int32_t){437523476}, &(int32_t){-1042945});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-452984826}, &(int32_t){459263});
    treetable_add(t, &(int32_t){117442305}, &(int32_t){-65536});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    treetable_add(t, &(int32_t){2430740}, &(int32_t){-1179010561});
    { void *vp; treetable_get(t, &(int32_t){-388366375}, &vp); }
    treetable_add(t, &(int32_t){1829901378}, &(int32_t){14614291});
    treetable_add(t, &(int32_t){270080}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-102177304}, &(int32_t){1107354131});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-16777216}, &(int32_t){-2490559});
    { void *vp; treetable_get(t, &(int32_t){-1179010628}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    treetable_add(t, &(int32_t){1116503164}, &(int32_t){9495});
    treetable_add(t, &(int32_t){-541279232}, &(int32_t){872415232});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387393816}, &kp); }
    treetable_add(t, &(int32_t){352446696}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010631}, &kp); }
    treetable_add(t, &(int32_t){5377}, &(int32_t){-960051646});
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-637543937});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }