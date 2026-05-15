/* id_000148_src_000001+000111_time_212_execs_13064_op_splice_rep_7.c
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
    treetable_add(t, &(int32_t){622269540}, &(int32_t){-909522487});
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-909522487}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){51657}, &vp); }
    treetable_add(t, &(int32_t){2135067648}, &(int32_t){1565544528});
    treetable_add(t, &(int32_t){1315860}, &(int32_t){1116471296});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347440720}, &kp); }
    treetable_add(t, &(int32_t){18093244}, &(int32_t){303305748});
    { void *vp; treetable_get(t, &(int32_t){14614291}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){271132969}, &vp); }
    treetable_add(t, &(int32_t){-387383500}, &(int32_t){-387389208});
    { void *vp; treetable_get(t, &(int32_t){603979797}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-12451856}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){631283872}, &(int32_t){2135031808});
    { void *kp; treetable_get_greater_than(t, &(int32_t){0}, &kp); }
    treetable_add(t, &(int32_t){2088533116}, &(int32_t){1116503164});
    treetable_add(t, &(int32_t){37}, &(int32_t){-1128481792});
    treetable_add(t, &(int32_t){-1128481604}, &(int32_t){-1128481604});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }