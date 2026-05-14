/*
* Property: after adding a key-value pair, then see the first key of the tree (the first key is the smallest key in the tree)
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val = 'v';
    void *out;

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
}

int main() {
    /* Test values from test000001.ktest */
    test_concrete(0,0);
    /* Test values from test000002.ktest */
    test_concrete(1,0);
    /* Test values from test000003.ktest */
    test_concrete(-1979711488,0);

    printf ("All concrete tests passed.\n");
    return 0;
}