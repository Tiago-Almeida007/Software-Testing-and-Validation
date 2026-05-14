/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000113,src:000002+000083,time:4575,execs:428208,op:splice,rep:32 */

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
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_get_greater_than(t, &(int32_t){234487807}, &kp);
    treetable_add(t, &(int32_t){15204365}, &(int32_t){3});
    treetable_add(t, &(int32_t){-1717987072}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){10027008}, &vp);
    treetable_add(t, &(int32_t){199424}, &(int32_t){335675392});
    treetable_add(t, &(int32_t){1048576}, &(int32_t){-1979706366});
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){8388352}, &(int32_t){0});
    treetable_add(t, &(int32_t){334168064}, &(int32_t){0});
    treetable_add(t, &(int32_t){-402653184}, &(int32_t){-2161920});
    treetable_get_greater_than(t, &(int32_t){255}, &kp);
    treetable_add(t, &(int32_t){603979776}, &(int32_t){16777984});
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_add(t, &(int32_t){1145324626}, &(int32_t){1145062468});
    treetable_add(t, &(int32_t){-352231868}, &(int32_t){7208959});
    treetable_add(t, &(int32_t){65536}, &(int32_t){791609344});
    treetable_get_greater_than(t, &(int32_t){791622703}, &kp);
    treetable_add(t, &(int32_t){791609344}, &(int32_t){3092288});
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){-318832640}, &kp);
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_get_greater_than(t, &(int32_t){19}, &kp);
    treetable_get_greater_than(t, &(int32_t){234487807}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){33554432}, &(int32_t){20});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){16776960});
    treetable_add(t, &(int32_t){0}, &(int32_t){-741146624});
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_get(t, &(int32_t){-1717979949}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){-741092608});
    treetable_get_greater_than(t, &(int32_t){51041235}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){1507328}, &(int32_t){0});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){5120}, &(int32_t){59392});
    treetable_add(t, &(int32_t){-184156160}, &(int32_t){-741092397});
    treetable_add(t, &(int32_t){59859}, &(int32_t){0});
    treetable_destroy(t);
    return 0;
}
