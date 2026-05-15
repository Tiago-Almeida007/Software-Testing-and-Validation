/* id_000320_src_000026+000317_time_557774_execs_11304049_op_splice_rep_20.c
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
    treetable_add(t, &(int32_t){-1971322893}, &(int32_t){437386009});
    treetable_add(t, &(int32_t){37879808}, &(int32_t){67});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1374208}, &(int32_t){54657024});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){917519}, &kp); }
    treetable_add(t, &(int32_t){757935366}, &(int32_t){925707557});
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    treetable_add(t, &(int32_t){23699616}, &(int32_t){-2031609});
    treetable_add(t, &(int32_t){1430585344}, &(int32_t){1783977301});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1835748}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){-973078507}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    treetable_add(t, &(int32_t){1315860}, &(int32_t){-1600110030});
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){1845497950});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385875968}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){832610464});
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){1256777960});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-808464433}, &(int32_t){-808464433});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-70287360}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
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
    { void *vp; treetable_get(t, &(int32_t){-1811939328}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){5377}, &(int32_t){50754});
    treetable_add(t, &(int32_t){1107290115}, &(int32_t){-1996480447});
    treetable_add(t, &(int32_t){10520969}, &(int32_t){-1600085759});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){271133067}, &(int32_t){57342});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){32});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1373385}, &kp); }
    treetable_add(t, &(int32_t){-1572352}, &(int32_t){2113857});
    treetable_add(t, &(int32_t){-553614592}, &(int32_t){25165824});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16777216}, &kp); }
    treetable_add(t, &(int32_t){1326715924}, &(int32_t){1116476416});
    treetable_add(t, &(int32_t){335549493}, &(int32_t){-2091428009});
    { void *kp; treetable_get_greater_than(t, &(int32_t){387}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1164470377}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1602257025}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440513}, &kp); }
    treetable_add(t, &(int32_t){-1347440692}, &(int32_t){-26103889});
    { void *kp; treetable_get_greater_than(t, &(int32_t){872415232}, &kp); }
    treetable_add(t, &(int32_t){-419495913}, &(int32_t){16794112});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385928192}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094795585}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1355829329}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690159}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2085651589}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8883581}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16777216}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){340851852}, &vp); }
    treetable_add(t, &(int32_t){-956305387}, &(int32_t){-255655738});
    { void *kp; treetable_get_greater_than(t, &(int32_t){459073}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){56831}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){4392781});
    treetable_add(t, &(int32_t){23027551}, &(int32_t){60613});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){2141233312});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2063597314}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){9049344}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1767636992});
    { void *vp; treetable_get(t, &(int32_t){-7952987}, &vp); }
    treetable_add(t, &(int32_t){337253396}, &(int32_t){622269284});
    treetable_add(t, &(int32_t){1845690856}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){268436290}, &(int32_t){351797248});
    treetable_add(t, &(int32_t){356974592}, &(int32_t){301924540});
    { void *vp; treetable_get(t, &(int32_t){18086375}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    treetable_add(t, &(int32_t){-2088688284}, &(int32_t){-8158333});
    { void *vp; treetable_get(t, &(int32_t){2139062082}, &vp); }
    treetable_add(t, &(int32_t){52502784}, &(int32_t){983830});
    treetable_add(t, &(int32_t){983808}, &(int32_t){251789312});
    treetable_add(t, &(int32_t){107226352}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2088757486}, &(int32_t){-876099655});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-12451856}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1696628500}, &(int32_t){347865108});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1769471}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){352372422}, &kp); }
    treetable_add(t, &(int32_t){-488440012}, &(int32_t){-488447262});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){32});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){-469752416}, &(int32_t){16744257});
    treetable_add(t, &(int32_t){-2046820224}, &(int32_t){2088074364});
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-1189543936});
    { void *vp; treetable_get(t, &(int32_t){-943194368}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){131290}, &kp); }
    treetable_add(t, &(int32_t){1566008232}, &(int32_t){1466390359});
    { void *kp; treetable_get_greater_than(t, &(int32_t){6051671}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943254508}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1696989223}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){856969452}, &(int32_t){-31910892});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1265388363}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117602685}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1465341269}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){516201}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50890}, &kp); }
    treetable_add(t, &(int32_t){-1596328126}, &(int32_t){-1600082528});
    treetable_add(t, &(int32_t){-960085504}, &(int32_t){2064654336});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){24838267}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){14614035}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){545226746}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    treetable_add(t, &(int32_t){369093920}, &(int32_t){-12451840});
    { void *vp; treetable_get(t, &(int32_t){2145971764}, &vp); }
    treetable_add(t, &(int32_t){3807042}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){335544320}, &(int32_t){623187732});
    treetable_add(t, &(int32_t){-385881880}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-1179052799}, &(int32_t){-1179010631});
    { void *vp; treetable_get(t, &(int32_t){-1189037639}, &vp); }
    treetable_add(t, &(int32_t){10116094}, &(int32_t){-2088533247});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){338891856}, &(int32_t){368974100});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330642816}, &kp); }
    treetable_add(t, &(int32_t){-1178155265}, &(int32_t){-811721767});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1073774592}, &(int32_t){-469631232});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-943208509});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2145971764}, &vp); }
    treetable_add(t, &(int32_t){2430786}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){335544320}, &(int32_t){623187732});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){2430740}, &(int32_t){2097152});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){2063564639});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1331327}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){2063564639});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875647}, &kp); }
    treetable_add(t, &(int32_t){-689373392}, &(int32_t){347924712});
    treetable_add(t, &(int32_t){336860161}, &(int32_t){20735});
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){-15504110}, &(int32_t){16777438});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1601855327}, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-394262784});
    treetable_add(t, &(int32_t){-2088533016}, &(int32_t){-960085471});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633763601}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){538989312}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14935011}, &kp); }
    treetable_add(t, &(int32_t){-1600741216}, &(int32_t){-1605132128});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){547397792});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    treetable_add(t, &(int32_t){1271376836}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){8224125}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263224395}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14935011}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){65407}, &(int32_t){-1358749407});
    { void *kp; treetable_get_greater_than(t, &(int32_t){10526895}, &kp); }
    treetable_add(t, &(int32_t){23692}, &(int32_t){-1819044973});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1819044971}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){11513775}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761471}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13289415}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){1094795520});
    { void *vp; treetable_get(t, &(int32_t){2134982977}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){10526880}, &kp); }
    treetable_add(t, &(int32_t){-907804161}, &(int32_t){-454826908});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){-16777209});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1112559871}, &kp); }
    treetable_add(t, &(int32_t){2488595}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1018146750}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){2080433380}, &(int32_t){8092796});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860161}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){343702652}, &(int32_t){1191182336});
    { void *vp; treetable_get(t, &(int32_t){301964732}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){10354945}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430335}, &vp); }
    treetable_add(t, &(int32_t){-134217712}, &(int32_t){20});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179005424}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-14680080}, &vp); }
    treetable_add(t, &(int32_t){-654303047}, &(int32_t){276609465});
    treetable_add(t, &(int32_t){0}, &(int32_t){-286334720});
    { void *kp; treetable_get_greater_than(t, &(int32_t){190601047}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){773276300}, &kp); }
    treetable_add(t, &(int32_t){1330595260}, &(int32_t){-28356785});
    treetable_add(t, &(int32_t){1332175514}, &(int32_t){1330642816});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330663247}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1245184}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1783253578}, &(int32_t){1246378826});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){15263976}, &(int32_t){-387389440});
    treetable_add(t, &(int32_t){-353703190}, &(int32_t){-353703190});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1265388363}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-402491011}, &kp); }
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-15138288});
    { void *vp; treetable_get(t, &(int32_t){1246396160}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }