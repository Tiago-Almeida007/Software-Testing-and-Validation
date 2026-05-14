/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000059,src:000004+000056,time:121,execs:11708,op:splice,rep:3 */

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
    treetable_get(t, &(int32_t){788529393}, &vp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1717987052}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){10066329}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){256}, &(int32_t){51052800});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){65536}, &(int32_t){184614912});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){-754974720});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_add(t, &(int32_t){-15531520}, &(int32_t){-15861249});
    treetable_destroy(t);
    return 0;
}
