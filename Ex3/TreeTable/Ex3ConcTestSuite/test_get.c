/*
* Property: before adding a key-value pair, the key is not present in the tree, and after adding it, the key is present with the 
* correct value.
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete_get(int key1) {
    TreeTable *t;
    treetable_new(&t);

    char val1 = 'v';
    void *out=NULL;

    assert (treetable_get(t, &key1, &out) == CC_ERR_KEY_NOT_FOUND);
    assert (out == NULL);

    treetable_add(t, &key1, &val1);

    assert (treetable_get(t, &key1, &out) == CC_OK);
    assert (out == &val1);

    treetable_destroy(t);
}

int main() {
    test_concrete_get(0); // from test000001.ktest
    printf ("All concrete tests passed.\n");

    return 0;
}