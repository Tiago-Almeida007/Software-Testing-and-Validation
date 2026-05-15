/*
* Property: after adding a key-value pair, the tree contains the new value and the other added before
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val1 = 'a', val2 = 'b';

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");

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
    return 0;
}