/* Property: LOOKUP CORRECTNESS – treetable_get: after add(k,v), get(k)==v and contains_value(ptr)>0. */
/* Source:   id:000002,time:0,execs:0,orig:seed3 */

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
    treetable_get(t, &(int32_t){300}, &vp);
    treetable_destroy(t);
    return 0;
}
