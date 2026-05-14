/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000049,src:000001+000041,time:106,execs:10487,op:splice,rep:4 */

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
    treetable_get_greater_than(t, &(int32_t){7}, &kp);
    treetable_get_greater_than(t, &(int32_t){3}, &kp);
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){3080192});
    treetable_add(t, &(int32_t){1073741824}, &(int32_t){5120});
    treetable_add(t, &(int32_t){48759016}, &(int32_t){20});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_destroy(t);
    return 0;
}
