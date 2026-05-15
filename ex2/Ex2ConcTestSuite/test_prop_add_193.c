/* id_000193_src_000012+000179_time_410_execs_18808_op_splice_rep_3.c
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
    { void *vp; treetable_get(t, &(int32_t){7}, &vp); }
    treetable_add(t, &(int32_t){301930752}, &(int32_t){0});
    { void *vp; treetable_get(t, &(int32_t){16777223}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){20735}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485691}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1346538496}, &(int32_t){6243189});
    { void *kp; treetable_get_greater_than(t, &(int32_t){336862228}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){336875600}, &kp); }
    treetable_add(t, &(int32_t){2561812}, &(int32_t){0});
    treetable_add(t, &(int32_t){336875586}, &(int32_t){337253396});
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807935}, &kp); }
    treetable_add(t, &(int32_t){622269540}, &(int32_t){65280});
    treetable_add(t, &(int32_t){340804236}, &(int32_t){9492});
    treetable_add(t, &(int32_t){1116471296}, &(int32_t){1347440767});
    treetable_add(t, &(int32_t){336860180}, &(int32_t){336903168});
    { void *vp; treetable_get(t, &(int32_t){303305748}, &vp); }
    treetable_add(t, &(int32_t){689897472}, &(int32_t){690563369});
    treetable_add(t, &(int32_t){1073799166}, &(int32_t){-385928192});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){5377});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){124});
    treetable_add(t, &(int32_t){-1600086016}, &(int32_t){631283872});
    treetable_add(t, &(int32_t){1098859008}, &(int32_t){-637543937});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1179010631}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){2088533116}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-318832640}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1127859766}, &vp); }
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-13369344});
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){16777448});
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){969595391});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }