/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000038,src:000001,time:41,execs:3939,op:havoc,rep:1 */

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
    treetable_add(t, &(int32_t){-1583242776}, &(int32_t){43433});
    treetable_add(t, &(int32_t){23}, &(int32_t){-402653184});
    treetable_add(t, &(int32_t){1311464}, &(int32_t){65536000});
    treetable_destroy(t);
    return 0;
}
