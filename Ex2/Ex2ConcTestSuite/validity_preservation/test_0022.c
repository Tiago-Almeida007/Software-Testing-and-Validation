/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000073,src:000039+000071,time:164,execs:15537,op:splice,rep:10 */

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
    treetable_add(t, &(int32_t){1311234}, &(int32_t){48758785});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1718025727});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){153}, &(int32_t){0});
    treetable_get(t, &(int32_t){335544320}, &vp);
    treetable_add(t, &(int32_t){10066176}, &(int32_t){0});
    treetable_add(t, &(int32_t){65524}, &(int32_t){-16769280});
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_get(t, &(int32_t){10066329}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){2816});
    treetable_add(t, &(int32_t){199425}, &(int32_t){1305344});
    treetable_add(t, &(int32_t){1145324544}, &(int32_t){1145324644});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145324612});
    treetable_get(t, &(int32_t){-21}, &vp);
    treetable_get(t, &(int32_t){788529152}, &vp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791625775}, &kp);
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){2816});
    treetable_add(t, &(int32_t){199425}, &(int32_t){1305344});
    treetable_add(t, &(int32_t){50391040}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){9216}, &(int32_t){33554432});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){-741092608}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-371993645}, &kp);
    treetable_get(t, &(int32_t){39321}, &vp);
    treetable_add(t, &(int32_t){256}, &(int32_t){50987264});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-754974720}, &(int32_t){-741092397});
    treetable_add(t, &(int32_t){-741092608}, &(int32_t){-741086765});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){211}, &kp);
    treetable_get_greater_than(t, &(int32_t){1141766655}, &kp);
    treetable_get(t, &(int32_t){50391040}, &vp);
    treetable_add(t, &(int32_t){2130706432}, &(int32_t){1140857088});
    treetable_destroy(t);
    return 0;
}
