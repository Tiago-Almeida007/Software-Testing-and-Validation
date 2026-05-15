/* id_000319_src_000026+000317_time_557765_execs_11304039_op_splice_rep_5.c
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
    { void *vp; treetable_get(t, &(int32_t){21845}, &vp); }
    treetable_add(t, &(int32_t){-15138288}, &(int32_t){1431633937});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){23699616});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16769280}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){40523093}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-466801363}, &vp); }
    treetable_add(t, &(int32_t){16777216}, &(int32_t){-973078507});
    { void *vp; treetable_get(t, &(int32_t){-642139719}, &vp); }
    treetable_add(t, &(int32_t){588527585}, &(int32_t){1315860});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1107492864}, &(int32_t){-1851781097});
    treetable_add(t, &(int32_t){1856020640}, &(int32_t){-385882002});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){3252384}, &(int32_t){-387389185});
    treetable_add(t, &(int32_t){1246423272}, &(int32_t){1246382666});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1690814407}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-808464433}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){1409311904}, &(int32_t){1120600064});
    treetable_add(t, &(int32_t){16896}, &(int32_t){190254561});
    treetable_add(t, &(int32_t){459263}, &(int32_t){2113857});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-553614625}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-943208672});
    { void *kp; treetable_get_greater_than(t, &(int32_t){199}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){352347273}, &vp); }
    treetable_add(t, &(int32_t){-2087414636}, &(int32_t){-2088533117});
    treetable_add(t, &(int32_t){-394051989}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1820917792}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1952407391}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){536870912});
    treetable_add(t, &(int32_t){-2088566784}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-914128021}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){32}, &vp); }
    treetable_add(t, &(int32_t){459136}, &(int32_t){150929408});
    treetable_add(t, &(int32_t){336857096}, &(int32_t){5182484});
    treetable_add(t, &(int32_t){892093068}, &(int32_t){1460928532});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1750093905}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139068311}, &kp); }
    treetable_add(t, &(int32_t){17236384}, &(int32_t){458752});
    treetable_add(t, &(int32_t){-864256900}, &(int32_t){-1347440721});
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
    treetable_add(t, &(int32_t){2818048}, &(int32_t){16711680});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1931673600}, &(int32_t){336875772});
    treetable_add(t, &(int32_t){353638932}, &(int32_t){-960036880});
    treetable_add(t, &(int32_t){1107292355}, &(int32_t){1793});
    treetable_add(t, &(int32_t){-15489630}, &(int32_t){221});
    treetable_add(t, &(int32_t){0}, &(int32_t){1291845632});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1593835587}, &kp); }
    treetable_add(t, &(int32_t){-1606287360}, &(int32_t){-1600089696});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){43483040}, &(int32_t){1601896447});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2581792}, &kp); }
    treetable_add(t, &(int32_t){-1600126969}, &(int32_t){10526880});
    treetable_add(t, &(int32_t){-1515874652}, &(int32_t){-31067});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){1679038996});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387439337}, &kp); }
    treetable_add(t, &(int32_t){1122297060}, &(int32_t){1048579});
    treetable_add(t, &(int32_t){5368}, &(int32_t){-1139456256});
    treetable_add(t, &(int32_t){-404418049}, &(int32_t){16847865});
    { void *vp; treetable_get(t, &(int32_t){1704094}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-168430091}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1677784565}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1119485827}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){65407}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){-253489406}, &(int32_t){-955882460});
    { void *vp; treetable_get(t, &(int32_t){-972685313}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943207481}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){357190361}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960051495}, &kp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){342171775});
    treetable_add(t, &(int32_t){20649148}, &(int32_t){33547520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1040583}, &kp); }
    treetable_add(t, &(int32_t){251789312}, &(int32_t){-100142876});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-956349952}, &(int32_t){1376454});
    treetable_add(t, &(int32_t){872478530}, &(int32_t){336860415});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-24416}, &kp); }
    treetable_add(t, &(int32_t){303305748}, &(int32_t){1711210596});
    { void *kp; treetable_get_greater_than(t, &(int32_t){689897472}, &kp); }
    treetable_add(t, &(int32_t){-1600093953}, &(int32_t){1105461285});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147483393}, &kp); }
    treetable_add(t, &(int32_t){-16745355}, &(int32_t){57342});
    treetable_add(t, &(int32_t){12433689}, &(int32_t){-943208449});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-624441401}, &kp); }
    treetable_add(t, &(int32_t){-1476335384}, &(int32_t){1465800535});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341799}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){337843255}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-356005927}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2105234773}, &vp); }
    treetable_add(t, &(int32_t){1431666688}, &(int32_t){1431787349});
    { void *vp; treetable_get(t, &(int32_t){1767206997}, &vp); }
    treetable_add(t, &(int32_t){7}, &(int32_t){0});
    treetable_add(t, &(int32_t){1263206400}, &(int32_t){1531661131});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-892908725}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){41120}, &vp); }
    treetable_add(t, &(int32_t){-1770292464}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690104}, &kp); }
    treetable_add(t, &(int32_t){325915156}, &(int32_t){57086});
    treetable_add(t, &(int32_t){-94437375}, &(int32_t){1696628607});
    { void *kp; treetable_get_greater_than(t, &(int32_t){9049381}, &kp); }
    treetable_add(t, &(int32_t){2071690107}, &(int32_t){-8684677});
    { void *vp; treetable_get(t, &(int32_t){536903680}, &vp); }
    treetable_add(t, &(int32_t){886701890}, &(int32_t){8382702});
    treetable_add(t, &(int32_t){1116472065}, &(int32_t){9495});
    treetable_add(t, &(int32_t){256}, &(int32_t){336855040});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-390322907}, &kp); }
    treetable_add(t, &(int32_t){32041192}, &(int32_t){-1179010795});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-33554200}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1357679837}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2142300674}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1034441}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633759330}, &kp); }
    treetable_add(t, &(int32_t){41120}, &(int32_t){4194432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-454761471}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-959789113}, &kp); }
    treetable_add(t, &(int32_t){886701890}, &(int32_t){8382702});
    treetable_add(t, &(int32_t){1116472065}, &(int32_t){9495});
    treetable_add(t, &(int32_t){256}, &(int32_t){336855040});
    { void *kp; treetable_get_greater_than(t, &(int32_t){9509}, &kp); }
    treetable_add(t, &(int32_t){336855040}, &(int32_t){9495});
    treetable_add(t, &(int32_t){344719392}, &(int32_t){1595151380});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2136963839}, &kp); }
    treetable_add(t, &(int32_t){344719392}, &(int32_t){1595151380});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2136963839}, &kp); }
    treetable_add(t, &(int32_t){805306368}, &(int32_t){-388568833});
    treetable_add(t, &(int32_t){18093244}, &(int32_t){-15461356});
    treetable_add(t, &(int32_t){117506048}, &(int32_t){-65536});
    { void *kp; treetable_get_greater_than(t, &(int32_t){303321176}, &kp); }
    treetable_add(t, &(int32_t){1600061696}, &(int32_t){2136963679});
    treetable_add(t, &(int32_t){352331621}, &(int32_t){138});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389312}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2949120}, &(int32_t){538976339});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471654368}, &kp); }
    treetable_add(t, &(int32_t){-1600085983}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-943251296}, &(int32_t){13092807});
    treetable_add(t, &(int32_t){-1006632960}, &(int32_t){1263257515});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2102086475}, &kp); }
    treetable_add(t, &(int32_t){1263235328}, &(int32_t){1263225670});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){-1600085983}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){2141233312}, &(int32_t){553648383});
    { void *vp; treetable_get(t, &(int32_t){-1347440893}, &vp); }
    treetable_add(t, &(int32_t){-1946151891}, &(int32_t){-1828716452});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1785490541}, &kp); }
    treetable_add(t, &(int32_t){-1347440721}, &(int32_t){-2147438673});
    treetable_add(t, &(int32_t){33488960}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){-943209500}, &(int32_t){365349575});
    treetable_add(t, &(int32_t){2130788864}, &(int32_t){2139062143});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094795647}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1094795585}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1602257025}, &kp); }
    treetable_add(t, &(int32_t){-16760832}, &(int32_t){1690952705});
    treetable_add(t, &(int32_t){15000803}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){117506048});
    treetable_add(t, &(int32_t){-256}, &(int32_t){-968732592});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1116471296}, &(int32_t){-456961968});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){2088501476});
    treetable_add(t, &(int32_t){24838267}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2088533116}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1845690856}, &(int32_t){-454761210});
    treetable_add(t, &(int32_t){268436290}, &(int32_t){351797248});
    treetable_add(t, &(int32_t){273088512}, &(int32_t){-960906820});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1191120769}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){4220}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1465380590}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1940394258}, &kp); }
    treetable_add(t, &(int32_t){-1128529792}, &(int32_t){1330597701});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1707016625}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){14635087}, &kp); }
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-387383320});
    treetable_add(t, &(int32_t){1256777960}, &(int32_t){1248479818});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1246382666}, &kp); }
    treetable_add(t, &(int32_t){-943208509}, &(int32_t){13027018});
    { void *vp; treetable_get(t, &(int32_t){-12451840}, &vp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){59624});
    treetable_add(t, &(int32_t){-353834776}, &(int32_t){-353703190});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2105234773}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-16777216}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }