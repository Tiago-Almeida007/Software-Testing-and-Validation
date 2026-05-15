/* id_000115_src_000001+000072_time_174_execs_11611_op_splice_rep_12.c
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
    { void *kp; treetable_get_greater_than(t, &(int32_t){16901}, &kp); }
    treetable_add(t, &(int32_t){339148800}, &(int32_t){336860195});
    treetable_add(t, &(int32_t){-1600109986}, &(int32_t){32928});
    treetable_add(t, &(int32_t){94}, &(int32_t){-1358954496});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1460527360}, &(int32_t){-385928192});
    treetable_add(t, &(int32_t){-1347440664}, &(int32_t){-1347440721});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    treetable_add(t, &(int32_t){4325376}, &(int32_t){1179417});
    treetable_add(t, &(int32_t){1308622848}, &(int32_t){1122500654});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){23639}, &kp); }
    treetable_add(t, &(int32_t){1577063444}, &(int32_t){-1600085950});
    treetable_add(t, &(int32_t){1577058304}, &(int32_t){-385941488});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }