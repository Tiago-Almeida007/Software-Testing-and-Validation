/*
* Property: after adding a key-value pair, the tree remains sorted and balanced, and the new key is present in the tree with the 
* correct value, and the size increases by one (or remains the same if the key already exists).
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val1, val2;
    void *out1, *out2;

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");
    klee_make_symbolic(&val1, sizeof(val1), "val1");
    klee_make_symbolic(&val2, sizeof(val2), "val2");

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
    return 0;
}