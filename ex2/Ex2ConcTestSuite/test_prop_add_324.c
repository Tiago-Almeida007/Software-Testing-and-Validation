/* id_000324_src_000003+000321_time_563026_execs_11366430_op_splice_rep_31.c
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
    treetable_add(t, &(int32_t){-1970643712}, &(int32_t){-943208505});
    { void *vp; treetable_get(t, &(int32_t){-943470649}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-1966718464});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1853191542}, &kp); }
    treetable_add(t, &(int32_t){-1970632192}, &(int32_t){-1970623606});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){470883356}, &(int32_t){-851968});
    { void *kp; treetable_get_greater_than(t, &(int32_t){301668746}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1903260017}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-606348325}, &kp); }
    treetable_add(t, &(int32_t){1107313509}, &(int32_t){3843});
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
    treetable_add(t, &(int32_t){655360}, &(int32_t){0});
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
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){689897472}, &(int32_t){-1600085995});
    treetable_add(t, &(int32_t){-1920103008}, &(int32_t){-1920103027});
    { void *vp; treetable_get(t, &(int32_t){1686735264}, &vp); }
    treetable_add(t, &(int32_t){38036}, &(int32_t){-2088566768});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1047306371}, &kp); }
    treetable_add(t, &(int32_t){12993024}, &(int32_t){-402456576});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2113857}, &kp); }
    treetable_add(t, &(int32_t){-1600061184}, &(int32_t){690588576});
    treetable_add(t, &(int32_t){-8396802}, &(int32_t){50331648});
    treetable_add(t, &(int32_t){-960085364}, &(int32_t){437523456});
    treetable_add(t, &(int32_t){622269540}, &(int32_t){0});
    treetable_add(t, &(int32_t){16777215}, &(int32_t){16645888});
    treetable_add(t, &(int32_t){886644736}, &(int32_t){-13309714});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-823597033});
    { void *vp; treetable_get(t, &(int32_t){117696744}, &vp); }
    treetable_add(t, &(int32_t){-2088533248}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){1911422976}, &(int32_t){57088});
    { void *vp; treetable_get(t, &(int32_t){3841}, &vp); }
    treetable_add(t, &(int32_t){-15138816}, &(int32_t){17});
    treetable_add(t, &(int32_t){-452984826}, &(int32_t){1465341783});
    { void *kp; treetable_get_greater_than(t, &(int32_t){25396099}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1751666769}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062167}, &kp); }
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1667457892});
    treetable_add(t, &(int32_t){-1667457892}, &(int32_t){-1600086884});
    treetable_add(t, &(int32_t){17235970}, &(int32_t){458752});
    treetable_add(t, &(int32_t){-864256900}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){14679665}, &kp); }
    treetable_add(t, &(int32_t){401139944}, &(int32_t){15138560});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2135031808}, &vp); }
    treetable_add(t, &(int32_t){-960089088}, &(int32_t){2146440448});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){536838015}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){65535}, &kp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){2080433380});
    treetable_add(t, &(int32_t){2063629180}, &(int32_t){1128481089});
    { void *kp; treetable_get_greater_than(t, &(int32_t){538985283}, &kp); }
    treetable_add(t, &(int32_t){540876832}, &(int32_t){538976288});
    treetable_add(t, &(int32_t){538976288}, &(int32_t){538983712});
    treetable_add(t, &(int32_t){-808500448}, &(int32_t){-1347440689});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){1475276375}, &(int32_t){773276300});
    { void *vp; treetable_get(t, &(int32_t){-1139310592}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1837335375}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){65400}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1931673600});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){353638932});
    treetable_add(t, &(int32_t){0}, &(int32_t){459008});
    treetable_add(t, &(int32_t){1358954495}, &(int32_t){-15511472});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1606295808}, &(int32_t){-1600089696});
    treetable_add(t, &(int32_t){-1600094816}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){43483040}, &(int32_t){1601896447});
    { void *kp; treetable_get_greater_than(t, &(int32_t){69690656}, &kp); }
    treetable_add(t, &(int32_t){-1600126969}, &(int32_t){10526880});
    treetable_add(t, &(int32_t){-1515874652}, &(int32_t){-31067});
    treetable_add(t, &(int32_t){336860240}, &(int32_t){1679038996});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387439337}, &kp); }
    treetable_add(t, &(int32_t){1122297060}, &(int32_t){1048579});
    treetable_add(t, &(int32_t){5368}, &(int32_t){-1139456256});
    treetable_add(t, &(int32_t){-404418049}, &(int32_t){14816249});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){12993025}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16777473}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-184483583}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){627310837}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2135079423}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){553648383}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-960085504}, &(int32_t){-267059002});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2490559}, &kp); }
    treetable_add(t, &(int32_t){342103295}, &(int32_t){336860240});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1336608}, &kp); }
    treetable_add(t, &(int32_t){-387383323}, &(int32_t){883929007});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690520}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1040639}, &kp); }
    treetable_add(t, &(int32_t){251789312}, &(int32_t){-100142876});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-956349952}, &(int32_t){1376454});
    treetable_add(t, &(int32_t){872478530}, &(int32_t){336860287});
    { void *kp; treetable_get_greater_than(t, &(int32_t){437952672}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){437918234}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){689897472}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-962147641}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-1593884161}, &(int32_t){-1602158688});
    treetable_add(t, &(int32_t){1105461285}, &(int32_t){262015});
    treetable_add(t, &(int32_t){2089156608}, &(int32_t){8156284});
    { void *kp; treetable_get_greater_than(t, &(int32_t){57342}, &kp); }
    treetable_add(t, &(int32_t){-943208449}, &(int32_t){-943208505});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-939833913}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-641218617}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1263257515}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655755}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1650614883}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1650614883}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-960051527}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139160831}, &kp); }
    treetable_add(t, &(int32_t){2092546521}, &(int32_t){16});
    { void *vp; treetable_get(t, &(int32_t){-296266145}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1431666688}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1767206997}, &vp); }
    treetable_add(t, &(int32_t){7}, &(int32_t){0});
    treetable_add(t, &(int32_t){1900740608}, &(int32_t){57342});
    treetable_add(t, &(int32_t){-471269580}, &(int32_t){1566952});
    { void *kp; treetable_get_greater_than(t, &(int32_t){4325606}, &kp); }
    treetable_add(t, &(int32_t){356974848}, &(int32_t){301924540});
    { void *vp; treetable_get(t, &(int32_t){-502007321}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){536870912}, &kp); }
    treetable_add(t, &(int32_t){1107361663}, &(int32_t){-1600071177});
    { void *vp; treetable_get(t, &(int32_t){41120}, &vp); }
    treetable_add(t, &(int32_t){2071690000}, &(int32_t){2071690107});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690103}, &kp); }
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
    { void *vp; treetable_get(t, &(int32_t){2088533116}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-956305353}, &kp); }
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
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336860180});
    treetable_add(t, &(int32_t){336903168}, &(int32_t){336860161});
    { void *kp; treetable_get_greater_than(t, &(int32_t){16777296}, &kp); }
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){228});
    treetable_add(t, &(int32_t){-945044480}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2113502539}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1262897995}, &vp); }
    treetable_add(t, &(int32_t){1677721823}, &(int32_t){-11763712});
    treetable_add(t, &(int32_t){-1513258}, &(int32_t){-387389224});
    treetable_add(t, &(int32_t){1560281320}, &(int32_t){-1600086016});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085885});
    treetable_add(t, &(int32_t){16744352}, &(int32_t){52502784});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1449087057}, &kp); }
    treetable_add(t, &(int32_t){-469631232}, &(int32_t){-387652380});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1179052799});
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1108404409}, &vp); }
    treetable_add(t, &(int32_t){21102592}, &(int32_t){2139062143});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-296265889}, &kp); }
    treetable_add(t, &(int32_t){-1347440885}, &(int32_t){1094832303});
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
    { void *vp; treetable_get(t, &(int32_t){-65529}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1094844415}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2088541279}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){2430786}, &(int32_t){1852730990});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){51379176}, &(int32_t){-454752658});
    treetable_add(t, &(int32_t){213732}, &(int32_t){-134217712});
    treetable_add(t, &(int32_t){1191183360}, &(int32_t){-1179010032});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){16744321}, &(int32_t){-654303047});
    { void *vp; treetable_get(t, &(int32_t){1080505}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1475276375}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-793792593}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1601928059}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597807}, &kp); }
    treetable_add(t, &(int32_t){1330597887}, &(int32_t){1330597711});
    { void *vp; treetable_get(t, &(int32_t){-548384945}, &vp); }
    treetable_add(t, &(int32_t){-689373364}, &(int32_t){-654317336});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1973616640});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-959789113}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-464893409}, &(int32_t){2071709635});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8684679}, &kp); }
    treetable_add(t, &(int32_t){-943194131}, &(int32_t){13027018});
    { void *vp; treetable_get(t, &(int32_t){-32768}, &vp); }
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-401086232});
    treetable_add(t, &(int32_t){-387385906}, &(int32_t){1795});
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-15138288});
    { void *vp; treetable_get(t, &(int32_t){1246396160}, &vp); }
    treetable_add(t, &(int32_t){1246382666}, &(int32_t){33554432});
    treetable_add(t, &(int32_t){-6680}, &(int32_t){-10526721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-2088507389}, &(int32_t){1245839491});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }