/* id_000339_src_000060+000165_time_600127_execs_11710519_op_splice_rep_30.c
 * Property: get_greater_than correctness — treetable_get_greater_than(k) must
 * return the immediate in-order successor of k among all inserted keys.
 * If k is the maximum, no successor exists.
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
    treetable_add(t, &(int32_t){-1162215424}, &(int32_t){16759482});
    treetable_add(t, &(int32_t){-1168393728}, &(int32_t){-1145390406});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-471604253}, &kp); }
    treetable_add(t, &(int32_t){117506115}, &(int32_t){-1604173304});
    treetable_add(t, &(int32_t){-1600085790}, &(int32_t){12416639});
    { void *kp; treetable_get_greater_than(t, &(int32_t){921233415}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){1793}, &vp); }
    treetable_add(t, &(int32_t){0}, &(int32_t){459103});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){86062647}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-387434697}, &vp); }
    treetable_add(t, &(int32_t){-402587646}, &(int32_t){-1476335384});
    { void *kp; treetable_get_greater_than(t, &(int32_t){926351436}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926889783}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    treetable_add(t, &(int32_t){926365440}, &(int32_t){926365495});
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){926365495}, &kp); }
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){-387423132}, &(int32_t){-391642904});
    treetable_add(t, &(int32_t){1465362432}, &(int32_t){1465338455});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){1684300900}, &(int32_t){1684300900});
    treetable_add(t, &(int32_t){-387389340}, &(int32_t){-387405824});
    treetable_add(t, &(int32_t){1465341864}, &(int32_t){72832842});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }