/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000080,src:000021+000073,time:199,execs:18614,op:splice,rep:3 */

#include <assert.h>
#include <stdint.h>
#include "treetable.h"

static TreeTable *make_tree(void) {
    TreeTable *t; treetable_new(&t);
    int b=10,c=15,a=5,e=25,d=20, v2=40,v3=45,v1=35,v5=55,v4=50;
    treetable_add(t,&b,&v2); treetable_add(t,&c,&v3); treetable_add(t,&a,&v1);
    treetable_add(t,&e,&v5); treetable_add(t,&d,&v4);
    assert(balanced(t)&&sorted(t)); return t;
}

int main(void) {
    void *vp, *kp;
    TreeTable *t = make_tree();
    treetable_get_greater_than(t, &(int32_t){167968787}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){1311464}, &(int32_t){16777728});
    treetable_get_first_key(t, &kp);
    treetable_get(t, &(int32_t){-1728053248}, &vp);
    treetable_add(t, &(int32_t){65536}, &(int32_t){1310720});
    treetable_add(t, &(int32_t){5888}, &(int32_t){39321});
    treetable_add(t, &(int32_t){-201326592}, &(int32_t){255});
    treetable_get_greater_than(t, &(int32_t){16383744}, &kp);
    treetable_add(t, &(int32_t){-1717986919}, &(int32_t){39321});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){16777216}, &kp);
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){-352231868}, &(int32_t){16777215});
    treetable_add(t, &(int32_t){65536}, &(int32_t){791609344});
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_add(t, &(int32_t){791621423}, &(int32_t){3092288});
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){16777216}, &kp);
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){36});
    treetable_add(t, &(int32_t){1311232}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){15597568}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){1});
    treetable_get(t, &(int32_t){778}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-741146624});
    treetable_get_greater_than(t, &(int32_t){54227}, &kp);
    treetable_get(t, &(int32_t){-741092397}, &vp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_add(t, &(int32_t){-60670}, &(int32_t){1145310713});
    treetable_destroy(t);
    return 0;
}
