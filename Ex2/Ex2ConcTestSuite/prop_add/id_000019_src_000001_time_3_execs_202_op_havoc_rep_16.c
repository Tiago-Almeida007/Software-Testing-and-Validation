/* id_000019_src_000001_time_3_execs_202_op_havoc_rep_16.c
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
    treetable_add(t, &(int32_t){1608974336}, &(int32_t){1130692735});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1650417408}, &kp); }
    treetable_add(t, &(int32_t){-537001796}, &(int32_t){872415232});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-387389208}, &kp); }
    treetable_add(t, &(int32_t){-387389208}, &(int32_t){-386340632});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){269609120}, &(int32_t){1308688128});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }