/*
* Property: adding a key-value pair, the successor of the inserted key (if it exists) is the smallest key in the tree that is greater than the inserted key, and the predecessor of the inserted key (if it exists) must be correctly returned
*/

#include <klee/klee.h>
#include <assert.h>
#include "../treetable.h"

int main() {
    TreeTable *t;
    treetable_new(&t);

    int key1, key2;
    char val = 'v';
    void *out = NULL;

    klee_make_symbolic(&key1, sizeof(key1), "key1");
    klee_make_symbolic(&key2, sizeof(key2), "key2");

    assert (treetable_get_greater_than(t, &key1, &out) == CC_ERR_KEY_NOT_FOUND);
    assert (out == NULL);
    assert (treetable_get_greater_than(t, &key2, &out) == CC_ERR_KEY_NOT_FOUND);
    assert (out == NULL);

    treetable_add(t, &key1, &val);

    assert (treetable_get_greater_than(t, &key1, &out) == CC_OK);
    assert (out == NULL);
    assert (treetable_get_greater_than(t, &key2, &out) == CC_ERR_KEY_NOT_FOUND);
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
    return 0;
}