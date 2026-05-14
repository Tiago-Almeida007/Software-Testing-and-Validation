/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000095,src:000002+000090,time:3768,execs:359416,op:splice,rep:56 */

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
    treetable_get(t, &(int32_t){-368438270}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){255});
    treetable_get(t, &(int32_t){-16781697}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){51052544});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){1572864}, &(int32_t){0});
    treetable_add(t, &(int32_t){-402456576}, &(int32_t){-256});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){8388352}, &(int32_t){0});
    treetable_add(t, &(int32_t){61695}, &(int32_t){0});
    treetable_add(t, &(int32_t){5122}, &(int32_t){33619947});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){256});
    treetable_add(t, &(int32_t){20}, &(int32_t){-117440513});
    treetable_add(t, &(int32_t){720896}, &(int32_t){1310720});
    treetable_add(t, &(int32_t){33686016}, &(int32_t){33686018});
    treetable_add(t, &(int32_t){2}, &(int32_t){211});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){11}, &(int32_t){199425});
    treetable_get_greater_than(t, &(int32_t){1330597711}, &kp);
    treetable_get_greater_than(t, &(int32_t){131586}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){35328002});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){13828096}, &(int32_t){335675904});
    treetable_add(t, &(int32_t){48758784}, &(int32_t){20});
    treetable_add(t, &(int32_t){-1718025727}, &(int32_t){-1717986919});
    treetable_get(t, &(int32_t){153}, &vp);
    treetable_get(t, &(int32_t){335544320}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){1330597632});
    treetable_get_greater_than(t, &(int32_t){33744384}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){-402653168}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_add(t, &(int32_t){218103808}, &(int32_t){16384});
    treetable_add(t, &(int32_t){-687865856}, &(int32_t){-673720391});
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_add(t, &(int32_t){-2147483648}, &(int32_t){16777215});
    treetable_add(t, &(int32_t){-402593792}, &(int32_t){33744896});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){-402653168}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){1311234});
    treetable_add(t, &(int32_t){-402653184}, &(int32_t){5122});
    treetable_add(t, &(int32_t){-1727921920}, &(int32_t){5120});
    treetable_get_greater_than(t, &(int32_t){16839187}, &kp);
    treetable_add(t, &(int32_t){-1869574000}, &(int32_t){335544464});
    treetable_add(t, &(int32_t){1507584}, &(int32_t){-1717921536});
    treetable_get(t, &(int32_t){-1717986924}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){1});
    treetable_get(t, &(int32_t){16843009}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){-16777216}, &(int32_t){240});
    treetable_add(t, &(int32_t){-65536}, &(int32_t){63743});
    treetable_add(t, &(int32_t){11}, &(int32_t){51052591});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){-352321533});
    treetable_get_greater_than(t, &(int32_t){-1717987072}, &kp);
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_add(t, &(int32_t){2031616}, &(int32_t){6143});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){14}, &(int32_t){16777216});
    treetable_add(t, &(int32_t){16842752}, &(int32_t){16843009});
    treetable_get(t, &(int32_t){0}, &vp);
    treetable_get_greater_than(t, &(int32_t){790638383}, &kp);
    treetable_get_greater_than(t, &(int32_t){456077132}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){-1718021120});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){-1869730048}, &(int32_t){-1869574000});
    treetable_add(t, &(int32_t){378572944}, &(int32_t){-1869574000});
    treetable_add(t, &(int32_t){1418760336}, &(int32_t){1750357076});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){1414812756});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){378557524});
    treetable_add(t, &(int32_t){1414812816}, &(int32_t){16318464});
    treetable_add(t, &(int32_t){34865896}, &(int32_t){16711680});
    treetable_add(t, &(int32_t){0}, &(int32_t){402653184});
    treetable_add(t, &(int32_t){-367852844}, &(int32_t){20});
    treetable_add(t, &(int32_t){1073742336}, &(int32_t){0});
    treetable_add(t, &(int32_t){385875968}, &(int32_t){1409286271});
    treetable_add(t, &(int32_t){1750357076}, &(int32_t){1414812756});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){1414812756});
    treetable_add(t, &(int32_t){1414812756}, &(int32_t){84});
    treetable_destroy(t);
    return 0;
}
