/*
* Property: after adding a key-value pair, the size of the tree increases by 1 if the key is new, otherwise it remains the same
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val = 'v';

    assert (treetable_size(t)==0);

    treetable_add(t, &key1, &val);

    assert (treetable_size(t)==1);

    treetable_add(t, &key2, &val);
    if (key1 == key2) {
        assert(treetable_size(t)==1);

    } else {
        assert(treetable_size(t)==2);
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