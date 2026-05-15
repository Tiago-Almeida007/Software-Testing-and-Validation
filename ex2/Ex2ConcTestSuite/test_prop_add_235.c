/* id_000235_src_000043+000228_time_1081_execs_39711_op_splice_rep_8.c
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
    treetable_add(t, &(int32_t){20}, &(int32_t){1034050});
    treetable_add(t, &(int32_t){983808}, &(int32_t){390202112});
    treetable_add(t, &(int32_t){-2147483648}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){59392}, &(int32_t){1346538496});
    treetable_add(t, &(int32_t){437523476}, &(int32_t){-1043180});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388793}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533119}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533109}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533117}, &kp); }
    treetable_add(t, &(int32_t){393344}, &(int32_t){33547520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440512}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485695}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-502007320}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){2135067648}, &(int32_t){555819344});
    { void *vp; treetable_get(t, &(int32_t){555819297}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){553648383}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-16777209}, &vp); }
    treetable_add(t, &(int32_t){336875600}, &(int32_t){-1140845548});
    treetable_add(t, &(int32_t){336855325}, &(int32_t){325915156});
    { void *kp; treetable_get_greater_than(t, &(int32_t){222}, &kp); }
    treetable_add(t, &(int32_t){-1598578528}, &(int32_t){2465952});
    treetable_add(t, &(int32_t){16744258}, &(int32_t){0});
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){-876099655});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1179007033}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){13027018}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1600085799}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-891682855}, &kp); }
    treetable_add(t, &(int32_t){-943208450}, &(int32_t){12171705});
    treetable_add(t, &(int32_t){-387389185}, &(int32_t){-1946157056});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){13027071}, &(int32_t){1107292181});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1178992679}, &kp); }
    treetable_add(t, &(int32_t){352446696}, &(int32_t){-968753152});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1076113824}, &(int32_t){570556160});
    treetable_add(t, &(int32_t){0}, &(int32_t){352387072});
    treetable_add(t, &(int32_t){-1128479232}, &(int32_t){-1128481604});
    treetable_add(t, &(int32_t){-387383320}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){-1179010795}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-12451856}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-654303047}, &vp); }
    treetable_add(t, &(int32_t){1116503164}, &(int32_t){9495});
    treetable_add(t, &(int32_t){-541279232}, &(int32_t){872415232});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387393816}, &kp); }
    treetable_add(t, &(int32_t){8644840}, &(int32_t){-2147483425});
    treetable_add(t, &(int32_t){-452984826}, &(int32_t){459263});
    treetable_add(t, &(int32_t){117442304}, &(int32_t){-65536});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1186856960}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }