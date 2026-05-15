/* id_000316_src_000003+000308_time_556895_execs_11299586_op_splice_rep_55.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085807}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600126975}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1130692735}, &kp); }
    treetable_add(t, &(int32_t){459008}, &(int32_t){1465380590});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459617884}, &kp); }
    treetable_add(t, &(int32_t){2071690107}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16361}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-943224182}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208509}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){255983616}, &vp); }
    treetable_add(t, &(int32_t){1107296416}, &(int32_t){-1968469306});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){7185}, &(int32_t){-1971322893});
    { void *vp; treetable_get(t, &(int32_t){4603}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){33554432}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){251871744}, &(int32_t){50331648});
    { void *kp; treetable_get_greater_than(t, &(int32_t){65732608}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){983830}, &kp); }
    treetable_add(t, &(int32_t){252182528}, &(int32_t){128});
    treetable_add(t, &(int32_t){1835748}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-973078507}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959787265}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){1845497950});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-369164288}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-6250336}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){3252384}, &(int32_t){7});
    treetable_add(t, &(int32_t){0}, &(int32_t){-2146107110});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-437780507}, &kp); }
    treetable_add(t, &(int32_t){1677983759}, &(int32_t){-808464433});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    treetable_add(t, &(int32_t){1140784640}, &(int32_t){1124204355});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16724017}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){17099}, &(int32_t){-520093630});
    { void *vp; treetable_get(t, &(int32_t){-5764265}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){32}, &vp); }
    treetable_add(t, &(int32_t){-1347440745}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){137}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){6588809});
    { void *vp; treetable_get(t, &(int32_t){-1811939328}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){5377}, &(int32_t){50754});
    treetable_add(t, &(int32_t){1107290115}, &(int32_t){-1996480447});
    { void *vp; treetable_get(t, &(int32_t){10520969}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-32495319}, &kp); }
    treetable_add(t, &(int32_t){-3072}, &(int32_t){-16776961});
    { void *vp; treetable_get(t, &(int32_t){536870912}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-16842752}, &(int32_t){223});
    { void *vp; treetable_get(t, &(int32_t){4607}, &vp); }
    treetable_add(t, &(int32_t){1465341925}, &(int32_t){-2088544425});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1749379177}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1667465345}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1600349028}, &(int32_t){172192});
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440513}, &kp); }
    treetable_add(t, &(int32_t){-1347440692}, &(int32_t){-26103889});
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    treetable_add(t, &(int32_t){-419495913}, &(int32_t){16794112});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385928192}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094795585}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1355829329}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690159}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1350861957}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2021884803}, &vp); }
    treetable_add(t, &(int32_t){43}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){1358728413}, &(int32_t){336860180});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){14614291}, &(int32_t){1600061440});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15516929}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-16607361});
    { void *kp; treetable_get_greater_than(t, &(int32_t){545218426}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1543503712}, &(int32_t){-1515870826});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761362}, &kp); }
    treetable_add(t, &(int32_t){-134217712}, &(int32_t){20});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16729067}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968752926}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){23272955}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    treetable_add(t, &(int32_t){16842778}, &(int32_t){-168492799});
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-2128256000}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139046585}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){555810816}, &kp); }
    treetable_add(t, &(int32_t){251854848}, &(int32_t){33554432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-100142876}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){-637543937}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1343513620}, &kp); }
    treetable_add(t, &(int32_t){-1140845467}, &(int32_t){72980});
    { void *vp; treetable_get(t, &(int32_t){-955842049}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-10526721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){4064}, &kp); }
    treetable_add(t, &(int32_t){-468778496}, &(int32_t){117049328});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-959789113}, &kp); }
    treetable_add(t, &(int32_t){-960037054}, &(int32_t){5376});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){437918368}, &(int32_t){437918234});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){355016448}, &(int32_t){-943218528});
    { void *kp; treetable_get_greater_than(t, &(int32_t){13018826}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387042087}, &kp); }
    treetable_add(t, &(int32_t){-960085504}, &(int32_t){-267059002});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600061631}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2135024640}, &vp); }
    treetable_add(t, &(int32_t){2088535552}, &(int32_t){-16745356});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178076347}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-942028857}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225799}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655765}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147483648}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1884640597}, &kp); }
    treetable_add(t, &(int32_t){458752}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-536972981});
    treetable_add(t, &(int32_t){-13369344}, &(int32_t){-387389208});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15138560}, &kp); }
    treetable_add(t, &(int32_t){52}, &(int32_t){12326215});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-102243055}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16827970}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){19291}, &kp); }
    treetable_add(t, &(int32_t){-8454137}, &(int32_t){-638107136});
    treetable_add(t, &(int32_t){-1600082528}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071493499}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){303305748}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    treetable_add(t, &(int32_t){1593835776}, &(int32_t){545226746});
    { void *vp; treetable_get(t, &(int32_t){-1978325721}, &vp); }
    treetable_add(t, &(int32_t){2071690144}, &(int32_t){2071689595});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388841}, &kp); }
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){-1179010795}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179049799}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){336868116}, &(int32_t){1326841369});
    treetable_add(t, &(int32_t){1330597887}, &(int32_t){-264816817});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-642136378}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1018798241}, &kp); }
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
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336903168});
    { void *vp; treetable_get(t, &(int32_t){-15461356}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-65536}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2136963679}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){138}, &vp); }
    treetable_add(t, &(int32_t){8618883}, &(int32_t){-1614363070});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1197564226}, &kp); }
    treetable_add(t, &(int32_t){538976313}, &(int32_t){-484433893});
    { void *vp; treetable_get(t, &(int32_t){-2147425309}, &vp); }
    treetable_add(t, &(int32_t){-1347444576}, &(int32_t){-1347440721});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){547397792}, &(int32_t){-943208505});
    treetable_add(t, &(int32_t){0}, &(int32_t){-945044480});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    treetable_add(t, &(int32_t){1895825408}, &(int32_t){1262897995});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604405}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){-1608449920}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){16744352});
    treetable_add(t, &(int32_t){-1358749407}, &(int32_t){-1600082001});
    treetable_add(t, &(int32_t){1073774592}, &(int32_t){-469631232});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-943208509});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139063679}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2139062143}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){8388608}, &(int32_t){33488960});
    treetable_add(t, &(int32_t){501507300}, &(int32_t){488447261});
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-484631267}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1073741824});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-956305408}, &(int32_t){-255655738});
    { void *kp; treetable_get_greater_than(t, &(int32_t){459073}, &kp); }
    treetable_add(t, &(int32_t){-454761277}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){2071755900}, &(int32_t){335641344});
    treetable_add(t, &(int32_t){325915156}, &(int32_t){16244223});
    treetable_add(t, &(int32_t){2086600705}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){390237308}, &(int32_t){1852702757});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){107873025});
    { void *vp; treetable_get(t, &(int32_t){1122297060}, &vp); }
    treetable_add(t, &(int32_t){67114232}, &(int32_t){-1139783936});
    { void *vp; treetable_get(t, &(int32_t){-960051527}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139160831}, &kp); }
    treetable_add(t, &(int32_t){2092546521}, &(int32_t){16});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-296265889}, &kp); }
    treetable_add(t, &(int32_t){-296288245}, &(int32_t){1116493806});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147482322}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1342144576}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597199}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-11763457}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-13309714}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-387389417}, &(int32_t){65595637});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16777216}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }