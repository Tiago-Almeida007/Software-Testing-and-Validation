/* id_000216_src_000003+000202_time_590_execs_25079_op_splice_rep_8.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1182793728}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){14662844}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1793}, &kp); }
    treetable_add(t, &(int32_t){-256}, &(int32_t){336875600});
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){2430740});
    treetable_add(t, &(int32_t){-102177304}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1946157056}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){1347440720}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){18683068}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){16794112}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){459092}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-891682855}, &kp); }
    treetable_add(t, &(int32_t){-689373388}, &(int32_t){-385881880});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-891682855}, &kp); }
    treetable_add(t, &(int32_t){-637582848}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    { void *vp; treetable_get(t, &(int32_t){2135031808}, &vp); }
    treetable_add(t, &(int32_t){2088532992}, &(int32_t){-1179026308});
    { void *vp; treetable_get(t, &(int32_t){-13369159}, &vp); }
    treetable_add(t, &(int32_t){1346538496}, &(int32_t){336860180});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-1179010561});
    { void *vp; treetable_get(t, &(int32_t){-388366375}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){-2490559}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959784449}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2092546489}, &vp); }
    treetable_add(t, &(int32_t){2430786}, &(int32_t){-1140849664});
    treetable_add(t, &(int32_t){223}, &(int32_t){-689373388});
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){1107296277}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-12451856}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-654303047}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-116169728});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }