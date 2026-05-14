/*
* Property: after adding a key-value pair, the size of the tree increases by 1 if the key is new, otherwise it remains the same
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
    return 0;
}