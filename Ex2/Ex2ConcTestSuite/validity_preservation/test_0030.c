/* Property: VALIDITY PRESERVATION – treetable_add: tree stays balanced+sorted, size grows by 0 or 1, get(k)==v. */
/* Source:   id:000093,src:000002+000090,time:3765,execs:359224,op:splice,rep:59 */

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
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){65536});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){184549904});
    treetable_get_greater_than(t, &(int32_t){0}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){255}, &kp);
    treetable_get_greater_than(t, &(int32_t){-1718026240}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){15994882}, &(int32_t){905969664});
    treetable_add(t, &(int32_t){385936127}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get_greater_than(t, &(int32_t){-218959118}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_greater_than(t, &(int32_t){16777219}, &kp);
    treetable_add(t, &(int32_t){131073}, &(int32_t){1311232});
    treetable_add(t, &(int32_t){15337985}, &(int32_t){0});
    treetable_add(t, &(int32_t){-16777216}, &(int32_t){0});
    treetable_add(t, &(int32_t){4096}, &(int32_t){-268381440});
    treetable_get(t, &(int32_t){5122}, &vp);
    treetable_get(t, &(int32_t){16777216}, &vp);
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){335544320});
    treetable_add(t, &(int32_t){1507328}, &(int32_t){0});
    treetable_add(t, &(int32_t){16777216}, &(int32_t){1616928770});
    treetable_add(t, &(int32_t){1616928864}, &(int32_t){-1717986976});
    treetable_get(t, &(int32_t){-1717986904}, &vp);
    treetable_add(t, &(int32_t){65536}, &(int32_t){1310720});
    treetable_add(t, &(int32_t){651}, &(int32_t){720896});
    treetable_add(t, &(int32_t){51052800}, &(int32_t){48962816});
    treetable_add(t, &(int32_t){335610111}, &(int32_t){16843007});
    treetable_add(t, &(int32_t){184614912}, &(int32_t){3});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_get(t, &(int32_t){16777216}, &vp);
    treetable_add(t, &(int32_t){0}, &(int32_t){-673720576});
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_get(t, &(int32_t){-1448498775}, &vp);
    treetable_get(t, &(int32_t){-1448498775}, &vp);
    treetable_get(t, &(int32_t){1311232}, &vp);
    treetable_get_greater_than(t, &(int32_t){-673720361}, &kp);
    treetable_get_greater_than(t, &(int32_t){-201379881}, &kp);
    treetable_add(t, &(int32_t){20}, &(int32_t){15204584});
    treetable_add(t, &(int32_t){335675906}, &(int32_t){385875968});
    treetable_add(t, &(int32_t){0}, &(int32_t){5122});
    treetable_add(t, &(int32_t){1000}, &(int32_t){33554441});
    treetable_get_first_key(t, &kp);
    treetable_get_greater_than(t, &(int32_t){133633}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){321060864});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){51052802});
    treetable_add(t, &(int32_t){-993737532}, &(int32_t){-993737532});
    treetable_get(t, &(int32_t){-505290271}, &vp);
    treetable_get(t, &(int32_t){-505290271}, &vp);
    treetable_get(t, &(int32_t){-505290271}, &vp);
    treetable_get_greater_than(t, &(int32_t){65780}, &kp);
    treetable_add(t, &(int32_t){-352321536}, &(int32_t){65406});
    treetable_add(t, &(int32_t){16777236}, &(int32_t){-1728053225});
    treetable_get(t, &(int32_t){-1717986919}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){16843008}, &(int32_t){16843009});
    treetable_get(t, &(int32_t){48628225}, &vp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get_greater_than(t, &(int32_t){3}, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){-117440513});
    treetable_add(t, &(int32_t){720896}, &(int32_t){184614912});
    treetable_get_greater_than(t, &(int32_t){334168064}, &kp);
    treetable_get_first_key(t, &kp);
    treetable_get(t, &(int32_t){1229539657}, &vp);
    treetable_add(t, &(int32_t){51052800}, &(int32_t){334168064});
    treetable_add(t, &(int32_t){-488447335}, &(int32_t){-1717986846});
    treetable_get(t, &(int32_t){-11953767}, &vp);
    treetable_add(t, &(int32_t){65536238}, &(int32_t){199936});
    treetable_get(t, &(int32_t){-1227763247}, &vp);
    treetable_get(t, &(int32_t){-774778415}, &vp);
    treetable_get(t, &(int32_t){-65536}, &vp);
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791621440}, &kp);
    treetable_get(t, &(int32_t){-774712879}, &vp);
    treetable_add(t, &(int32_t){1792}, &(int32_t){0});
    treetable_add(t, &(int32_t){-673714944}, &(int32_t){2135180356});
    treetable_add(t, &(int32_t){1145324544}, &(int32_t){1145324612});
    treetable_add(t, &(int32_t){1094992964}, &(int32_t){1145324612});
    treetable_get(t, &(int32_t){-255}, &vp);
    treetable_add(t, &(int32_t){-16777216}, &(int32_t){539963391});
    treetable_get_greater_than(t, &(int32_t){791621423}, &kp);
    treetable_get_greater_than(t, &(int32_t){791625775}, &kp);
    treetable_add(t, &(int32_t){-1869574000}, &(int32_t){-1863741296});
    treetable_add(t, &(int32_t){-1802465136}, &(int32_t){-1448500831});
    treetable_add(t, &(int32_t){36864}, &(int32_t){335734784});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){0}, &(int32_t){335729664});
    treetable_get_first_key(t, &kp);
    treetable_add(t, &(int32_t){2}, &(int32_t){2130706432});
    treetable_get(t, &(int32_t){-370546199}, &vp);
    treetable_get(t, &(int32_t){-370546199}, &vp);
    treetable_get(t, &(int32_t){-370546199}, &vp);
    treetable_destroy(t);
    return 0;
}
