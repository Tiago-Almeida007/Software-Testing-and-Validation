/* id_000255_src_000003+000250_time_4296_execs_142426_op_splice_rep_1.c
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
    { void *vp; treetable_get(t, &(int32_t){-7952987}, &vp); }
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085799}, &kp); }
    treetable_add(t, &(int32_t){1465341884}, &(int32_t){1465341783});
    treetable_add(t, &(int32_t){-505348096}, &(int32_t){-1354571295});
    { void *kp; treetable_get_greater_than(t, &(int32_t){44975}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1107292181}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){690563369}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    treetable_add(t, &(int32_t){59624}, &(int32_t){10092798});
    { void *vp; treetable_get(t, &(int32_t){-2088533117}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1116528127}, &kp); }
    treetable_add(t, &(int32_t){-267054054}, &(int32_t){13027071});
    { void *vp; treetable_get(t, &(int32_t){-12451856}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1642341959}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1107296277}, &(int32_t){-1600071169});
    treetable_add(t, &(int32_t){41120}, &(int32_t){-1614363070});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1197564226}, &kp); }
    treetable_add(t, &(int32_t){538976339}, &(int32_t){538976283});
    treetable_add(t, &(int32_t){32041060}, &(int32_t){1107296277});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178992679}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1600076086}, &vp); }
    treetable_add(t, &(int32_t){8388608}, &(int32_t){33488960});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){-454761244});
    treetable_add(t, &(int32_t){54715620}, &(int32_t){15});
    treetable_add(t, &(int32_t){20}, &(int32_t){1852703554});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-1189805592});
    { void *vp; treetable_get(t, &(int32_t){-960051527}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    treetable_add(t, &(int32_t){2092546521}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){86644546}, &(int32_t){-1140850688});
    treetable_add(t, &(int32_t){223}, &(int32_t){-689373388});
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *kp; treetable_get_greater_than(t, &(int32_t){57088}, &kp); }
    treetable_add(t, &(int32_t){50462693}, &(int32_t){0});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1792}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){1376538});
    treetable_add(t, &(int32_t){129612098}, &(int32_t){-1350631424});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1514229841}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){459173}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }