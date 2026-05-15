/* id_000326_src_000003+000321_time_563232_execs_11366612_op_splice_rep_29.c
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
    treetable_add(t, &(int32_t){-1006632960}, &(int32_t){-1605646421});
    treetable_add(t, &(int32_t){-1600085885}, &(int32_t){-8413024});
    treetable_add(t, &(int32_t){52502784}, &(int32_t){-1605678161});
    { void *kp; treetable_get_greater_than(t, &(int32_t){128}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){4606795}, &vp); }
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
    treetable_add(t, &(int32_t){1835748}, &(int32_t){-805634048});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){-959787265}, &(int32_t){339206400});
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){13598720}, &kp); }
    treetable_add(t, &(int32_t){-1179010618}, &(int32_t){55737});
    treetable_add(t, &(int32_t){0}, &(int32_t){-16908288});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1392639811}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1076899889}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    treetable_add(t, &(int32_t){5563040}, &(int32_t){4377344});
    treetable_add(t, &(int32_t){-520093630}, &(int32_t){-1475651827});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1090520833}, &kp); }
    treetable_add(t, &(int32_t){14614658}, &(int32_t){-1347447040});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-1609225953}, &(int32_t){-1600085856});
    { void *vp; treetable_get(t, &(int32_t){-1920103027}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){352347273}, &vp); }
    treetable_add(t, &(int32_t){-2087414636}, &(int32_t){-2088533117});
    treetable_add(t, &(int32_t){-394051988}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1987510240}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1952407391}, &vp); }
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
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1347440765}, &(int32_t){-1164470377});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2140641175}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){172192}, &(int32_t){263});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2088526848}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-26103889}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-335538200});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){872415232}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){336860180}, &vp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){335614996});
    treetable_add(t, &(int32_t){5308180}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533629}, &vp); }
    treetable_add(t, &(int32_t){2818048}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1931667456}, &(int32_t){336875772});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){0});
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){701159935}, &(int32_t){271132969});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){1107296277});
    treetable_add(t, &(int32_t){-553708720}, &(int32_t){1593835520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-322633377}, &kp); }
    treetable_add(t, &(int32_t){-1600085871}, &(int32_t){-1600094816});
    treetable_add(t, &(int32_t){278962336}, &(int32_t){57342});
    treetable_add(t, &(int32_t){43483040}, &(int32_t){1601896447});
    { void *kp; treetable_get_greater_than(t, &(int32_t){69690656}, &kp); }
    treetable_add(t, &(int32_t){-1600126969}, &(int32_t){10526880});
    treetable_add(t, &(int32_t){-1515874652}, &(int32_t){-31067});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){1679038996});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387439337}, &kp); }
    treetable_add(t, &(int32_t){1111638594}, &(int32_t){1111638594});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454774865}, &kp); }
    treetable_add(t, &(int32_t){351797248}, &(int32_t){1191182336});
    { void *vp; treetable_get(t, &(int32_t){301924540}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107387165}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    treetable_add(t, &(int32_t){-2088688284}, &(int32_t){-8158333});
    { void *vp; treetable_get(t, &(int32_t){2139062082}, &vp); }
    treetable_add(t, &(int32_t){52502784}, &(int32_t){983830});
    treetable_add(t, &(int32_t){983808}, &(int32_t){251789312});
    treetable_add(t, &(int32_t){117049328}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1249896646}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-958791719}, &kp); }
    treetable_add(t, &(int32_t){340792420}, &(int32_t){545199124});
    { void *vp; treetable_get(t, &(int32_t){347865108}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347426072}, &kp); }
    treetable_add(t, &(int32_t){-777015320}, &(int32_t){-5263409});
    treetable_add(t, &(int32_t){15}, &(int32_t){3843});
    treetable_add(t, &(int32_t){-253431038}, &(int32_t){-955844089});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){352269312}, &kp); }
    treetable_add(t, &(int32_t){437918234}, &(int32_t){438376986});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1609225953}, &(int32_t){-943208544});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2145971764}, &vp); }
    treetable_add(t, &(int32_t){-960051646}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){1263247615}, &vp); }
    treetable_add(t, &(int32_t){1346534144}, &(int32_t){-471067628});
    treetable_add(t, &(int32_t){-471604257}, &(int32_t){-471604253});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1598375424}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){262015}, &vp); }
    treetable_add(t, &(int32_t){8156284}, &(int32_t){14679807});
    treetable_add(t, &(int32_t){-1111942912}, &(int32_t){-943194368});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2508359}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-353712185}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2038262357}, &vp); }
    treetable_add(t, &(int32_t){4096}, &(int32_t){10855680});
    treetable_add(t, &(int32_t){689897472}, &(int32_t){-960054855});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){548995327}, &kp); }
    treetable_add(t, &(int32_t){16}, &(int32_t){1465343865});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1431787349}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2016}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1258291200});
    { void *vp; treetable_get(t, &(int32_t){57342}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1566952}, &kp); }
    treetable_add(t, &(int32_t){872420097}, &(int32_t){1191247872});
    { void *vp; treetable_get(t, &(int32_t){301924540}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107387165}, &kp); }
    treetable_add(t, &(int32_t){1531661131}, &(int32_t){75});
    treetable_add(t, &(int32_t){117440710}, &(int32_t){16744192});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){13026882}, &(int32_t){2071662624});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2071690159}, &(int32_t){335641344});
    treetable_add(t, &(int32_t){325915156}, &(int32_t){1431691006});
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2147114752}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){35349}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2038135675}, &kp); }
    treetable_add(t, &(int32_t){-316669824}, &(int32_t){-387400449});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943463196}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1600086016}, &(int32_t){1072767});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1474881543}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336864020}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1169101684}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-956305353}, &(int32_t){467253702});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){390237187}, &vp); }
    treetable_add(t, &(int32_t){-809251071}, &(int32_t){-1412450097});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1963}, &kp); }
    treetable_add(t, &(int32_t){388830208}, &(int32_t){9509});
    treetable_add(t, &(int32_t){256}, &(int32_t){336855040});
    { void *kp; treetable_get_greater_than(t, &(int32_t){37}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1355829329}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16808879}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){340809983}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2581792}, &kp); }
    treetable_add(t, &(int32_t){-387448320}, &(int32_t){-27});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    treetable_add(t, &(int32_t){-1614363070}, &(int32_t){-1633763601});
    treetable_add(t, &(int32_t){754974720}, &(int32_t){538982656});
    treetable_add(t, &(int32_t){-484433893}, &(int32_t){14934989});
    treetable_add(t, &(int32_t){-1600118528}, &(int32_t){-1348427776});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1833979985}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){228});
    treetable_add(t, &(int32_t){-945044480}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2113502539}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1262897995}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-505290271}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-505290271}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-505290271}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14935011}, &kp); }
    treetable_add(t, &(int32_t){41120}, &(int32_t){-1600085825});
    treetable_add(t, &(int32_t){-2086625120}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){65407}, &(int32_t){-1358749407});
    { void *kp; treetable_get_greater_than(t, &(int32_t){11116719}, &kp); }
    treetable_add(t, &(int32_t){-454819329}, &(int32_t){-387390236});
    treetable_add(t, &(int32_t){32041192}, &(int32_t){-1179010795});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1111625960}, &vp); }
    treetable_add(t, &(int32_t){2130788864}, &(int32_t){-2055241857});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094795647}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
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
    treetable_add(t, &(int32_t){325915156}, &(int32_t){502783296});
    treetable_add(t, &(int32_t){-1671495679}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){390237308}, &(int32_t){1852702757});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){107873039});
    { void *vp; treetable_get(t, &(int32_t){1122297060}, &vp); }
    treetable_add(t, &(int32_t){67114232}, &(int32_t){-1139783936});
    { void *vp; treetable_get(t, &(int32_t){-960051527}, &vp); }
    treetable_add(t, &(int32_t){1616928864}, &(int32_t){-267059104});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2130641121}, &kp); }
    treetable_add(t, &(int32_t){-1179002624}, &(int32_t){4220});
    treetable_add(t, &(int32_t){1465343831}, &(int32_t){1465380590});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459620700}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1330597711}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330466639}, &kp); }
    treetable_add(t, &(int32_t){1283457124}, &(int32_t){-371791617});
    treetable_add(t, &(int32_t){1609095423}, &(int32_t){-387389208});
    treetable_add(t, &(int32_t){-1970643712}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943470649}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-298526209}, &kp); }
    treetable_add(t, &(int32_t){-437720856}, &(int32_t){385876479});
    treetable_add(t, &(int32_t){-1139783936}, &(int32_t){-960054855});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-267059104}, &(int32_t){16719871});
    { void *vp; treetable_get(t, &(int32_t){-1191116929}, &vp); }
    treetable_add(t, &(int32_t){459752}, &(int32_t){-16842752});
    { void *kp; treetable_get_greater_than(t, &(int32_t){419565568}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600126975}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1040639}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107329923}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }