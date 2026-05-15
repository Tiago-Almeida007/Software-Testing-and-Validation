/* id_000305_src_000004+000304_time_535495_execs_11005992_op_splice_rep_24.c
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
    treetable_add(t, &(int32_t){459008}, &(int32_t){8195});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208509}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){255983616}, &vp); }
    treetable_add(t, &(int32_t){1107296416}, &(int32_t){-1968469306});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){7196}, &(int32_t){-1971322893});
    { void *vp; treetable_get(t, &(int32_t){4603}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){34078720}, &kp); }
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){3252384}, &(int32_t){7});
    treetable_add(t, &(int32_t){0}, &(int32_t){-2146107110});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-437780507}, &kp); }
    treetable_add(t, &(int32_t){926365495}, &(int32_t){926365495});
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){-1600413536}, &(int32_t){631283872});
    treetable_add(t, &(int32_t){117522978}, &(int32_t){-394264576});
    treetable_add(t, &(int32_t){-2088533016}, &(int32_t){-2088533119});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1376356}, &vp); }
    treetable_add(t, &(int32_t){-2088528748}, &(int32_t){-1635548285});
    { void *kp; treetable_get_greater_than(t, &(int32_t){32015166}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600091904}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){832610464});
    treetable_add(t, &(int32_t){7}, &(int32_t){0});
    treetable_add(t, &(int32_t){301662490}, &(int32_t){0});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){251854848}, &(int32_t){-134217728});
    treetable_add(t, &(int32_t){-2146107392}, &(int32_t){16770559});
    treetable_add(t, &(int32_t){-2088533248}, &(int32_t){-1685814397});
    { void *kp; treetable_get_greater_than(t, &(int32_t){32015235}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2097152000}, &(int32_t){57088});
    treetable_add(t, &(int32_t){1536}, &(int32_t){117571557});
    treetable_add(t, &(int32_t){2113857}, &(int32_t){8519680});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1751711744}, &kp); }
    treetable_add(t, &(int32_t){2139068311}, &(int32_t){-8421505});
    treetable_add(t, &(int32_t){52502784}, &(int32_t){-1414549585});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15138560}, &kp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){303556840});
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1917866065}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088521861}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){16742531}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-587202560});
    { void *vp; treetable_get(t, &(int32_t){335544341}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-960036880}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1793}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1107296492}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-2122342240}, &(int32_t){2063597314});
    { void *kp; treetable_get_greater_than(t, &(int32_t){660938879}, &kp); }
    treetable_add(t, &(int32_t){2130708224}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1516854272}, &(int32_t){-7952987});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    treetable_add(t, &(int32_t){2430740}, &(int32_t){-404418049});
    { void *vp; treetable_get(t, &(int32_t){1107354229}, &vp); }
    treetable_add(t, &(int32_t){-2128741613}, &(int32_t){12993024});
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2135032064}, &vp); }
    treetable_add(t, &(int32_t){2088532992}, &(int32_t){-1179026308});
    { void *vp; treetable_get(t, &(int32_t){16842937}, &vp); }
    treetable_add(t, &(int32_t){16843136}, &(int32_t){-168430335});
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    treetable_add(t, &(int32_t){-2088688284}, &(int32_t){-8151421});
    { void *vp; treetable_get(t, &(int32_t){2139062082}, &vp); }
    treetable_add(t, &(int32_t){52502784}, &(int32_t){983830});
    treetable_add(t, &(int32_t){983808}, &(int32_t){251789312});
    treetable_add(t, &(int32_t){117508080}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1249896686}, &(int32_t){5450});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-958791719}, &kp); }
    treetable_add(t, &(int32_t){340792420}, &(int32_t){545199124});
    { void *vp; treetable_get(t, &(int32_t){347865108}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-523827455}, &kp); }
    treetable_add(t, &(int32_t){16204288}, &(int32_t){336920372});
    treetable_add(t, &(int32_t){-6250241}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336860392}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){520093735}, &vp); }
    treetable_add(t, &(int32_t){-1602158688}, &(int32_t){-469752416});
    { void *vp; treetable_get(t, &(int32_t){65407}, &vp); }
    treetable_add(t, &(int32_t){8156284}, &(int32_t){14679807});
    treetable_add(t, &(int32_t){-1111942912}, &(int32_t){-943212089});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2508359}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-104347705}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){41516394}, &vp); }
    treetable_add(t, &(int32_t){1465210197}, &(int32_t){1431655767});
    treetable_add(t, &(int32_t){132147541}, &(int32_t){1431633920});
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
    treetable_add(t, &(int32_t){-48525}, &(int32_t){340819967});
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){2137161599}, &kp); }
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
    treetable_add(t, &(int32_t){351797248}, &(int32_t){1191190528});
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