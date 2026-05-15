/*
* Property: after adding a key-value pair, the tree contains the new key and the other added before
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val= 'v';

    assert (!treetable_contains_key(t, &key1));
    assert (!treetable_contains_key(t, &key2));

    treetable_add(t, &key1, &val);

    assert (treetable_contains_key(t, &key1));
    if (key1 == key2) {
        assert (treetable_contains_key(t, &key2));
    } else {
        assert (!treetable_contains_key(t, &key2));
    }

    treetable_add(t, &key2, &val);

    assert (treetable_contains_key(t, &key1));
    assert (treetable_contains_key(t, &key2));

    treetable_destroy(t);
}

int main() {
    /* Test values from test000001.ktest */
    test_concrete(0,0);
    /* Test values from test000002.ktest */
    test_concrete(16777216,0);
    /* Test values from test000003.ktest */
    test_concrete(0,16777217);

    printf ("All concrete tests passed.\n");
    return 0;
}