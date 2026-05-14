/* Property: SUCCESSOR CORRECTNESS – treetable_get_greater_than: returns smallest key strictly greater than k. */
/* Source:   id:000091,src:000019+000082,time:824,execs:80441,op:splice,rep:5 */

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
    treetable_get_greater_than(t, &(int32_t){20}, &kp);
    treetable_add(t, &(int32_t){33554432}, &(int32_t){15007508});
    treetable_get_first_key(t, &kp);
    treetable_get_greater_than(t, &(int32_t){20}, &kp);
    treetable_get(t, &(int32_t){16777216}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){16842516});
    treetable_get_greater_than(t, &(int32_t){20}, &kp);
    treetable_get(t, &(int32_t){16777216}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){10}, &kp);
    treetable_destroy(t);
    return 0;
}
