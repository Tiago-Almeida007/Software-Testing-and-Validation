/* id_000328_src_000003+000321_time_563959_execs_11367254_op_splice_rep_28.c
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
    treetable_add(t, &(int32_t){2139881475}, &(int32_t){-301988096});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-369132677}, &kp); }
    treetable_add(t, &(int32_t){-1006632960}, &(int32_t){1263257515});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2102086475}, &kp); }
    treetable_add(t, &(int32_t){1263235328}, &(int32_t){537067590});
    treetable_add(t, &(int32_t){-1970643712}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943470649}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1966718464});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1853191542}, &kp); }
    treetable_add(t, &(int32_t){-1970632192}, &(int32_t){-1970623606});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){470883356}, &(int32_t){-851968});
    { void *kp; treetable_get_greater_than(t, &(int32_t){301668746}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){252183040}, &(int32_t){-1677721600});
    treetable_add(t, &(int32_t){1107296256}, &(int32_t){3843});
    treetable_add(t, &(int32_t){3843}, &(int32_t){984043});
    treetable_add(t, &(int32_t){51774208}, &(int32_t){393231});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){48555008}, &(int32_t){28});
    treetable_add(t, &(int32_t){1376512}, &(int32_t){-1179007488});
    { void *vp; treetable_get(t, &(int32_t){-822093383}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336864020}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){274628512});
    treetable_add(t, &(int32_t){3950}, &(int32_t){-1600085856});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085856}, &kp); }
    treetable_add(t, &(int32_t){7}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){18481152}, &(int32_t){-436240363});
    { void *kp; treetable_get_greater_than(t, &(int32_t){58855}, &kp); }
    treetable_add(t, &(int32_t){-808492028}, &(int32_t){-808464433});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147430449}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1412444209}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481603}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14614272}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-492789600}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117571496}, &kp); }
    treetable_add(t, &(int32_t){8519680}, &(int32_t){-1761607457});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){1600085761}, &(int32_t){545218426});
    { void *vp; treetable_get(t, &(int32_t){-1978335193}, &vp); }
    treetable_add(t, &(int32_t){-1609225953}, &(int32_t){-1600085856});
    { void *vp; treetable_get(t, &(int32_t){-1920103027}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){335570057}, &vp); }
    treetable_add(t, &(int32_t){-2087414636}, &(int32_t){-2088533117});
    treetable_add(t, &(int32_t){-394051988}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1987510240}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1952407135}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1593900927}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){9495}, &(int32_t){-786432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16776961}, &kp); }
    treetable_add(t, &(int32_t){-2097152000}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8323}, &kp); }
    treetable_add(t, &(int32_t){251756544}, &(int32_t){-16777216});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){393472}, &(int32_t){1465378048});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088544425}, &kp); }
    treetable_add(t, &(int32_t){-1347440765}, &(int32_t){-1164470377});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2140641175}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){172192}, &(int32_t){263});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2088526848}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-26103889}, &kp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-16771096});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){9632}, &(int32_t){16744258});
    treetable_add(t, &(int32_t){872415232}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1128481601}, &vp); }
    treetable_add(t, &(int32_t){-1347440689}, &(int32_t){-1347440849});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440864}, &kp); }
    treetable_add(t, &(int32_t){2075111343}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533629}, &vp); }
    treetable_add(t, &(int32_t){2818048}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1931673600}, &(int32_t){336875772});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){0});
    treetable_add(t, &(int32_t){459008}, &(int32_t){-256});
    treetable_add(t, &(int32_t){-15511472}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-989765793}, &kp); }
    treetable_add(t, &(int32_t){-1600089696}, &(int32_t){-1602379616});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1753243488});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2099249408}, &(int32_t){57088});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-6250336}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1978334169}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1543503712});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){437523476}, &(int32_t){387146772});
    { void *vp; treetable_get(t, &(int32_t){50456808}, &vp); }
    treetable_add(t, &(int32_t){213732}, &(int32_t){-134217712});
    treetable_add(t, &(int32_t){1191182336}, &(int32_t){-16729067});
    { void *vp; treetable_get(t, &(int32_t){335144933}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
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
    treetable_add(t, &(int32_t){545199124}, &(int32_t){-1140779931});
    treetable_add(t, &(int32_t){-452984547}, &(int32_t){-1343690497});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385928017}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-5263409}, &vp); }
    treetable_add(t, &(int32_t){3843}, &(int32_t){-468778496});
    treetable_add(t, &(int32_t){-955844089}, &(int32_t){-959789113});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2144697}, &vp); }
    treetable_add(t, &(int32_t){-1937998724}, &(int32_t){2430786});
    treetable_add(t, &(int32_t){-1128529920}, &(int32_t){223});
    treetable_add(t, &(int32_t){352381183}, &(int32_t){-146604288});
    treetable_add(t, &(int32_t){336920372}, &(int32_t){-1600061676});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1249896686}, &(int32_t){5450});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2130730848}, &kp); }
    treetable_add(t, &(int32_t){67075905}, &(int32_t){32768});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1189543936}, &(int32_t){-939589443});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-642139705}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-356005927}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-353703190}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2104120661}, &vp); }
    treetable_add(t, &(int32_t){1048576}, &(int32_t){-1515913216});
    treetable_add(t, &(int32_t){16384000}, &(int32_t){-960890368});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1191116929}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){4220}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){690563566}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071559035}, &kp); }
    treetable_add(t, &(int32_t){-1236992}, &(int32_t){-1513284});
    treetable_add(t, &(int32_t){-943209500}, &(int32_t){199});
    { void *kp; treetable_get_greater_than(t, &(int32_t){14679665}, &kp); }
    treetable_add(t, &(int32_t){-858986269}, &(int32_t){-858993460});
    treetable_add(t, &(int32_t){-858993460}, &(int32_t){16829644});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16729067}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-968752926}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){23272955}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1263225600}, &vp); }
    treetable_add(t, &(int32_t){50720}, &(int32_t){-8454137});
    treetable_add(t, &(int32_t){-1596328126}, &(int32_t){-1600082528});
    treetable_add(t, &(int32_t){-960085504}, &(int32_t){2064654336});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){24838267}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1440677395}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){21845}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){458752}, &(int32_t){2071690144});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8684679}, &kp); }
    treetable_add(t, &(int32_t){-390266899}, &(int32_t){-454754328});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1610612736});
    treetable_add(t, &(int32_t){274628512}, &(int32_t){-402129152});
    treetable_add(t, &(int32_t){23639}, &(int32_t){588527585});
    treetable_add(t, &(int32_t){-167767020}, &(int32_t){16961});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){-1162167622}, &(int32_t){-1162167622});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1330597887}, &(int32_t){-264816817});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-642136378}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1600085855}, &kp); }
    treetable_add(t, &(int32_t){-1018798209}, &(int32_t){-892876857});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){8382702}, &(int32_t){-1945959960});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-809971761}, &kp); }
    treetable_add(t, &(int32_t){-65536}, &(int32_t){335606783});
    { void *vp; treetable_get(t, &(int32_t){2434327}, &vp); }
    treetable_add(t, &(int32_t){335544320}, &(int32_t){2430740});
    treetable_add(t, &(int32_t){340795392}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){-1140845548});
    treetable_add(t, &(int32_t){336855316}, &(int32_t){5308180});
    treetable_add(t, &(int32_t){16713473}, &(int32_t){1493172223});
    treetable_add(t, &(int32_t){325915156}, &(int32_t){57087});
    { void *vp; treetable_get(t, &(int32_t){2053070687}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){9049344}, &kp); }
    treetable_add(t, &(int32_t){-6680}, &(int32_t){-10526721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-2088507389}, &(int32_t){-968753021});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){540606509}, &(int32_t){538648608});
    treetable_add(t, &(int32_t){-471609885}, &(int32_t){553680896});
    treetable_add(t, &(int32_t){-1600126816}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085841}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-943251296});
    { void *kp; treetable_get_greater_than(t, &(int32_t){58567}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225799}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){125}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388835}, &kp); }
    treetable_add(t, &(int32_t){-1600126976}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600093280}, &(int32_t){2141233312});
    { void *kp; treetable_get_greater_than(t, &(int32_t){555810816}, &kp); }
    treetable_add(t, &(int32_t){-2147483479}, &(int32_t){-16760832});
    { void *vp; treetable_get(t, &(int32_t){-454761244}, &vp); }
    treetable_add(t, &(int32_t){-1189805592}, &(int32_t){-1179010631});
    { void *vp; treetable_get(t, &(int32_t){549042617}, &vp); }
    treetable_add(t, &(int32_t){-1600110014}, &(int32_t){160});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085889}, &kp); }
    treetable_add(t, &(int32_t){-469631232}, &(int32_t){501507300});
    { void *vp; treetable_get(t, &(int32_t){8388637}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){488447261}, &vp); }
    treetable_add(t, &(int32_t){6372}, &(int32_t){0});
    treetable_add(t, &(int32_t){4194304}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-956305408});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1353032192}, &(int32_t){-454761277});
    treetable_add(t, &(int32_t){15000804}, &(int32_t){2071755900});
    treetable_add(t, &(int32_t){336855419}, &(int32_t){325915156});
    treetable_add(t, &(int32_t){16774877}, &(int32_t){-1671495679});
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){390237308});
    { void *vp; treetable_get(t, &(int32_t){1852730880}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-452563453}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){4096}, &kp); }
    treetable_add(t, &(int32_t){-1178857401}, &(int32_t){-960051527});
    treetable_add(t, &(int32_t){536866837}, &(int32_t){2139160831});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2144512}, &kp); }
    treetable_add(t, &(int32_t){1459879936}, &(int32_t){-296265889});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1329970364}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1734233935}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597740}, &kp); }
    treetable_add(t, &(int32_t){1677721823}, &(int32_t){-11763712});
    treetable_add(t, &(int32_t){-1513258}, &(int32_t){-387389224});
    treetable_add(t, &(int32_t){1560281320}, &(int32_t){-943224182});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892876857}, &kp); }
    treetable_add(t, &(int32_t){-637534336}, &(int32_t){887680564});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){268492798}, &(int32_t){301930754});
    treetable_add(t, &(int32_t){1246382975}, &(int32_t){536889930});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-27}, &(int32_t){-41121});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-520093697}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533016}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }