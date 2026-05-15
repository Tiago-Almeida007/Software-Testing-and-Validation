/* id_000327_src_000003+000321_time_563796_execs_11367111_op_splice_rep_31.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){788725775}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2136963679}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-369132677}, &kp); }
    treetable_add(t, &(int32_t){-1006632960}, &(int32_t){1263257515});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2102086475}, &kp); }
    treetable_add(t, &(int32_t){1263235328}, &(int32_t){537067590});
    treetable_add(t, &(int32_t){-1970643712}, &(int32_t){-3684409});
    { void *vp; treetable_get(t, &(int32_t){-2490559}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959784449}, &vp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1966718464});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1853191542}, &kp); }
    treetable_add(t, &(int32_t){437523476}, &(int32_t){6558740});
    { void *vp; treetable_get(t, &(int32_t){5376}, &vp); }
    treetable_add(t, &(int32_t){303300608}, &(int32_t){16716653});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){7185}, &(int32_t){-1971322893});
    { void *vp; treetable_get(t, &(int32_t){4603}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1475276375}, &kp); }
    treetable_add(t, &(int32_t){3840}, &(int32_t){1350656});
    treetable_add(t, &(int32_t){-945109248}, &(int32_t){-2508359});
    { void *vp; treetable_get(t, &(int32_t){63424455}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){983830}, &kp); }
    treetable_add(t, &(int32_t){252182528}, &(int32_t){128});
    treetable_add(t, &(int32_t){1835748}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-973078507}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959787265}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){1845497950});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600126976}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){117453216});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-2146107110}, &(int32_t){-402659841});
    { void *vp; treetable_get(t, &(int32_t){-318832640}, &vp); }
    treetable_add(t, &(int32_t){-808464433}, &(int32_t){-808464433});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-70287360}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1414812721}, &kp); }
    treetable_add(t, &(int32_t){-2147483648}, &(int32_t){-16777217});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1392639811}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1076899889}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    treetable_add(t, &(int32_t){-1970632032}, &(int32_t){21730});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107296322}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){33531915}, &kp); }
    treetable_add(t, &(int32_t){-2113929216}, &(int32_t){57088});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){520093696}, &vp); }
    treetable_add(t, &(int32_t){-1920098144}, &(int32_t){-1920103027});
    { void *vp; treetable_get(t, &(int32_t){-1987469171}, &vp); }
    treetable_add(t, &(int32_t){-1802202112}, &(int32_t){-2088528748});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1822458755}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){541147647}, &(int32_t){-1987475200});
    { void *vp; treetable_get(t, &(int32_t){-1593769824}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2145386000}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968717312}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-12}, &(int32_t){-33619968});
    treetable_add(t, &(int32_t){2097152}, &(int32_t){-2088566784});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){57088}, &vp); }
    treetable_add(t, &(int32_t){-536936704}, &(int32_t){419430400});
    { void *kp; treetable_get_greater_than(t, &(int32_t){17}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2097152000}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1751658857}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1667457921}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1600086884}, &(int32_t){117441184});
    { void *vp; treetable_get(t, &(int32_t){458752}, &vp); }
    treetable_add(t, &(int32_t){-1347440721}, &(int32_t){-536972881});
    treetable_add(t, &(int32_t){-13369344}, &(int32_t){15263976});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){4325606}, &kp); }
    treetable_add(t, &(int32_t){2465953}, &(int32_t){-8437248});
    treetable_add(t, &(int32_t){0}, &(int32_t){-204});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1128481089}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347432497}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347477329}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440688}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690079}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088664211}, &kp); }
    treetable_add(t, &(int32_t){721420288}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){1662909203}, &(int32_t){12993025});
    treetable_add(t, &(int32_t){1263206401}, &(int32_t){4938571});
    treetable_add(t, &(int32_t){12984320}, &(int32_t){2130708224});
    treetable_add(t, &(int32_t){-1931673600}, &(int32_t){336875772});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){0});
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){-15511472}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-989765793}, &kp); }
    treetable_add(t, &(int32_t){-1600089696}, &(int32_t){-1602379616});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1753243488});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-1610610944});
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1600740352});
    treetable_add(t, &(int32_t){-1918852960}, &(int32_t){-1920103027});
    { void *vp; treetable_get(t, &(int32_t){-1985966707}, &vp); }
    treetable_add(t, &(int32_t){-2035964507}, &(int32_t){1347485695});
    treetable_add(t, &(int32_t){437523476}, &(int32_t){387146772});
    { void *vp; treetable_get(t, &(int32_t){50456808}, &vp); }
    treetable_add(t, &(int32_t){213732}, &(int32_t){-134217712});
    treetable_add(t, &(int32_t){1191182336}, &(int32_t){-16729067});
    { void *vp; treetable_get(t, &(int32_t){335144933}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16711937}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430335}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8158333}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8421505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){983830}, &kp); }
    treetable_add(t, &(int32_t){251789312}, &(int32_t){-100142876});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-637543937});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){545199124}, &(int32_t){-1140845467});
    treetable_add(t, &(int32_t){-452984547}, &(int32_t){-1343690497});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385928017}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-5263409}, &vp); }
    treetable_add(t, &(int32_t){3843}, &(int32_t){-468778496});
    treetable_add(t, &(int32_t){-955844089}, &(int32_t){-959789113});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1107296277}, &(int32_t){-13369097});
    treetable_add(t, &(int32_t){-1593895916}, &(int32_t){437918368});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2582015}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){-943208544}, &(int32_t){13018826});
    treetable_add(t, &(int32_t){-12451840}, &(int32_t){-387042087});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1395274}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){631283840}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388611}, &kp); }
    treetable_add(t, &(int32_t){-16842628}, &(int32_t){223});
    { void *vp; treetable_get(t, &(int32_t){-16728647}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-942014503}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-353703190}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1526726656}, &(int32_t){165});
    treetable_add(t, &(int32_t){-1179047649}, &(int32_t){13027014});
    { void *vp; treetable_get(t, &(int32_t){-14680080}, &vp); }
    treetable_add(t, &(int32_t){-654303047}, &(int32_t){276609465});
    treetable_add(t, &(int32_t){1601765376}, &(int32_t){703485783});
    { void *vp; treetable_get(t, &(int32_t){2697513}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655767}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440512}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){-26129664});
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    treetable_add(t, &(int32_t){-419495913}, &(int32_t){16794112});
    { void *kp; treetable_get_greater_than(t, &(int32_t){13312}, &kp); }
    treetable_add(t, &(int32_t){-404352513}, &(int32_t){14816249});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){12993025}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){4938571}, &kp); }
    treetable_add(t, &(int32_t){2130708224}, &(int32_t){-146669313});
    { void *vp; treetable_get(t, &(int32_t){-1599233888}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2004581243}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860161}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){65536}, &(int32_t){2139093599});
    treetable_add(t, &(int32_t){354756453}, &(int32_t){138});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071699456}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147423745}, &kp); }
    treetable_add(t, &(int32_t){-452990744}, &(int32_t){-943209500});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1427146}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){2141233312});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){339206400}, &(int32_t){336860195});
    treetable_add(t, &(int32_t){4342262}, &(int32_t){-1654915584});
    treetable_add(t, &(int32_t){-2088533247}, &(int32_t){-1263225725});
    treetable_add(t, &(int32_t){-1263225676}, &(int32_t){-1263225676});
    treetable_add(t, &(int32_t){-2088520524}, &(int32_t){-8158333});
    { void *vp; treetable_get(t, &(int32_t){-1169101684}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-956305353}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600086015}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){390237187}, &vp); }
    treetable_add(t, &(int32_t){-809251071}, &(int32_t){-1412450097});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1963}, &kp); }
    treetable_add(t, &(int32_t){388830208}, &(int32_t){9509});
    treetable_add(t, &(int32_t){256}, &(int32_t){336855040});
    { void *kp; treetable_get_greater_than(t, &(int32_t){37}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336903168}, &(int32_t){336860161});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16777296}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){340809983}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2581792}, &kp); }
    treetable_add(t, &(int32_t){-387448320}, &(int32_t){-27});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){587202560}, &kp); }
    treetable_add(t, &(int32_t){-1614363070}, &(int32_t){-1633763601});
    treetable_add(t, &(int32_t){754974720}, &(int32_t){538982656});
    { void *vp; treetable_get(t, &(int32_t){-14680064}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1111556096});
    { void *kp; treetable_get_greater_than(t, &(int32_t){37}, &kp); }
    treetable_add(t, &(int32_t){-1600086016}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){228});
    treetable_add(t, &(int32_t){-945044480}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2113502539}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1262897995}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1600086016});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085885});
    treetable_add(t, &(int32_t){16744352}, &(int32_t){52502784});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1449087057}, &kp); }
    treetable_add(t, &(int32_t){-469631232}, &(int32_t){-387652380});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1179052799});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1108404409}, &vp); }
    treetable_add(t, &(int32_t){21102592}, &(int32_t){2139062143});
    { void *vp; treetable_get(t, &(int32_t){2139062144}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094811519}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){4194432}, &(int32_t){-454819329});
    treetable_add(t, &(int32_t){488447460}, &(int32_t){488447261});
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-454761699}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){16384});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){13027071}, &(int32_t){1107292355});
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){2080433380});
    treetable_add(t, &(int32_t){2063629180}, &(int32_t){336860161});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2088541279}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){2430786}, &(int32_t){1852730990});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){51374312}, &(int32_t){-454752658});
    treetable_add(t, &(int32_t){213732}, &(int32_t){-134217712});
    treetable_add(t, &(int32_t){1191183360}, &(int32_t){-1179010032});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){16744321}, &(int32_t){-654303047});
    { void *vp; treetable_get(t, &(int32_t){1080505}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){33554432}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1139310592}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    treetable_add(t, &(int32_t){1330597887}, &(int32_t){1330597711});
    { void *vp; treetable_get(t, &(int32_t){-548384945}, &vp); }
    treetable_add(t, &(int32_t){-689373364}, &(int32_t){-654317336});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1973616640});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-959789113}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1246382689}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-170989336}, &kp); }
    treetable_add(t, &(int32_t){-16842752}, &(int32_t){34603231});
    { void *vp; treetable_get(t, &(int32_t){2130711039}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-402522112}, &(int32_t){-6680});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-41121}, &kp); }
    treetable_add(t, &(int32_t){15}, &(int32_t){-2088507389});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1246380544}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }