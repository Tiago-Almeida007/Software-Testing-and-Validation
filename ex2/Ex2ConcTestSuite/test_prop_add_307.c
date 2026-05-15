/* id_000307_src_000004+000304_time_535531_execs_11006046_op_splice_rep_22.c
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
    treetable_add(t, &(int32_t){459008}, &(int32_t){1465380590});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459617884}, &kp); }
    treetable_add(t, &(int32_t){2071690107}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16361}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208509}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){255983616}, &vp); }
    treetable_add(t, &(int32_t){1107296416}, &(int32_t){-1968469306});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){7196}, &(int32_t){-1971322893});
    { void *vp; treetable_get(t, &(int32_t){4603}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){33554432}, &kp); }
    treetable_add(t, &(int32_t){3843}, &(int32_t){1374208});
    treetable_add(t, &(int32_t){251871744}, &(int32_t){50331648});
    { void *kp; treetable_get_greater_than(t, &(int32_t){65732608}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){983830}, &kp); }
    treetable_add(t, &(int32_t){251789312}, &(int32_t){-467860736});
    treetable_add(t, &(int32_t){1835748}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-973078507}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959784449}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){1845497950});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-369164288}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){3252384}, &(int32_t){7});
    treetable_add(t, &(int32_t){0}, &(int32_t){-2146107110});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-437780507}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1677983759}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){1424138400}, &(int32_t){1120600064});
    treetable_add(t, &(int32_t){16896}, &(int32_t){5705185});
    treetable_add(t, &(int32_t){459263}, &(int32_t){2113857});
    treetable_add(t, &(int32_t){-553614848}, &(int32_t){-1349058560});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1376356}, &vp); }
    treetable_add(t, &(int32_t){-2088528748}, &(int32_t){-1601993853});
    { void *kp; treetable_get_greater_than(t, &(int32_t){32015166}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1987475200}, &(int32_t){16818313});
    { void *vp; treetable_get(t, &(int32_t){697016480}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){2097152});
    treetable_add(t, &(int32_t){-2088533248}, &(int32_t){-1685879933});
    { void *kp; treetable_get_greater_than(t, &(int32_t){32015235}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2097152000}, &(int32_t){57088});
    treetable_add(t, &(int32_t){1536}, &(int32_t){1465341925});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1750093905}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139068311}, &kp); }
    treetable_add(t, &(int32_t){52502784}, &(int32_t){-1414549585});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-860901457}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14679665}, &kp); }
    treetable_add(t, &(int32_t){401139944}, &(int32_t){15138560});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1092032488}, &(int32_t){1094795585});
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1347468991}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533629}, &vp); }
    treetable_add(t, &(int32_t){2818048}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1931673600}, &(int32_t){336875772});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){-960036880});
    treetable_add(t, &(int32_t){1107292355}, &(int32_t){1793});
    treetable_add(t, &(int32_t){-15489630}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-989765793}, &kp); }
    treetable_add(t, &(int32_t){-1600089696}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-2122342240});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-1610610944});
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1516854272});
    { void *vp; treetable_get(t, &(int32_t){-31067}, &vp); }
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){-400222445});
    treetable_add(t, &(int32_t){-462552319}, &(int32_t){-454761244});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1139456256}, &(int32_t){-451805440});
    { void *kp; treetable_get_greater_than(t, &(int32_t){14816249}, &kp); }
    treetable_add(t, &(int32_t){502993764}, &(int32_t){-968752767});
    treetable_add(t, &(int32_t){16843009}, &(int32_t){16843009});
    { void *vp; treetable_get(t, &(int32_t){-2147483391}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1677784565}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1119485827}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){65407}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){-253489406}, &(int32_t){-955844089});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-960046593});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){342171775}, &(int32_t){487898112});
    { void *vp; treetable_get(t, &(int32_t){33547520}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-15461356}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385875969}, &kp); }
    treetable_add(t, &(int32_t){660995840}, &(int32_t){689897472});
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2135024640}, &vp); }
    treetable_add(t, &(int32_t){2088535552}, &(int32_t){-16745356});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-943208505}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178096953}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1783977301}, &vp); }
    treetable_add(t, &(int32_t){1434451968}, &(int32_t){1465341269});
    { void *vp; treetable_get(t, &(int32_t){1433425237}, &vp); }
    treetable_add(t, &(int32_t){1426065152}, &(int32_t){1265980757});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-951366837}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16744192}, &kp); }
    treetable_add(t, &(int32_t){10526893}, &(int32_t){-960085504});
    treetable_add(t, &(int32_t){2071662624}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071689339}, &kp); }
    treetable_add(t, &(int32_t){1829901332}, &(int32_t){14614291});
    treetable_add(t, &(int32_t){1593835776}, &(int32_t){545226746});
    { void *vp; treetable_get(t, &(int32_t){-1978335193}, &vp); }
    treetable_add(t, &(int32_t){2071690144}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388841}, &kp); }
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){-1179010795}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179049799}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){-266994151});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-642136378}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){4194432}, &(int32_t){-454819329});
    treetable_add(t, &(int32_t){-1008409372}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){8382702}, &(int32_t){-1945959960});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){336855040}, &(int32_t){2434327});
    treetable_add(t, &(int32_t){65536}, &(int32_t){335544320});
    treetable_add(t, &(int32_t){9495}, &(int32_t){-1946148864});
    treetable_add(t, &(int32_t){1595151380}, &(int32_t){1601896319});
    { void *kp; treetable_get_greater_than(t, &(int32_t){5200}, &kp); }
    treetable_add(t, &(int32_t){1595151380}, &(int32_t){1601896319});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860240}, &kp); }
    treetable_add(t, &(int32_t){336860161}, &(int32_t){20735});
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){-15504110}, &(int32_t){16777438});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1601855327}, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-394262784});
    treetable_add(t, &(int32_t){-2088533016}, &(int32_t){-960085504});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633763601}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){538989312}, &vp); }
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){199});
    treetable_add(t, &(int32_t){-945044480}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2105376075}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1262897995}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){17236384});
    treetable_add(t, &(int32_t){1677723392}, &(int32_t){1467776124});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-286369961}, &kp); }
    treetable_add(t, &(int32_t){-403810560}, &(int32_t){1376744});
    treetable_add(t, &(int32_t){2139029826}, &(int32_t){2139062143});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094795585}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600094337}, &kp); }
    treetable_add(t, &(int32_t){33488960}, &(int32_t){-454761244});
    { void *kp; treetable_get_greater_than(t, &(int32_t){58596}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){-16777209});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347440895}, &kp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){2088532992});
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){1116503164});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1852702757}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){107873025}, &(int32_t){-454761243});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1139456256}, &(int32_t){-960054855});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){548995312}, &kp); }
    treetable_add(t, &(int32_t){16}, &(int32_t){1465343831});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1169996800}, &(int32_t){1330597711});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1867468623}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){57168}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387393816}, &kp); }
    treetable_add(t, &(int32_t){1246423272}, &(int32_t){1246382666});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-637582848}, &(int32_t){2145971764});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){194}, &(int32_t){1111640008});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }