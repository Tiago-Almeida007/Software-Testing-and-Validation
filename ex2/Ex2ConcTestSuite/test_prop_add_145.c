/* id_000145_src_000001+000072_time_205_execs_12811_op_splice_rep_16.c
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
    { void *vp; treetable_get(t, &(int32_t){4982791}, &vp); }
    treetable_add(t, &(int32_t){922747114}, &(int32_t){311});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){32895}, &(int32_t){-464038057});
    { void *vp; treetable_get(t, &(int32_t){-437918235}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-437918235}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-437918235}, &vp); }
    treetable_add(t, &(int32_t){-894455889}, &(int32_t){-391139409});
    treetable_add(t, &(int32_t){-2130712344}, &(int32_t){196479});
    { void *vp; treetable_get(t, &(int32_t){8421352}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){588527585}, &(int32_t){1315860});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1343701644}, &(int32_t){340807760});
    treetable_add(t, &(int32_t){335614996}, &(int32_t){-1604774892});
    treetable_add(t, &(int32_t){-1602183008}, &(int32_t){1072767});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389433}, &kp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }