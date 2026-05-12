/*
* Property: initially, when the tree is empty, there is no key greater than any given key. After adding a key-value pair, there is no 
* key greater than the added key. Then, after adding a second key-value pair, if the first key is smaller than the second key, the 
* second key is the only key greater than the first key, and there is no key greater than the second key. If the first key is greater 
* than the second key, the first key is the only key greater than the second key, and there is no key greater than the first key. If 
* the two keys are equal, the tree contains only the first key, and there is no key greater than the first key.
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete_get_greater_than(int key1, int key2) {
    TreeTable *t;
    treetable_new(&t);

    char val = 'v';
    void *out = NULL;

    assert (treetable_get_greater_than(t, &key1, &out) == CC_ERR_KEY_NOT_FOUND);
    assert (out == NULL);

    treetable_add(t, &key1, &val);
    assert (treetable_get_greater_than(t, &key1, &out) == CC_OK);
    assert (out == NULL);

    treetable_add(t, &key2, &val);

    if (key1 < key2){
        assert (treetable_get_greater_than(t, &key2, &out) == CC_OK);
        assert(out == NULL);
        assert (treetable_get_greater_than(t, &key1, &out) == CC_OK);
        assert (out == &key2);
    } else if (key1 == key2){
        assert (treetable_get_greater_than(t, &key1, &out) == CC_OK);
        assert (out == NULL);
    } else { 
        assert (treetable_get_greater_than(t, &key1, &out) == CC_OK);
        assert(out == NULL);
        assert (treetable_get_greater_than(t, &key2, &out) == CC_OK);
        assert (out == &key1);
    }
        

    treetable_destroy(t);
}

int main() {
    test_concrete_get_greater_than(0, 0); // from test000001.ktest
    test_concrete_get_greater_than(1, 0); // from test000002.ktest
    test_concrete_get_greater_than(-1979711488, 0); // from test000003.ktest
    printf ("All concrete tests passed.\n");

    return 0;
}