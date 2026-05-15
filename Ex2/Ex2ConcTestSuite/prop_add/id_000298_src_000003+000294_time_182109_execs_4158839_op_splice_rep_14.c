/* id_000298_src_000003+000294_time_182109_execs_4158839_op_splice_rep_14.c
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
    treetable_add(t, &(int32_t){251854848}, &(int32_t){-134217728});
    treetable_add(t, &(int32_t){1107296256}, &(int32_t){69379});
    treetable_add(t, &(int32_t){3843}, &(int32_t){984043});
    treetable_add(t, &(int32_t){51774208}, &(int32_t){15});
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){48555236}, &(int32_t){28});
    treetable_add(t, &(int32_t){1376512}, &(int32_t){-1128479232});
    treetable_add(t, &(int32_t){-398672708}, &(int32_t){258895470});
    treetable_add(t, &(int32_t){805502976}, &(int32_t){1107492864});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1601069040}, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){117453216}, &(int32_t){0});
    treetable_add(t, &(int32_t){436207616}, &(int32_t){-8383231});
    { void *vp; treetable_get(t, &(int32_t){15007744}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){6558208}, &kp); }
    treetable_add(t, &(int32_t){-1609225953}, &(int32_t){-1600413536});
    treetable_add(t, &(int32_t){2465952}, &(int32_t){-8437214});
    treetable_add(t, &(int32_t){-387416064}, &(int32_t){-2088533016});
    { void *vp; treetable_get(t, &(int32_t){-2088533117}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107331503}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1467973503}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){23639}, &kp); }
    treetable_add(t, &(int32_t){57342}, &(int32_t){-385928192});
    treetable_add(t, &(int32_t){-2088533117}, &(int32_t){1804960643});
    { void *kp; treetable_get_greater_than(t, &(int32_t){352446595}, &kp); }
    treetable_add(t, &(int32_t){-267059200}, &(int32_t){541147647});
    treetable_add(t, &(int32_t){8585216}, &(int32_t){-2147483425});
    treetable_add(t, &(int32_t){-452984826}, &(int32_t){459263});
    { void *vp; treetable_get(t, &(int32_t){8257}, &vp); }
    treetable_add(t, &(int32_t){100696064}, &(int32_t){-1769472});
    { void *vp; treetable_get(t, &(int32_t){458752}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){27633061}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1515871067}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    treetable_add(t, &(int32_t){2430740}, &(int32_t){-387640833});
    { void *vp; treetable_get(t, &(int32_t){1123803667}, &vp); }
    treetable_add(t, &(int32_t){-2128741613}, &(int32_t){12993024});
    treetable_add(t, &(int32_t){-1043200}, &(int32_t){-637583039});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010631}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){637080420}, &(int32_t){-2088533119});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2135079423}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16777296}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347440895}, &kp); }
    treetable_add(t, &(int32_t){347930644}, &(int32_t){-452984547});
    { void *kp; treetable_get_greater_than(t, &(int32_t){67329}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){12171705}, &kp); }
    treetable_add(t, &(int32_t){1376538}, &(int32_t){-387389440});
    treetable_add(t, &(int32_t){458759}, &(int32_t){-256});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){350814207}, &kp); }
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){-6250336}, &(int32_t){631283840});
    treetable_add(t, &(int32_t){-8437276}, &(int32_t){8388608});
    treetable_add(t, &(int32_t){2088533126}, &(int32_t){-16842628});
    { void *kp; treetable_get_greater_than(t, &(int32_t){419430400}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){40523093}, &vp); }
    treetable_add(t, &(int32_t){1465210197}, &(int32_t){1431655767});
    { void *vp; treetable_get(t, &(int32_t){132147541}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1263883605}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-960050489}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1614363070}, &(int32_t){2071664127});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071689984}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147423745}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){271154043}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-402652999}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533117}, &vp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){-267054054});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1023359290}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010790}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387042087}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){6250495}, &kp); }
    treetable_add(t, &(int32_t){336875600}, &(int32_t){-1140845548});
    treetable_add(t, &(int32_t){336855316}, &(int32_t){325915156});
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){660938879}, &kp); }
    treetable_add(t, &(int32_t){-1610610944}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1734829928}, &(int32_t){-1734829928});
    treetable_add(t, &(int32_t){-1734829928}, &(int32_t){-1734829928});
    treetable_add(t, &(int32_t){-1734829928}, &(int32_t){10000536});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2949120}, &(int32_t){538976339});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-954195936}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1271376835});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2105376125}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){2105376125}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2105376125}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1263225675}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-65536}, &kp); }
    treetable_add(t, &(int32_t){336860240}, &(int32_t){347865108});
    { void *vp; treetable_get(t, &(int32_t){-1970632191}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){17236479}, &vp); }
    treetable_add(t, &(int32_t){1467776124}, &(int32_t){-296265897});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1376745}, &(int32_t){2130788864});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2139062143}, &kp); }
    treetable_add(t, &(int32_t){2139062143}, &(int32_t){-296265857});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-2147483488}, &(int32_t){-16760832});
    { void *vp; treetable_get(t, &(int32_t){-454761244}, &vp); }
    treetable_add(t, &(int32_t){-454760732}, &(int32_t){41026});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-891682855}, &kp); }
    treetable_add(t, &(int32_t){-943208450}, &(int32_t){1048579});
    treetable_add(t, &(int32_t){5368}, &(int32_t){1845707264});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389206}, &kp); }
    treetable_add(t, &(int32_t){-960054855}, &(int32_t){-267059002});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2490593}, &kp); }
    treetable_add(t, &(int32_t){-1179002624}, &(int32_t){4220});
    treetable_add(t, &(int32_t){1465341783}, &(int32_t){1465380590});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1459617884}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1330597701}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8368305}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-385929216}, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){1246382824});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){100696064}, &(int32_t){-1769472});
    { void *vp; treetable_get(t, &(int32_t){5635}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }