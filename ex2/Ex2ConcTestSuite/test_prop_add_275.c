/* id_000275_src_000003+000263_time_8897_execs_263636_op_splice_rep_9.c
 * Property: validity preservation — after treetable_add(k,v), the table must be
 * balanced+sorted, contain k mapped to v, and size must grow by 1 (new key)
 * or stay the same (duplicate).
 */

#include <stdint.h>
#include <string.h>
#include "treetable.h"

void test(void) {
    TreeTable *t;
    treetable_new(&t);
    /* Mirror the harness's pre-population */
    int a=5, b=10, c=15, d=20, e=25;
    int v1=35, v2=40, v3=45, v4=50, v5=55;
    treetable_add(t, &b, &v2);
    treetable_add(t, &c, &v3);
    treetable_add(t, &a, &v1);
    treetable_add(t, &e, &v5);
    treetable_add(t, &d, &v4);
    { void *kp; treetable_get_greater_than(t, &(int32_t){15}, &kp); }
    treetable_add(t, &(int32_t){3843}, &(int32_t){983808});
    treetable_add(t, &(int32_t){983808}, &(int32_t){-454819837});
    treetable_add(t, &(int32_t){2}, &(int32_t){16777216});
    { void *vp; treetable_get(t, &(int32_t){-1127874560}, &vp); }
    treetable_add(t, &(int32_t){1852731112}, &(int32_t){15});
    { void *kp; treetable_get_greater_than(t, &(int32_t){50331663}, &kp); }
    treetable_add(t, &(int32_t){251895968}, &(int32_t){-134217728});
    treetable_add(t, &(int32_t){1107296256}, &(int32_t){1852730883});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){832610464}, &(int32_t){1792});
    treetable_add(t, &(int32_t){0}, &(int32_t){352393728});
    treetable_add(t, &(int32_t){58879}, &(int32_t){-16776987});
    treetable_add(t, &(int32_t){301993783}, &(int32_t){-553713564});
    treetable_add(t, &(int32_t){689897472}, &(int32_t){-1600085995});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){1107296293});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147483393}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088533629}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2088531069}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-394034325}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-2088510977}, &vp); }
    treetable_add(t, &(int32_t){393344}, &(int32_t){33547520});
    { void *kp; treetable_get_greater_than(t, &(int32_t){117440512}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1347440769}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-1515870811}, &vp); }
    treetable_add(t, &(int32_t){-1515936347}, &(int32_t){-2035964507});
    { void *kp; treetable_get_greater_than(t, &(int32_t){340807935}, &kp); }
    treetable_add(t, &(int32_t){622269540}, &(int32_t){-437780480});
    treetable_add(t, &(int32_t){14816249}, &(int32_t){-960051646});
    treetable_add(t, &(int32_t){637080420}, &(int32_t){-968753023});
    treetable_add(t, &(int32_t){-267059200}, &(int32_t){-12500481});
    { void *vp; treetable_get(t, &(int32_t){-1179010561}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){721420544}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){0});
    treetable_add(t, &(int32_t){0}, &(int32_t){1792});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1347485695}, &kp); }
    treetable_add(t, &(int32_t){-1140845548}, &(int32_t){72980});
    { void *vp; treetable_get(t, &(int32_t){17236479}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){910838346}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1}, &kp); }
    treetable_add(t, &(int32_t){303305748}, &(int32_t){-553713564});
    treetable_add(t, &(int32_t){689897472}, &(int32_t){-1600085995});
    treetable_add(t, &(int32_t){-1600085856}, &(int32_t){1107296293});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147483393}, &kp); }
    treetable_add(t, &(int32_t){-16745348}, &(int32_t){57342});
    treetable_add(t, &(int32_t){-943212263}, &(int32_t){-2147483648});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-943208505}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-637544007}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1413232697}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-959789237}, &kp); }
    treetable_add(t, &(int32_t){-1596328126}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-960085504}, &(int32_t){2065039263});
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){2071690107}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-2147423745}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){271154043}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){872462777}, &vp); }
    treetable_add(t, &(int32_t){-1707016704}, &(int32_t){-2088566528});
    { void *vp; treetable_get(t, &(int32_t){-2088533629}, &vp); }
    treetable_add(t, &(int32_t){336875772}, &(int32_t){337253396});
    { void *vp; treetable_get(t, &(int32_t){-960036880}, &vp); }
    { void *vp; treetable_get(t, &(int32_t){-1174414849}, &vp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1633771874}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){-958412857}, &kp); }
    treetable_add(t, &(int32_t){886701890}, &(int32_t){8382702});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1610612735}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){458752}, &(int32_t){-1600085856});
    treetable_add(t, &(int32_t){-968753152}, &(int32_t){-1091592250});
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){538648608}, &(int32_t){-943251424});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-1413232697}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1263225675}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1270106955}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1677772619}, &kp); }
    treetable_add(t, &(int32_t){4211200}, &(int32_t){-267059200});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-637583039}, &kp); }
    { void *vp; treetable_get(t, &(int32_t){-891682855}, &vp); }
    treetable_add(t, &(int32_t){10526880}, &(int32_t){1073774592});
    treetable_add(t, &(int32_t){-454819329}, &(int32_t){-458955548});
    treetable_add(t, &(int32_t){-454761244}, &(int32_t){54715620});
    { void *kp; treetable_get_greater_than(t, &(int32_t){-134217728}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){-1178856191}, &(int32_t){-960051527});
    treetable_add(t, &(int32_t){536866837}, &(int32_t){-1174414849});
    { void *vp; treetable_get(t, &(int32_t){-1633764935}, &vp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){455090208}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){1116503164}, &(int32_t){338455});
    treetable_add(t, &(int32_t){1337768960}, &(int32_t){1330597711});
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1330597711}, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){57167}, &kp); }
    { void *kp; treetable_get_first_key(t, &kp); }
    treetable_add(t, &(int32_t){14614659}, &(int32_t){100696064});
    treetable_add(t, &(int32_t){33547520}, &(int32_t){5635});
    treetable_add(t, &(int32_t){-1970632054}, &(int32_t){-1970632054});
    { void *kp; treetable_get_first_key(t, &kp); }
    { void *kp; treetable_get_greater_than(t, &(int32_t){1792}, &kp); }
    treetable_add(t, &(int32_t){336860180}, &(int32_t){1376538});
    treetable_add(t, &(int32_t){129612098}, &(int32_t){-1350631424});
    treetable_destroy(t);
}

int main(void) { test(); return 0; }