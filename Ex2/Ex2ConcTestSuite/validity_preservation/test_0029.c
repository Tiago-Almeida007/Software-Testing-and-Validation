/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000092,src:000002+000090,time:3764,execs:359192,op:splice,rep:56 */

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
    treetable_get(t, &(int32_t){2102274}, &vp);
    treetable_get(t, &(int32_t){59914}, &vp);
    treetable_get_greater_than(t, &(int32_t){255}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){184549376});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){7602176}, &(int32_t){59395});
    treetable_add(t, &(int32_t){0}, &(int32_t){16772096});
    treetable_add(t, &(int32_t){469762048}, &(int32_t){0});
    treetable_add(t, &(int32_t){454033920}, &(int32_t){2});
    treetable_get_greater_than(t, &(int32_t){322}, &kp);
    treetable_get(t, &(int32_t){16843009}, &vp);
    treetable_get(t, &(int32_t){-184549375}, &vp);
    treetable_add(t, &(int32_t){1}, &(int32_t){1310720});
    treetable_add(t, &(int32_t){922747392}, &(int32_t){33554432});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){656128});
    treetable_add(t, &(int32_t){54016}, &(int32_t){1311234});
    treetable_add(t, &(int32_t){0}, &(int32_t){15205120});
    treetable_add(t, &(int32_t){0}, &(int32_t){-402653184});
    treetable_get_first_key(t, &kp);
    treetable_get(t, &(int32_t){235929}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){1073741825});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){1507328}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){184549376});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){50529027});
    treetable_get_greater_than(t, &(int32_t){50529027}, &kp);
    treetable_get_greater_than(t, &(int32_t){50529027}, &kp);
    treetable_get_greater_than(t, &(int32_t){486540035}, &kp);
    treetable_add(t, &(int32_t){16716801}, &(int32_t){1313537});
    treetable_add(t, &(int32_t){-402653168}, &(int32_t){-1703933});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_add(t, &(int32_t){256}, &(int32_t){0});
    treetable_add(t, &(int32_t){-687865856}, &(int32_t){-673720361});
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_add(t, &(int32_t){16711680}, &(int32_t){1310784});
    treetable_add(t, &(int32_t){1370112}, &(int32_t){1507328});
    treetable_add(t, &(int32_t){33554432}, &(int32_t){20});
    treetable_get(t, &(int32_t){-1583284224}, &vp);
    treetable_get(t, &(int32_t){-1448498775}, &vp);
    treetable_get(t, &(int32_t){11119017}, &vp);
    treetable_add(t, &(int32_t){33554432}, &(int32_t){20});
    treetable_get(t, &(int32_t){-1583242847}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){256000}, &(int32_t){335675904});
    treetable_add(t, &(int32_t){48758784}, &(int32_t){20});
    treetable_add(t, &(int32_t){10027521}, &(int32_t){587464724});
    treetable_get_greater_than(t, &(int32_t){184615154}, &kp);
    treetable_get_greater_than(t, &(int32_t){63487}, &kp);
    treetable_get_greater_than(t, &(int32_t){16837631}, &kp);
    treetable_add(t, &(int32_t){33685504}, &(int32_t){33686018});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){32178176});
    treetable_get(t, &(int32_t){16843009}, &vp);
    treetable_get(t, &(int32_t){16843009}, &vp);
    treetable_get_greater_than(t, &(int32_t){232}, &kp);
    treetable_add(t, &(int32_t){-1397969748}, &(int32_t){66220});
    treetable_add(t, &(int32_t){65280}, &(int32_t){0});
    treetable_add(t, &(int32_t){-335544320}, &(int32_t){255});
    treetable_add(t, &(int32_t){7168}, &(int32_t){1347711});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){33685504});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){2528}, &(int32_t){-1039996928});
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){50331648});
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){61695}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){16318335}, &kp);
    treetable_add(t, &(int32_t){51052800}, &(int32_t){334168064});
    treetable_add(t, &(int32_t){-1717986919}, &(int32_t){-1717986887});
    treetable_add(t, &(int32_t){0}, &(int32_t){62464});
    treetable_add(t, &(int32_t){-16763392}, &(int32_t){234});
    treetable_add(t, &(int32_t){0}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){1145324612}, &(int32_t){1145128004});
    treetable_add(t, &(int32_t){25248836}, &(int32_t){16777215});
    treetable_add(t, &(int32_t){0}, &(int32_t){805273344});
    treetable_get_greater_than(t, &(int32_t){3092271}, &kp);
    treetable_get(t, &(int32_t){16843009}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){144}, &(int32_t){-1397969688});
    treetable_add(t, &(int32_t){-1397969748}, &(int32_t){-1397969748});
    treetable_add(t, &(int32_t){136194}, &(int32_t){65280});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){335680514}, &(int32_t){512});
    treetable_add(t, &(int32_t){0}, &(int32_t){1409286144});
    treetable_add(t, &(int32_t){1750357076}, &(int32_t){1414812756});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){1414812756});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){33554516});
    treetable_destroy(t);
    return 0;
}
