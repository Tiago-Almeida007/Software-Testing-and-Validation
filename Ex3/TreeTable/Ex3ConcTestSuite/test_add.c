/*
* Property: after adding a key-value pair, the tree remains sorted and balanced, and the new key is present in the tree with the 
* correct value, and the size increases by one (or remains the same if the key already exists).
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete_add(int key1, int key2, char val1, char val2) {
    TreeTable *t;
    treetable_new(&t);

    void *out1, *out2;

    treetable_add(t, &key1, &val1);
    assert(treetable_get(t, &key1, &out1) == CC_OK);

    assert (sorted(t) && balanced(t));
    assert (treetable_contains_key(t, &key1));
    assert (treetable_contains_value(t, &val1) == 1);
    assert (treetable_size(t)==1);

    treetable_add(t, &key2, &val2);
    assert(treetable_get(t, &key2, &out2) == CC_OK);

    assert(sorted(t) && balanced(t));
    assert (treetable_contains_key(t, &key1));
    assert (treetable_contains_key(t, &key2));

    if (key1 == key2) {
        assert(treetable_size(t)==1);
        assert(treetable_contains_value(t, &val2) == 1);

    } else {
        assert(treetable_size(t)==2);
        if (out1 == out2) {
            assert(treetable_contains_value(t, &val1) == 2);
        } else {
            assert(treetable_contains_value(t, &val1) == 1);
            assert(treetable_contains_value(t, &val2) == 1);
        }
    }

    treetable_destroy(t);
}

int main() {
    test_concrete_add(0, 0, 0, 0); // from test000001.ktest
    test_concrete_add(1, 0, 0, 0); // from test000002.ktest
    test_concrete_add(-1979711488, 0, 0, 0); // from test000003.ktest

    printf ("All concrete tests passed.\n");
    return 0;
}