/*
* Property: after and before adding a key-value pair, the tree remains sorted and balanced
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val= 'v';

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");

    assert (sorted(t) && balanced(t));

    treetable_add(t, &key1, &val);
    assert (sorted(t) && balanced(t));

    treetable_add(t, &key2, &val);
    assert(sorted(t) && balanced(t));

    treetable_destroy(t);
    return 0;
}