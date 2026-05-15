/* id_000340_src_000060+000165_time_600129_execs_11710527_op_splice_rep_60.c
 * Property: get_first_key correctness — treetable_get_first_key must return
 * the globally smallest key currently in the table.
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
    treetable_add(t, &(int32_t){1459617792}, &(int32_t){-1157680128});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1769472}, &(int32_t){-1});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-524289}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){151587081}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-16185079}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){1140850432});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1128481592}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440829}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-12406865}, &kp); }
    treetable_add(t, &(int32_t){1465323489}, &(int32_t){1465341856});
    { void *kp; treetable_get_greater_than(t, &(int32_t){475486039}, &kp); }
    treetable_add(t, &(int32_t){266411036}, &(int32_t){1470650199});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-1343742948}, &(int32_t){-16843010});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-400810980}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-16843010}, &(int32_t){-16843010});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-16843032}, &(int32_t){-16843010});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1785358955}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-16843115}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1842351}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){5723991}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){16901}, &vp); }
    treetable_add(t, &(int32_t){-1606950656}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085889}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){17097});
    treetable_add(t, &(int32_t){909588449}, &(int32_t){-520093696});
    treetable_add(t, &(int32_t){937492480}, &(int32_t){-387389385});
    { void *kp; treetable_get_greater_than(t, &(int32_t){33610294}, &kp); }
    treetable_add(t, &(int32_t){1599580160}, &(int32_t){1600085855});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8347514}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-101058055}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){1122099681}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-14934808}, &kp); }
    treetable_add(t, &(int32_t){1465323489}, &(int32_t){1465341856});
    { void *kp; treetable_get_greater_than(t, &(int32_t){475486039}, &kp); }
    treetable_add(t, &(int32_t){266411036}, &(int32_t){1470650199});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-1343742948}, &(int32_t){481275823});
    treetable_add(t, &(int32_t){1179009536}, &(int32_t){1465341864});
    { void *kp; treetable_get_greater_than(t, &(int32_t){926889728}, &kp); }
    treetable_add(t, &(int32_t){1107623936}, &(int32_t){-520093696});
    { void *kp; treetable_get_greater_than(t, &(int32_t){5705161}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440721}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-385934080}, &vp); }
    treetable_add(t, &(int32_t){340804236}, &(int32_t){437523476});
    treetable_add(t, &(int32_t){-956305387}, &(int32_t){-267059002});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1344667839}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){419447296}, &kp); }
    treetable_add(t, &(int32_t){909590272}, &(int32_t){4326689});
    treetable_add(t, &(int32_t){4326656}, &(int32_t){937492707});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1465341783}, &kp); }
    treetable_add(t, &(int32_t){-387849759}, &(int32_t){1111638594});
    { void *vp; treetable_get(t, &(int32_t){16662528}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){16843009}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){8388608}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1459683585}, &vp); }
    treetable_destroy(t);
}

int main(void) { test(); return 0; }