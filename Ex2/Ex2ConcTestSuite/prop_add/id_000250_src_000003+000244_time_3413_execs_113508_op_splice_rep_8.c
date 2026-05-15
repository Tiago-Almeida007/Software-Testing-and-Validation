/* id_000250_src_000003+000244_time_3413_execs_113508_op_splice_rep_8.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761472}, &kp); }
    treetable_add(t, &(int32_t){352387072}, &(int32_t){-1127874560});
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){1852731112});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){3252384}, &(int32_t){7});
    treetable_add(t, &(int32_t){0}, &(int32_t){-2146107110});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-452984603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16646159}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533629}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088531069}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533141}, &vp); }
    treetable_add(t, &(int32_t){100696064}, &(int32_t){-1769472});
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){-1347452929}, &(int32_t){-1514229841});
    { void *vp; treetable_get(t, &(int32_t){-1515870811}, &vp); }
    treetable_add(t, &(int32_t){-1532648192}, &(int32_t){-1515870811});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-502007320}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-116169728});
    { void *vp; treetable_get(t, &(int32_t){-2088533119}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){553648383}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){336875600}, &(int32_t){-1140845548});
    treetable_add(t, &(int32_t){-452984547}, &(int32_t){17236479});
    treetable_add(t, &(int32_t){117442304}, &(int32_t){-65536});
    { void *kp; treetable_get_greater_than(t, &(int32_t){303305748}, &kp); }
    treetable_add(t, &(int32_t){689897472}, &(int32_t){-1600085995});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){1107296293});
    { void *kp; treetable_get_greater_than(t, &(int32_t){255}, &kp); }
    treetable_add(t, &(int32_t){-16745348}, &(int32_t){57342});
    treetable_add(t, &(int32_t){-943212263}, &(int32_t){-943208519});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-637544007}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1413232697}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-960085504});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1042945}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){690563530}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15263976}, &kp); }
    treetable_add(t, &(int32_t){-2088533247}, &(int32_t){-2088533629});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1931608189}, &kp); }
    treetable_add(t, &(int32_t){353638932}, &(int32_t){-960036880});
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-1174414849});
    { void *vp; treetable_get(t, &(int32_t){467253689}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-960085504});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633763585}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){538989312}, &vp); }
    treetable_add(t, &(int32_t){-387423232}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1597584679}, &kp); }
    treetable_add(t, &(int32_t){-2147483488}, &(int32_t){-16760832});
    { void *vp; treetable_get(t, &(int32_t){-469762014}, &vp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){1122297060}, &(int32_t){3843});
    treetable_add(t, &(int32_t){5368}, &(int32_t){1845707264});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-960054855}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2490559}, &kp); }
    treetable_add(t, &(int32_t){-1179002624}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){706167436}, &(int32_t){5});
    treetable_add(t, &(int32_t){57276}, &(int32_t){-385928192});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){14614659}, &(int32_t){100696064});
    treetable_add(t, &(int32_t){33547520}, &(int32_t){3});
    treetable_add(t, &(int32_t){458759}, &(int32_t){-256});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){352393748});
    treetable_add(t, &(int32_t){-1179041280}, &(int32_t){2130706439});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1095782481}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){117548453}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1515870812}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }