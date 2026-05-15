/* id_000126_src_000001+000072_time_183_execs_11937_op_splice_rep_5.c
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
    treetable_add(t, &(int32_t){922747114}, &(int32_t){459063});
    { void *vp; treetable_get(t, &(int32_t){16901}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1343690520}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387403857}, &kp); }
    treetable_add(t, &(int32_t){-858993432}, &(int32_t){-858993460});
    treetable_add(t, &(int32_t){-858993460}, &(int32_t){-858993460});
    treetable_add(t, &(int32_t){-858993460}, &(int32_t){2149580});
    treetable_add(t, &(int32_t){-3355444}, &(int32_t){8453888});
    treetable_add(t, &(int32_t){-402587646}, &(int32_t){-1476335392});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1431655767}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){337843255}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-402129152}, &(int32_t){-387389208});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }