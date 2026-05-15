/* id_000294_src_000003+000289_time_96601_execs_2356418_op_splice_rep_4.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){1374208}, &(int32_t){54657024});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331648}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){251854848}, &(int32_t){50331648});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-469761280}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){269959683}, &(int32_t){-1600089696});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){458801});
    treetable_add(t, &(int32_t){0}, &(int32_t){18481152});
    { void *vp; treetable_get(t, &(int32_t){15073152}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){997356}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085861}, &(int32_t){570434976});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088664189}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347452029}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1970697847}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1987475063}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1600091767}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-32495319}, &kp); }
    treetable_add(t, &(int32_t){-2081888001}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088539243}, &kp); }
    treetable_add(t, &(int32_t){50754}, &(int32_t){-1043200});
    { void *vp; treetable_get(t, &(int32_t){8257}, &vp); }
    treetable_add(t, &(int32_t){100696064}, &(int32_t){-1769472});
    { void *vp; treetable_get(t, &(int32_t){1094778887}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){57088}, &kp); }
    treetable_add(t, &(int32_t){131045}, &(int32_t){117442304});
    treetable_add(t, &(int32_t){-1350566144}, &(int32_t){-1095782481});
    { void *vp; treetable_get(t, &(int32_t){-1515870811}, &vp); }
    treetable_add(t, &(int32_t){-1515913216}, &(int32_t){-1515870812});
    { void *vp; treetable_get(t, &(int32_t){1358954374}, &vp); }
    treetable_add(t, &(int32_t){342103066}, &(int32_t){-16767721});
    { void *vp; treetable_get(t, &(int32_t){335145189}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1597584679}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8158333}, &kp); }
    treetable_add(t, &(int32_t){1344348416}, &(int32_t){117506048});
    treetable_add(t, &(int32_t){-256}, &(int32_t){1347440720});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){487898112});
    { void *vp; treetable_get(t, &(int32_t){33547520}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){437523476}, &kp); }
    treetable_add(t, &(int32_t){117500136}, &(int32_t){1792});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){-16751598}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600121559}, &kp); }
    treetable_add(t, &(int32_t){-469752416}, &(int32_t){16744257});
    treetable_add(t, &(int32_t){-2046820224}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){14679807}, &(int32_t){-1189543936});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943212089}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208487}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1263257515}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655755}, &kp); }
    treetable_add(t, &(int32_t){1434451968}, &(int32_t){1465341269});
    { void *vp; treetable_get(t, &(int32_t){1431655765}, &vp); }
    treetable_add(t, &(int32_t){1442645760}, &(int32_t){1263228245});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-951366837}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-146669568}, &vp); }
    treetable_add(t, &(int32_t){1107296416}, &(int32_t){-6306106});
    { void *vp; treetable_get(t, &(int32_t){2071690107}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8092539}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8684677}, &kp); }
    treetable_add(t, &(int32_t){2079457261}, &(int32_t){-32495237});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    treetable_add(t, &(int32_t){18486292}, &(int32_t){-402653163});
    treetable_add(t, &(int32_t){-33554200}, &(int32_t){16816731});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2122093181}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1358728413}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-1179010790});
    { void *vp; treetable_get(t, &(int32_t){-1633805351}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-12451840}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-256}, &kp); }
    treetable_add(t, &(int32_t){1347452738}, &(int32_t){336875600});
    treetable_add(t, &(int32_t){347865108}, &(int32_t){336855316});
    treetable_add(t, &(int32_t){-15504110}, &(int32_t){222});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1601855327}, &kp); }
    treetable_add(t, &(int32_t){35349}, &(int32_t){-1610610944});
    treetable_add(t, &(int32_t){10526880}, &(int32_t){-960085504});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633763601}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){538989312}, &vp); }
    treetable_add(t, &(int32_t){-943208505}, &(int32_t){199});
    treetable_add(t, &(int32_t){-945044736}, &(int32_t){1263225675});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2105376075}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2105376125}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2105376125}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2105376125}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485695}, &kp); }
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){-1979638508});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440513}, &kp); }
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){1465380590});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459617884}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){21102592}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465352063}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459617884}, &kp); }
    treetable_add(t, &(int32_t){-1600086016}, &(int32_t){10526880});
    treetable_add(t, &(int32_t){4194432}, &(int32_t){-454819329});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-421206813});
    treetable_add(t, &(int32_t){213732}, &(int32_t){-134217712});
    treetable_add(t, &(int32_t){1107296256}, &(int32_t){1852730883});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1178856191});
    { void *vp; treetable_get(t, &(int32_t){13027014}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178992679}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){276609465}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-286369961}, &kp); }
    treetable_add(t, &(int32_t){-286370048}, &(int32_t){390237271});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330642816}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347374927}, &kp); }
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-387383320});
    treetable_add(t, &(int32_t){1256777960}, &(int32_t){1246382666});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1536}, &(int32_t){50462693});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }