/* id_000276_src_000003+000263_time_8962_execs_263919_op_splice_rep_12.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){3843}, &(int32_t){983808});
    treetable_add(t, &(int32_t){983808}, &(int32_t){-454819837});
    treetable_add(t, &(int32_t){2}, &(int32_t){16777216});
    { void *vp; treetable_get(t, &(int32_t){-1127874560}, &vp); }
    treetable_add(t, &(int32_t){1852731112}, &(int32_t){15});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331663}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){832610464});
    treetable_add(t, &(int32_t){7}, &(int32_t){4});
    treetable_add(t, &(int32_t){-2146107110}, &(int32_t){58879});
    { void *vp; treetable_get(t, &(int32_t){-318832640}, &vp); }
    treetable_add(t, &(int32_t){14614272}, &(int32_t){689897472});
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2135031808}, &vp); }
    treetable_add(t, &(int32_t){-2088507160}, &(int32_t){-2088533629});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088270973}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1786543229}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1804965269}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-12500481}, &(int32_t){-2088533031});
    treetable_add(t, &(int32_t){-2147483425}, &(int32_t){1536});
    { void *vp; treetable_get(t, &(int32_t){459263}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2147418112}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1526726656}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-31067}, &vp); }
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){2430740});
    treetable_add(t, &(int32_t){-102177304}, &(int32_t){1107354131});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){50754}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){1266614337}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    treetable_add(t, &(int32_t){1376744}, &(int32_t){2135048704});
    { void *kp; treetable_get_greater_than(t, &(int32_t){555810816}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-65536}, &kp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){347865108});
    { void *vp; treetable_get(t, &(int32_t){-1769471}, &vp); }
    treetable_add(t, &(int32_t){458759}, &(int32_t){-256});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){350814207}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){631283872});
    treetable_add(t, &(int32_t){-8437248}, &(int32_t){8388608});
    treetable_add(t, &(int32_t){2088533126}, &(int32_t){-16842628});
    { void *kp; treetable_get_greater_than(t, &(int32_t){419430400}, &kp); }
    treetable_add(t, &(int32_t){-16777209}, &(int32_t){1347485695});
    treetable_add(t, &(int32_t){-944126009}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-943203841}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1271376835}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085799}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){18513920}, &vp); }
    treetable_add(t, &(int32_t){58624}, &(int32_t){255323391});
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){222});
    treetable_add(t, &(int32_t){-234885856}, &(int32_t){271154043});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15263976}, &kp); }
    treetable_add(t, &(int32_t){1837335297}, &(int32_t){-2088533629});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1931608189}, &kp); }
    treetable_add(t, &(int32_t){353638932}, &(int32_t){-960036880});
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-1174414849});
    { void *vp; treetable_get(t, &(int32_t){467253689}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-385929216}, &(int32_t){-1513258});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-960068632});
    treetable_add(t, &(int32_t){1107296277}, &(int32_t){-298526209});
    treetable_add(t, &(int32_t){-65409}, &(int32_t){1616904191});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1601855327}, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-1610610944});
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-960085504});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633763601}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){538989312}, &vp); }
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){-945044537});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    treetable_add(t, &(int32_t){5377}, &(int32_t){16450});
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-2490559});
    { void *vp; treetable_get(t, &(int32_t){-642139719}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){41120});
    treetable_add(t, &(int32_t){-16760832}, &(int32_t){-454761471});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){351797248});
    treetable_add(t, &(int32_t){54657024}, &(int32_t){1852730990});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){-1179010027});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2088533177}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1322}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1342144591}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    treetable_add(t, &(int32_t){-689373392}, &(int32_t){-385881880});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){14614659});
    treetable_add(t, &(int32_t){393344}, &(int32_t){33547520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){22}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1970632192}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1792}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){1376538});
    treetable_add(t, &(int32_t){129612098}, &(int32_t){-1350631424});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }