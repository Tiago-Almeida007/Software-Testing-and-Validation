/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000111,src:000002+000085,time:4416,execs:414904,op:splice,rep:3 */

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
    treetable_get_greater_than(t, &(int32_t){10}, &kp);
    treetable_add(t, &(int32_t){-15465984}, &(int32_t){-15466240});
    treetable_add(t, &(int32_t){1313537}, &(int32_t){535433216});
    treetable_add(t, &(int32_t){3}, &(int32_t){256000});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536000});
    treetable_add(t, &(int32_t){0}, &(int32_t){2563});
    treetable_add(t, &(int32_t){34865896}, &(int32_t){0});
    treetable_add(t, &(int32_t){256000}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){10}, &kp);
    treetable_add(t, &(int32_t){11}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){10}, &kp);
    treetable_destroy(t);
    return 0;
}
