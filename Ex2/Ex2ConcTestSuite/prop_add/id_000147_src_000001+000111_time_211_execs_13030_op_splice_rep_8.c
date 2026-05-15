/* id_000147_src_000001+000111_time_211_execs_13030_op_splice_rep_8.c
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
    { void *vp; treetable_get(t, &(int32_t){16777223}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807935}, &kp); }
    treetable_add(t, &(int32_t){-100663046}, &(int32_t){0});
    treetable_add(t, &(int32_t){1350517388}, &(int32_t){340807760});
    treetable_add(t, &(int32_t){-1600085996}, &(int32_t){-1610506080});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){276856736});
    treetable_add(t, &(int32_t){2047}, &(int32_t){1310765});
    treetable_add(t, &(int32_t){335614996}, &(int32_t){1829901332});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147426561}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-32495319}, &vp); }
    treetable_add(t, &(int32_t){33614079}, &(int32_t){32041192});
    { void *vp; treetable_get(t, &(int32_t){-968753152}, &vp); }
    treetable_add(t, &(int32_t){-637582849}, &(int32_t){-960046593});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1599365216}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){2465952}, &(int32_t){-8437248});
    treetable_add(t, &(int32_t){0}, &(int32_t){2088533116});
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){390237308});
    { void *vp; treetable_get(t, &(int32_t){0}, &vp); }
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-1128481604});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1140850651}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }