/*
* Property: initially, when the tree is empty, there is no key greater than any given key. After adding a key-value pair, there is no 
* key greater than the added key. Then, after adding a second key-value pair, if the first key is smaller than the second key, the 
* second key is the only key greater than the first key, and there is no key greater than the second key. If the first key is greater 
* than the second key, the first key is the only key greater than the second key, and there is no key greater than the first key. If 
* the two keys are equal, the tree contains only the first key, and there is no key greater than the first key.
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

    //The treetable implementation crashes if we try to get the first key of an empty table, it's why we comment the following lines. 
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
    return 0;
}