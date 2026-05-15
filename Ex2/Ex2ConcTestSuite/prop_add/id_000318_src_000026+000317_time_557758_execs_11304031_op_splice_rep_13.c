/* id_000318_src_000026+000317_time_557758_execs_11304031_op_splice_rep_13.c
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
    { void *vp; treetable_get(t, &(int32_t){-1482381388}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1482184793}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-10526881}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2053070687}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600061535}, &kp); }
    treetable_add(t, &(int32_t){1465380590}, &(int32_t){23639});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1868033774}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    treetable_add(t, &(int32_t){8195}, &(int32_t){-947221878});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085799}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1970632054}, &kp); }
    treetable_add(t, &(int32_t){471603996}, &(int32_t){1839388});
    treetable_add(t, &(int32_t){-1971322893}, &(int32_t){1178393});
    treetable_add(t, &(int32_t){37879808}, &(int32_t){67});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1374208}, &(int32_t){54657024});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){757935366}, &(int32_t){925707565});
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    treetable_add(t, &(int32_t){23699616}, &(int32_t){-2031609});
    treetable_add(t, &(int32_t){1430585344}, &(int32_t){1783977301});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1835748}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-973078507}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-959784449}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1315860}, &kp); }
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){1845497950});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385875968}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){832611488});
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){1256777960});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-808464433}, &(int32_t){-808464433});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-70287360}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){53199}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464449}, &kp); }
    treetable_add(t, &(int32_t){355016448}, &(int32_t){6594720});
    treetable_add(t, &(int32_t){1120600064}, &(int32_t){4325376});
    treetable_add(t, &(int32_t){190254561}, &(int32_t){117571496});
    treetable_add(t, &(int32_t){2113857}, &(int32_t){8577023});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1349058560}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1599098961}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-943208672}, &(int32_t){51143});
    treetable_add(t, &(int32_t){-1413218304}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1984974929}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){5377}, &(int32_t){50754});
    treetable_add(t, &(int32_t){1107290115}, &(int32_t){-1996480447});
    treetable_add(t, &(int32_t){10520969}, &(int32_t){-1600085759});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-32495319}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){536870912}, &(int32_t){-2095054848});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){5364}, &vp); }
    treetable_add(t, &(int32_t){1107290114}, &(int32_t){8257});
    treetable_add(t, &(int32_t){14614659}, &(int32_t){117538816});
    treetable_add(t, &(int32_t){150929408}, &(int32_t){336070664});
    treetable_add(t, &(int32_t){5182484}, &(int32_t){742558740});
    { void *vp; treetable_get(t, &(int32_t){1460928532}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1749379177}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600094337}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){458752}, &vp); }
    treetable_add(t, &(int32_t){-1347440721}, &(int32_t){-536972881});
    treetable_add(t, &(int32_t){-13369344}, &(int32_t){-387389208});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15138560}, &kp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){387442920});
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347473745}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347473489}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088521861}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16742514}, &kp); }
    treetable_add(t, &(int32_t){16711680}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-587202560});
    treetable_add(t, &(int32_t){336875772}, &(int32_t){337253396});
    { void *vp; treetable_get(t, &(int32_t){-960036880}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1793}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){221}, &kp); }
    treetable_add(t, &(int32_t){1291845632}, &(int32_t){17159});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-989765793}, &kp); }
    treetable_add(t, &(int32_t){-1600089696}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1753243488});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-1610610944});
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1516854272});
    { void *vp; treetable_get(t, &(int32_t){-31067}, &vp); }
    treetable_add(t, &(int32_t){1679038996}, &(int32_t){-400222445});
    treetable_add(t, &(int32_t){-462552319}, &(int32_t){-454761244});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1139456256}, &(int32_t){-451805440});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16847865}, &kp); }
    treetable_add(t, &(int32_t){16843009}, &(int32_t){-168430091});
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    treetable_add(t, &(int32_t){-2088533723}, &(int32_t){-1174436989});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){369131520}, &(int32_t){3843});
    treetable_add(t, &(int32_t){3843}, &(int32_t){-468778496});
    treetable_add(t, &(int32_t){-955882460}, &(int32_t){-959789113});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-642139705}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-960046593});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2139037823}, &(int32_t){2139062143});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){347865108}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-523827455}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943257862}, &kp); }
    treetable_add(t, &(int32_t){1107359765}, &(int32_t){13027071});
    { void *vp; treetable_get(t, &(int32_t){-146669568}, &vp); }
    treetable_add(t, &(int32_t){-1600061676}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336914687}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){10085}, &kp); }
    treetable_add(t, &(int32_t){-2130730848}, &(int32_t){2465952});
    treetable_add(t, &(int32_t){16744257}, &(int32_t){32768});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1189543936}, &(int32_t){-939589443});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943215673}, &kp); }
    treetable_add(t, &(int32_t){-387389439}, &(int32_t){1465362432});
    { void *vp; treetable_get(t, &(int32_t){1466390359}, &vp); }
    treetable_add(t, &(int32_t){339206400}, &(int32_t){-954985437});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178096953}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-942028857}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225799}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655765}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147483648}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1884640597}, &kp); }
    treetable_add(t, &(int32_t){458752}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225690}, &kp); }
    treetable_add(t, &(int32_t){-8389114}, &(int32_t){-638107136});
    treetable_add(t, &(int32_t){-1600082528}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071493499}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){303305748}, &vp); }
    treetable_add(t, &(int32_t){65536}, &(int32_t){2139093599});
    treetable_add(t, &(int32_t){354756453}, &(int32_t){138});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071699456}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147423745}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-12451840}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50456576}, &kp); }
    treetable_add(t, &(int32_t){16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){623187732}, &(int32_t){-1513284});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1189805592});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){15251897}, &vp); }
    treetable_add(t, &(int32_t){-2088533247}, &(int32_t){-2088533134});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1931608189}, &kp); }
    treetable_add(t, &(int32_t){368974100}, &(int32_t){1342144591});
    { void *kp; treetable_get_greater_than(t, &(int32_t){926371663}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-811721767}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085856}, &kp); }
    treetable_add(t, &(int32_t){-469631232}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){-943208509}, &(int32_t){13027018});
    { void *vp; treetable_get(t, &(int32_t){-12451840}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50456576}, &kp); }
    treetable_add(t, &(int32_t){16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){623187732}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_add(t, &(int32_t){2097152}, &(int32_t){336860300});
    treetable_add(t, &(int32_t){2063564639}, &(int32_t){340819807});
    treetable_add(t, &(int32_t){2097152}, &(int32_t){336860300});
    treetable_add(t, &(int32_t){2063564639}, &(int32_t){340819807});
    treetable_add(t, &(int32_t){5140}, &(int32_t){-386715648});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){20735}, &(int32_t){1793});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347952639}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16777438}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){660938879}, &kp); }
    treetable_add(t, &(int32_t){-394262784}, &(int32_t){-2088507160});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960085471}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){538975008}, &(int32_t){-471604253});
    treetable_add(t, &(int32_t){-1608449920}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){547397792}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    treetable_add(t, &(int32_t){1895825408}, &(int32_t){1262897995});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604405}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){-1608449920}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){16744352});
    treetable_add(t, &(int32_t){-1358749407}, &(int32_t){-1600082001});
    treetable_add(t, &(int32_t){338493440}, &(int32_t){6065152});
    treetable_add(t, &(int32_t){-1819044973}, &(int32_t){-1819044461});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347426072}, &kp); }
    treetable_add(t, &(int32_t){4194432}, &(int32_t){-454819329});
    treetable_add(t, &(int32_t){-1008409372}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1098874751}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){1073741924}, &(int32_t){-469631232});
    { void *vp; treetable_get(t, &(int32_t){-454826908}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1347437196});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761244}, &kp); }
    treetable_add(t, &(int32_t){8092796}, &(int32_t){336855419});
    treetable_add(t, &(int32_t){-15504110}, &(int32_t){222});
    { void *vp; treetable_get(t, &(int32_t){2088525568}, &vp); }
    treetable_add(t, &(int32_t){68633228}, &(int32_t){1852730880});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){-452563453});
    treetable_add(t, &(int32_t){54715620}, &(int32_t){4096});
    treetable_add(t, &(int32_t){20}, &(int32_t){-1178857401});
    { void *vp; treetable_get(t, &(int32_t){13027014}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-260079360}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){276609465}, &vp); }
    treetable_add(t, &(int32_t){-286334720}, &(int32_t){1549227863});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-286370048}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-28356785}, &kp); }
    treetable_add(t, &(int32_t){1330642816}, &(int32_t){1347374927});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347374925}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385921920}, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){4868840});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107302655}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-387389440}, &(int32_t){-353703192});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-15138105}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }