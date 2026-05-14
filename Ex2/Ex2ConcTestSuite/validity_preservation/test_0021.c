/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000071,src:000025+000065,time:151,execs:14291,op:splice,rep:12 */

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
    treetable_add(t, &(int32_t){1311464}, &(int32_t){16777216});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_add(t, &(int32_t){5120}, &(int32_t){5888});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){2816}, &(int32_t){51052800});
    treetable_add(t, &(int32_t){1305344}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){10066329}, &vp);
    treetable_add(t, &(int32_t){65524}, &(int32_t){-16769280});
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){-352238524});
    treetable_get_greater_than(t, &(int32_t){65535}, &kp);
    treetable_add(t, &(int32_t){791621376}, &(int32_t){791621423});
    treetable_get_greater_than(t, &(int32_t){1278160687}, &kp);
    treetable_add(t, &(int32_t){791621423}, &(int32_t){15403521});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){385875968});
    treetable_add(t, &(int32_t){0}, &(int32_t){5122});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1718021120});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){60928}, &(int32_t){0});
    treetable_add(t, &(int32_t){-754974720}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){211}, &kp);
    treetable_get_greater_than(t, &(int32_t){1141766655}, &kp);
    treetable_get(t, &(int32_t){50391040}, &vp);
    treetable_add(t, &(int32_t){2130706432}, &(int32_t){1140857088});
    treetable_destroy(t);
    return 0;
}
