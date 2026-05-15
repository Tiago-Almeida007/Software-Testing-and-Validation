/* id_000325_src_000003+000321_time_563046_execs_11366447_op_splice_rep_30.c
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
    treetable_add(t, &(int32_t){2080374784}, &(int32_t){1868004476});
    { void *vp; treetable_get(t, &(int32_t){2071690107}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-469745687}, &kp); }
    treetable_add(t, &(int32_t){1271376836}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8255869}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50349643}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-653311488}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-968753152}, &(int32_t){-1970623606});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-218103780}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){17}, &kp); }
    treetable_add(t, &(int32_t){1124204544}, &(int32_t){33554432});
    treetable_add(t, &(int32_t){15}, &(int32_t){5276});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){251915008}, &(int32_t){50331648});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2146498560}, &(int32_t){-469762048});
    treetable_add(t, &(int32_t){7170}, &(int32_t){16777216});
    { void *vp; treetable_get(t, &(int32_t){-1631191040}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13028046}, &kp); }
    treetable_add(t, &(int32_t){838865940}, &(int32_t){-1600085950});
    treetable_add(t, &(int32_t){1585422496}, &(int32_t){258867216});
    treetable_add(t, &(int32_t){-1600086016}, &(int32_t){-1600061536});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){458801});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){351076096}, &(int32_t){1677983759});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){-805580928}, &(int32_t){-808464445});
    { void *kp; treetable_get_greater_than(t, &(int32_t){128691115}, &kp); }
    treetable_add(t, &(int32_t){-1246382667}, &(int32_t){-1246382667});
    { void *vp; treetable_get(t, &(int32_t){1354085813}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){65280}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){1424138400}, &(int32_t){1120600064});
    treetable_add(t, &(int32_t){16896}, &(int32_t){190254561});
    treetable_add(t, &(int32_t){459263}, &(int32_t){2113857});
    treetable_add(t, &(int32_t){-553614848}, &(int32_t){-1349058560});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440692}, &kp); }
    treetable_add(t, &(int32_t){-1884356608}, &(int32_t){9023407});
    treetable_add(t, &(int32_t){65407}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1920103027}, &(int32_t){-1920103027});
    treetable_add(t, &(int32_t){6588809}, &(int32_t){21});
    treetable_add(t, &(int32_t){-1802201964}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2093060960}, &kp); }
    treetable_add(t, &(int32_t){-1952397758}, &(int32_t){-32495319});
    { void *kp; treetable_get_greater_than(t, &(int32_t){65407}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){9495}, &(int32_t){-786432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16776961}, &kp); }
    treetable_add(t, &(int32_t){-2097152000}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8323}, &kp); }
    treetable_add(t, &(int32_t){251756544}, &(int32_t){-16777216});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){393216}, &(int32_t){1465378048});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088544425}, &kp); }
    treetable_add(t, &(int32_t){-1347440765}, &(int32_t){-1164470377});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2140641175}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){171168}, &(int32_t){263});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2088526848}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-26103889}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-16771096});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){872415232}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1128481601}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440689}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440864}, &kp); }
    treetable_add(t, &(int32_t){2075111343}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533629}, &vp); }
    treetable_add(t, &(int32_t){2818048}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1189866496});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2092546489}, &vp); }
    treetable_add(t, &(int32_t){2430786}, &(int32_t){337253376});
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_add(t, &(int32_t){-256}, &(int32_t){324030544});
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1105133804}, &vp); }
    treetable_add(t, &(int32_t){-1602379616}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1753243488}, &(int32_t){2063597314});
    { void *kp; treetable_get_greater_than(t, &(int32_t){660938879}, &kp); }
    treetable_add(t, &(int32_t){-1610610944}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1516854272}, &(int32_t){-7952987});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    treetable_add(t, &(int32_t){-400222445}, &(int32_t){1845690856});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){268436290});
    treetable_add(t, &(int32_t){1374208}, &(int32_t){356974719});
    treetable_add(t, &(int32_t){-451805440}, &(int32_t){-502007577});
    treetable_add(t, &(int32_t){-1010383294}, &(int32_t){-810024832});
    { void *kp; treetable_get_greater_than(t, &(int32_t){502699}, &kp); }
    treetable_add(t, &(int32_t){756285440}, &(int32_t){2434327});
    treetable_add(t, &(int32_t){65536}, &(int32_t){335544320});
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    treetable_add(t, &(int32_t){-2088533723}, &(int32_t){-1174436989});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){369303841}, &(int32_t){3843});
    treetable_add(t, &(int32_t){3843}, &(int32_t){-468778496});
    treetable_add(t, &(int32_t){-955844089}, &(int32_t){-959789113});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-960046593}, &vp); }
    treetable_add(t, &(int32_t){336875540}, &(int32_t){1696628500});
    treetable_add(t, &(int32_t){487898112}, &(int32_t){-1769471});
    treetable_add(t, &(int32_t){-1347440664}, &(int32_t){-387383500});
    treetable_add(t, &(int32_t){-808341585}, &(int32_t){-520114257});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){352372422}, &kp); }
    treetable_add(t, &(int32_t){336920372}, &(int32_t){-1600061676});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    treetable_add(t, &(int32_t){357190271}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600093953}, &(int32_t){1105461285});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147482625}, &kp); }
    treetable_add(t, &(int32_t){-16745356}, &(int32_t){57342});
    treetable_add(t, &(int32_t){67075905}, &(int32_t){419463168});
    { void *vp; treetable_get(t, &(int32_t){-939589443}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1170720711}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-943203841}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1430997835}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){459385}, &vp); }
    treetable_add(t, &(int32_t){1427898368}, &(int32_t){471604252});
    treetable_add(t, &(int32_t){336860188}, &(int32_t){336860186});
    { void *kp; treetable_get_greater_than(t, &(int32_t){37}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1515892656}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960906967}, &kp); }
    treetable_add(t, &(int32_t){553590783}, &(int32_t){16744321});
    { void *vp; treetable_get(t, &(int32_t){-1176960992}, &vp); }
    treetable_add(t, &(int32_t){1465874688}, &(int32_t){690613847});
    { void *vp; treetable_get(t, &(int32_t){-2147473111}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1884640597}, &kp); }
    treetable_add(t, &(int32_t){458752}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-536972981});
    treetable_add(t, &(int32_t){-13369344}, &(int32_t){-387390488});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15138560}, &kp); }
    treetable_add(t, &(int32_t){16777268}, &(int32_t){12326215});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-102243055}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){50754}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){19291}, &kp); }
    treetable_add(t, &(int32_t){-8454137}, &(int32_t){-638107136});
    treetable_add(t, &(int32_t){-1600082528}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071427963}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){303305748}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    treetable_add(t, &(int32_t){1593835776}, &(int32_t){545226746});
    { void *vp; treetable_get(t, &(int32_t){-1978325721}, &vp); }
    treetable_add(t, &(int32_t){2071690144}, &(int32_t){2071689595});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388841}, &kp); }
    treetable_add(t, &(int32_t){-454754328}, &(int32_t){-943208509});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1610612736}, &(int32_t){1585422496});
    treetable_add(t, &(int32_t){-402129152}, &(int32_t){6051816});
    treetable_add(t, &(int32_t){588527585}, &(int32_t){1315860});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533117}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-326312449}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1326841500}, &(int32_t){1330642816});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-264816817}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960051495}, &kp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){342171775});
    treetable_add(t, &(int32_t){1600066748}, &(int32_t){1180655455});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-639286784}, &(int32_t){2145971764});
    treetable_add(t, &(int32_t){-1945959960}, &(int32_t){2430786});
    treetable_add(t, &(int32_t){-822018048}, &(int32_t){-1194340413});
    { void *kp; treetable_get_greater_than(t, &(int32_t){128691115}, &kp); }
    treetable_add(t, &(int32_t){335544320}, &(int32_t){623187757});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){2430740}, &(int32_t){1344274432});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){335614996});
    treetable_add(t, &(int32_t){-1246363884}, &(int32_t){-1246382667});
    { void *vp; treetable_get(t, &(int32_t){-1246382667}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1246382667}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1246382667}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-65281}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){138}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1610612735}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){266403839}, &kp); }
    treetable_add(t, &(int32_t){8618883}, &(int32_t){-1614363070});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1197564226}, &kp); }
    treetable_add(t, &(int32_t){538976313}, &(int32_t){-484433893});
    { void *vp; treetable_get(t, &(int32_t){-2147425309}, &vp); }
    treetable_add(t, &(int32_t){-1347444576}, &(int32_t){-1347440721});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){547397792}, &(int32_t){-943208505});
    treetable_add(t, &(int32_t){0}, &(int32_t){-945044480});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1895825408}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604405}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){-1608449920}, &(int32_t){10526880});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085856}, &kp); }
    treetable_add(t, &(int32_t){-1358749407}, &(int32_t){-1449087057});
    treetable_add(t, &(int32_t){1073774592}, &(int32_t){-469631232});
    treetable_add(t, &(int32_t){-387390236}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){-1179010795}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179049799}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2055241857}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2139046209}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){41120}, &(int32_t){4194432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1692722177}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){64}, &(int32_t){0});
    treetable_add(t, &(int32_t){-268435456}, &(int32_t){13027071});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860161}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-16711929}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1577058304}, &kp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){2088501476});
    treetable_add(t, &(int32_t){24838267}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){-136495085}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2088533148}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1845694440}, &(int32_t){-454761210});
    treetable_add(t, &(int32_t){268436290}, &(int32_t){351797248});
    treetable_add(t, &(int32_t){273088516}, &(int32_t){-960906820});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1191116929}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){4220}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465380590}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1940394258}, &kp); }
    treetable_add(t, &(int32_t){-1128523904}, &(int32_t){1330597701});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14635087}, &kp); }
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-388431896});
    treetable_add(t, &(int32_t){15263976}, &(int32_t){-1970643712});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2135017415}, &kp); }
    treetable_add(t, &(int32_t){-943212288}, &(int32_t){-943470649});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-8388587}, &(int32_t){-298526209});
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){401139944});
    treetable_add(t, &(int32_t){-386543897}, &(int32_t){459752});
    treetable_add(t, &(int32_t){-536936704}, &(int32_t){419565568});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1249837073}, &kp); }
    treetable_add(t, &(int32_t){1246382624}, &(int32_t){74});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-2081946880}, &(int32_t){1107329923});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }