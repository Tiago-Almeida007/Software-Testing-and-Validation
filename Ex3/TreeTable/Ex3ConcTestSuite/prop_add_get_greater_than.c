/*
* Property: adding a key-value pair, the successor of the inserted key (if it exists) is the smallest key in the tree that is greater than the inserted key, and the predecessor of the inserted key (if it exists) must be correctly returned
*/

#include <assert.h>
#include <stdio.h>
#include "../treetable.h"

void test_concrete(int key1, int key2) {
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
    /* Test values from test000001.ktest */
    test_concrete(0,0);
    /* Test values from test000002.ktest */
    test_concrete(1,0);
    /* Test values from test000003.ktest */
    test_concrete(-1979711488,0);

    printf ("All concrete tests passed.\n");
    return 0;
}