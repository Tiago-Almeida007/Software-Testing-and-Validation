/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000057,src:000004+000056,time:120,execs:11690,op:splice,rep:2 */

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
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){16777216}, &(int32_t){-1717987070});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){65536}, &(int32_t){1310720});
    treetable_add(t, &(int32_t){5888}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){720896});
    treetable_add(t, &(int32_t){51052800}, &(int32_t){334168064});
    treetable_add(t, &(int32_t){15204352}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){1638400});
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_get(t, &(int32_t){788529152}, &vp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1718021120});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){65536}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_add(t, &(int32_t){51051008}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){60928}, &(int32_t){0});
    treetable_add(t, &(int32_t){-754974720}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){211}, &kp);
    treetable_get_greater_than(t, &(int32_t){915967}, &kp);
    treetable_destroy(t);
    return 0;
}
