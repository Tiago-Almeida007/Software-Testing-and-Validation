/* id_000304_src_000004+000303_time_535330_execs_11004031_op_splice_rep_54.c
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
    treetable_add(t, &(int32_t){50333441}, &(int32_t){-1979711456});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-653311488}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-968753152}, &(int32_t){-1970623606});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-218103780}, &(int32_t){428507135});
    { void *kp; treetable_get_greater_than(t, &(int32_t){17}, &kp); }
    treetable_add(t, &(int32_t){1124204544}, &(int32_t){0});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){983874}, &(int32_t){251854848});
    treetable_add(t, &(int32_t){251915008}, &(int32_t){50331648});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){983552}, &(int32_t){-454812413});
    treetable_add(t, &(int32_t){7170}, &(int32_t){16777216});
    { void *vp; treetable_get(t, &(int32_t){-1178206208}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13028057}, &kp); }
    treetable_add(t, &(int32_t){1107301396}, &(int32_t){-1600085950});
    treetable_add(t, &(int32_t){1585422496}, &(int32_t){258867216});
    treetable_add(t, &(int32_t){805502976}, &(int32_t){1107492864});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1601069040}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){117453216}, &(int32_t){0});
    treetable_add(t, &(int32_t){436207616}, &(int32_t){-8383231});
    { void *vp; treetable_get(t, &(int32_t){15067135}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-815528960}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1076899889}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    treetable_add(t, &(int32_t){-1600087136}, &(int32_t){2465952});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2122087549}, &(int32_t){-2105310333});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1350335609}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){5376}, &(int32_t){-1802202112});
    treetable_add(t, &(int32_t){-2088533100}, &(int32_t){1805681539});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-402456576}, &(int32_t){541147647});
    treetable_add(t, &(int32_t){-1987475063}, &(int32_t){-1583308640});
    treetable_add(t, &(int32_t){690588576}, &(int32_t){14679568});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){8192});
    treetable_add(t, &(int32_t){-2088533117}, &(int32_t){1805353859});
    { void *kp; treetable_get_greater_than(t, &(int32_t){352446595}, &kp); }
    treetable_add(t, &(int32_t){-402456576}, &(int32_t){541147647});
    treetable_add(t, &(int32_t){8585216}, &(int32_t){-2147483425});
    treetable_add(t, &(int32_t){-452984826}, &(int32_t){459263});
    { void *vp; treetable_get(t, &(int32_t){8257}, &vp); }
    treetable_add(t, &(int32_t){-1751673088}, &(int32_t){-1751663977});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062167}, &kp); }
    treetable_add(t, &(int32_t){-1358749407}, &(int32_t){-1347702865});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1345540177}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){57342}, &vp); }
    treetable_add(t, &(int32_t){1566952}, &(int32_t){1107355391});
    treetable_add(t, &(int32_t){872420097}, &(int32_t){-387389185});
    treetable_add(t, &(int32_t){1094784791}, &(int32_t){1094795585});
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1347440831}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2075111343}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533119}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){11008}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-57877248}, &(int32_t){336860240});
    treetable_add(t, &(int32_t){-267054054}, &(int32_t){13027071});
    { void *kp; treetable_get_greater_than(t, &(int32_t){21102576}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-322633377}, &kp); }
    treetable_add(t, &(int32_t){-1600085871}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){42041248});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2136963839}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){138}, &vp); }
    treetable_add(t, &(int32_t){41120}, &(int32_t){-1515874652});
    { void *vp; treetable_get(t, &(int32_t){1358954374}, &vp); }
    treetable_add(t, &(int32_t){342103066}, &(int32_t){-16767721});
    { void *vp; treetable_get(t, &(int32_t){335144933}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430335}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8158333}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8421505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){983830}, &kp); }
    treetable_add(t, &(int32_t){251789312}, &(int32_t){17297636});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-637582848}, &(int32_t){2145971764});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-637543937});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){545199124}, &(int32_t){-1140845467});
    treetable_add(t, &(int32_t){-452984547}, &(int32_t){-955842049});
    treetable_add(t, &(int32_t){352372422}, &(int32_t){-146669568});
    treetable_add(t, &(int32_t){336920372}, &(int32_t){-1600061676});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){10085});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){-469752416}, &(int32_t){16744257});
    treetable_add(t, &(int32_t){-2046820224}, &(int32_t){2088008828});
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-1189543936});
    { void *vp; treetable_get(t, &(int32_t){-943212089}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1429747769}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208487}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1263257515}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655755}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655767}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440512}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1263225675}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263229771}, &kp); }
    treetable_add(t, &(int32_t){2130708224}, &(int32_t){-146669313});
    { void *vp; treetable_get(t, &(int32_t){-1599233888}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2021358459}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860161}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2581792}, &kp); }
    treetable_add(t, &(int32_t){2074083335}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15335291}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1513284}, &kp); }
    treetable_add(t, &(int32_t){-1189805592}, &(int32_t){-1179010631});
    { void *vp; treetable_get(t, &(int32_t){549042617}, &vp); }
    treetable_add(t, &(int32_t){-1705247232}, &(int32_t){-2088566528});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){336875756}, &(int32_t){-31910892});
    { void *vp; treetable_get(t, &(int32_t){-960036880}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){8388608}, &(int32_t){33488960});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-943209500});
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387042087}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761362}, &kp); }
    treetable_add(t, &(int32_t){-134217712}, &(int32_t){20});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-48500}, &(int32_t){340819967});
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){335614996});
    treetable_add(t, &(int32_t){5308180}, &(int32_t){459008});
    treetable_add(t, &(int32_t){1493172223}, &(int32_t){1829901392});
    { void *kp; treetable_get_greater_than(t, &(int32_t){57087}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2147024896}, &(int32_t){-2081888024});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968753021}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){538648608}, &(int32_t){-943251424});
    { void *kp; treetable_get_greater_than(t, &(int32_t){51143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225799}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){125}, &vp); }
    treetable_add(t, &(int32_t){-481604789}, &(int32_t){-471604253});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388835}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){117547168}, &(int32_t){117440513});
    treetable_add(t, &(int32_t){2088533092}, &(int32_t){1465341783});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2139046209}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){41120}, &(int32_t){4194432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761471}, &kp); }
    treetable_add(t, &(int32_t){-454630399}, &(int32_t){58596});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){984043}, &(int32_t){5242880});
    treetable_add(t, &(int32_t){1793}, &(int32_t){1358954495});
    treetable_add(t, &(int32_t){-456961968}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){2088501476}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){-1937998724}, &(int32_t){2430786});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389206}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){351797248}, &(int32_t){1191182336});
    { void *vp; treetable_get(t, &(int32_t){-960906820}, &vp); }
    treetable_add(t, &(int32_t){16719871}, &(int32_t){15761281});
    { void *vp; treetable_get(t, &(int32_t){-1176960992}, &vp); }
    treetable_add(t, &(int32_t){1465341696}, &(int32_t){1475276375});
    { void *kp; treetable_get_greater_than(t, &(int32_t){744535}, &kp); }
    treetable_add(t, &(int32_t){86644546}, &(int32_t){-1140817920});
    treetable_add(t, &(int32_t){1330597701}, &(int32_t){1330597711});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2143269009}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1297043279}, &kp); }
    treetable_add(t, &(int32_t){-2130711296}, &(int32_t){-689373364});
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387042087}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1112000512}, &(int32_t){1128415810});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }