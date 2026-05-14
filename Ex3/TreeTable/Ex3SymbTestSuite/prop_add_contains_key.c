/*
* Property: after adding a key-value pair, the tree contains the new key and the other added before
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val = 'v';

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");

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
    return 0;
}