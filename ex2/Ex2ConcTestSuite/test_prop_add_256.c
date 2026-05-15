/* id_000256_src_000003+000250_time_4343_execs_142749_op_splice_rep_4.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){196623}, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1376512});
    treetable_add(t, &(int32_t){-1128481594}, &(int32_t){-390284100});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){390202112}, &(int32_t){-1600086000});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){117453216});
    treetable_add(t, &(int32_t){0}, &(int32_t){436207616});
    { void *vp; treetable_get(t, &(int32_t){-436240363}, &vp); }
    treetable_add(t, &(int32_t){255323391}, &(int32_t){16842240});
    treetable_add(t, &(int32_t){-353703329}, &(int32_t){-353703190});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088533117}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088532093}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1804960643}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){57088}, &kp); }
    treetable_add(t, &(int32_t){117571557}, &(int32_t){117440512});
    treetable_add(t, &(int32_t){-16777209}, &(int32_t){-1347440769});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1515870786}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){4261}, &vp); }
    treetable_add(t, &(int32_t){337253396}, &(int32_t){622269540});
    treetable_add(t, &(int32_t){-387586048}, &(int32_t){14816249});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1107354131}, &vp); }
    treetable_add(t, &(int32_t){-2128217837}, &(int32_t){-2088533117});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8437063}, &kp); }
    treetable_add(t, &(int32_t){117506048}, &(int32_t){-65536});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347440720}, &kp); }
    treetable_add(t, &(int32_t){487898112}, &(int32_t){-1769471});
    { void *vp; treetable_get(t, &(int32_t){263}, &vp); }
    treetable_add(t, &(int32_t){352321535}, &(int32_t){1678906388});
    treetable_add(t, &(int32_t){57087}, &(int32_t){355016448});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){631283872});
    treetable_add(t, &(int32_t){-8437248}, &(int32_t){0});
    treetable_add(t, &(int32_t){2088533126}, &(int32_t){-16842628});
    { void *kp; treetable_get_greater_than(t, &(int32_t){419430400}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1280068685}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1280068685}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1280068685}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){701159935}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-943194608}, &vp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){-33554200});
    treetable_add(t, &(int32_t){-2097086310}, &(int32_t){-2122087549});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-8158333}, &kp); }
    treetable_add(t, &(int32_t){437523476}, &(int32_t){-1043180});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179010631}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1600085856}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){352321536}, &(int32_t){-1811939328});
    treetable_add(t, &(int32_t){-471624556}, &(int32_t){-471604253});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-6306077}, &kp); }
    treetable_add(t, &(int32_t){2949120}, &(int32_t){538976339});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2105376}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-12500481}, &(int32_t){-1178992679});
    { void *vp; treetable_get(t, &(int32_t){-637544007}, &vp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){8388608});
    treetable_add(t, &(int32_t){570556160}, &(int32_t){-454819840});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){54715620});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-134217728}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1179052799}, &(int32_t){-960051527});
    treetable_add(t, &(int32_t){1107292181}, &(int32_t){-1174414849});
    { void *vp; treetable_get(t, &(int32_t){2144697}, &vp); }
    treetable_add(t, &(int32_t){-1937998724}, &(int32_t){86644546});
    treetable_add(t, &(int32_t){-1128529920}, &(int32_t){223});
    treetable_add(t, &(int32_t){-388568833}, &(int32_t){-387383320});
    treetable_add(t, &(int32_t){-2081888024}, &(int32_t){57088});
    treetable_add(t, &(int32_t){1536}, &(int32_t){50462693});
    treetable_add(t, &(int32_t){117440512}, &(int32_t){1792});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485695}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1347453184}, &(int32_t){-1514229841});
    { void *vp; treetable_get(t, &(int32_t){-1515870811}, &vp); }
    treetable_add(t, &(int32_t){-1532648192}, &(int32_t){-1515870811});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }