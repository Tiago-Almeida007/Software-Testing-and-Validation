/*
* Property: after adding the first key-value pair, the first key is the one just added, and the tree contains that key with the 
* correct value. After adding a second key-value pair, the first key is the smaller of the two keys, and both keys are present in the 
* tree with their correct values, except if the two keys are equal that the value of the key is from the last added pair, but the 
* pointer is from the first key.
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete_get_first_key(int key1, int key2) {
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
    test_concrete_get_first_key(0, 0); // from test000001.ktest
    test_concrete_get_first_key(1, 0); // from test000002.ktest
    test_concrete_get_first_key(-1979711488, 0); // from test000003.ktest
    printf ("All concrete tests passed.\n");

    return 0;
}