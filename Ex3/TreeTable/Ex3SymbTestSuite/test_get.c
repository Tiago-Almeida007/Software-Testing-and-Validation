/*
* Property: before adding a key-value pair, the key is not present in the tree, and after adding it, the key is present with the 
* correct value.
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1;
    char val1 = 'v';
    void *out=NULL;

    klee_make_symbolic(&key1, sizeof(key1), "key1");

    assert (treetable_get(t, &key1, &out) == CC_ERR_KEY_NOT_FOUND);
    assert (out == NULL);

    treetable_add(t, &key1, &val1);

    assert (treetable_get(t, &key1, &out) == CC_OK);
    assert (out == &val1);

    treetable_destroy(t);
    return 0;
}