/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000077,src:000039+000071,time:166,execs:15692,op:splice,rep:7 */

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
    treetable_add(t, &(int32_t){1311234}, &(int32_t){48758784});
    treetable_add(t, &(int32_t){0}, &(int32_t){10027521});
    treetable_add(t, &(int32_t){-1718026239}, &(int32_t){153});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){335544320});
    treetable_add(t, &(int32_t){1507584}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){184549376});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){-352321533});
    treetable_get_greater_than(t, &(int32_t){-1717987072}, &kp);
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_add(t, &(int32_t){2031616}, &(int32_t){63999});
    treetable_add(t, &(int32_t){0}, &(int32_t){1145324544});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){21251140}, &(int32_t){-21});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){788529152});
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791621452}, &kp);
    treetable_get_greater_than(t, &(int32_t){-351665873}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){23});
    treetable_add(t, &(int32_t){1311232}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){256});
    treetable_add(t, &(int32_t){199425}, &(int32_t){0});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){-1728053248});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){60928}, &(int32_t){65536});
    treetable_add(t, &(int32_t){-754974720}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get_greater_than(t, &(int32_t){-469827373}, &kp);
    treetable_get_greater_than(t, &(int32_t){1141766655}, &kp);
    treetable_get(t, &(int32_t){50391040}, &vp);
    treetable_add(t, &(int32_t){2130706432}, &(int32_t){1140857088});
    treetable_destroy(t);
    return 0;
}
