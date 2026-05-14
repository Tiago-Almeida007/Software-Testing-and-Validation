/*
* Property: after and before adding a key-value pair, the tree remains sorted and balanced
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val= 'v';

    assert (sorted(t) && balanced(t));

    treetable_add(t, &key1, &val);
    assert (sorted(t) && balanced(t));

    treetable_add(t, &key2, &val);
    assert(sorted(t) && balanced(t));

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