/* id_000214_src_000003+000202_time_571_execs_24783_op_splice_rep_4.c
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
    treetable_add(t, &(int32_t){-102170392}, &(int32_t){1107354131});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1946157056}, &(int32_t){558923586});
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860174});
    treetable_add(t, &(int32_t){18683068}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){701159935});
    { void *vp; treetable_get(t, &(int32_t){-32495319}, &vp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){32041192});
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582850}, &(int32_t){-959784449});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){2465952}, &(int32_t){-8437248});
    treetable_add(t, &(int32_t){0}, &(int32_t){2088501248});
    treetable_add(t, &(int32_t){-1179026308}, &(int32_t){872462777});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15263976}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){-267054054});
    { void *kp; treetable_get_greater_than(t, &(int32_t){352372422}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    treetable_add(t, &(int32_t){1376744}, &(int32_t){-960085504});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010631}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2092546489}, &vp); }
    treetable_add(t, &(int32_t){2430786}, &(int32_t){-1140850688});
    treetable_add(t, &(int32_t){223}, &(int32_t){-689373388});
    treetable_add(t, &(int32_t){-1162149912}, &(int32_t){-1162167622});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    treetable_add(t, &(int32_t){1376744}, &(int32_t){-960085504});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }