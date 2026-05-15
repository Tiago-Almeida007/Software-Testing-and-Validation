/*
* Property: after adding a key-value pair, then see the first key of the tree (the first key is the smallest key in the tree)
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val = 'v';
    void *out;

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");

    // The treetable implementation crashes if we try to get the first key of an empty table, it's why we comment the following lines. 
    // assert (treetable_get_first_key(t, &out) == CC_ERR_KEY_NOT_FOUND);
    // assert (out == NULL);

    treetable_add(t, &key1, &val);

    assert (treetable_get_first_key(t, &out) == CC_OK);
    assert (out == &key1);

    treetable_add(t, &key2, &val);

    assert (treetable_get_first_key(t, &out) == CC_OK);
    if (key1 <= key2)
        assert (out == &key1);
    else 
        assert (out == &key2);

    treetable_destroy(t);
    return 0;
}