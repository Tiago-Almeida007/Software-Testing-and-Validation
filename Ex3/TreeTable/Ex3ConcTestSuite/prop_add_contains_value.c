/*
* Property: after adding a key-value pair, the tree contains the new value and the other added before
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val1 = 'a', val2 = 'b';

    treetable_add(t, &key1, &val1);

    assert (treetable_contains_value(t, &val1) == 1);

    treetable_add(t, &key2, &val2);

    if (key1 == key2) {
        assert(treetable_contains_value(t, &val1) == 0);
        assert(treetable_contains_value(t, &val2) == 1);
    } else {
        assert(treetable_contains_value(t, &val1) == 1);
        assert(treetable_contains_value(t, &val2) == 1);
    }

    treetable_destroy(t);
}

int main() {
    /* Test values from test000001.ktest */
    test_concrete(0,0);
    /* Test values from test000002.ktest */
    test_concrete(1,0);
    /* Test values from test000003.ktest */
    test_concrete(-1979711488,0);

    printf ("All concrete tests passed.\n");
    return 0;
}