/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000078,src:000039+000071,time:166,execs:15740,op:splice,rep:6 */

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
    treetable_add(t, &(int32_t){1311234}, &(int32_t){16774144});
    treetable_add(t, &(int32_t){-16769280}, &(int32_t){249});
    treetable_add(t, &(int32_t){0}, &(int32_t){1413760068});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){249});
    treetable_add(t, &(int32_t){5122}, &(int32_t){33619968});
    treetable_get(t, &(int32_t){-1717986904}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){256});
    treetable_add(t, &(int32_t){20}, &(int32_t){23});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){11}, &(int32_t){199425});
    treetable_add(t, &(int32_t){-1728048149}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){39321}, &vp);
    treetable_add(t, &(int32_t){255}, &(int32_t){-100728801});
    treetable_add(t, &(int32_t){0}, &(int32_t){1140850688});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){-1375932});
    treetable_get_greater_than(t, &(int32_t){255}, &kp);
    treetable_add(t, &(int32_t){791621423}, &(int32_t){791621423});
    treetable_get_greater_than(t, &(int32_t){793521967}, &kp);
    treetable_get_greater_than(t, &(int32_t){19869487}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){1507328});
    treetable_add(t, &(int32_t){33554432}, &(int32_t){20});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_add(t, &(int32_t){5120}, &(int32_t){5888});
    treetable_add(t, &(int32_t){793509888}, &(int32_t){791621423});
    treetable_get_greater_than(t, &(int32_t){19869487}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){-1717987052}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){10066329}, &vp);
    treetable_add(t, &(int32_t){65536}, &(int32_t){184614912});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){6}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){65536}, &(int32_t){184614912});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){-741092397}, &(int32_t){-741092397});
    treetable_get_greater_than(t, &(int32_t){-741086765}, &kp);
    treetable_get_greater_than(t, &(int32_t){-741092397}, &kp);
    treetable_add(t, &(int32_t){318898176}, &(int32_t){234487807});
    treetable_add(t, &(int32_t){268435524}, &(int32_t){15204365});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_destroy(t);
    return 0;
}
