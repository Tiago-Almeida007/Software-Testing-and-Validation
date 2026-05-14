#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include "treetable.h"

__AFL_FUZZ_INIT();

int main(void) {
    __AFL_INIT();
    unsigned char *buf = __AFL_FUZZ_TESTCASE_BUF;

    while (__AFL_LOOP(10000)) {
        int len = __AFL_FUZZ_TESTCASE_LEN;

        TreeTable *t;
        treetable_new(&t);
        assert(balanced(t) && sorted(t));
        int a=5, b=10, c=15, d=20, e=25;
        int v1=35, v2=40, v3=45, v4=50, v5=55;
        //Add b->c->a->e->d 
        treetable_add(t, &b, &v2);
        assert(balanced(t) && sorted(t));
        treetable_add(t, &c, &v3);
        assert(balanced(t) && sorted(t));
        treetable_add(t, &a, &v1);
        assert(balanced(t) && sorted(t));
        treetable_add(t, &e, &v5);
        assert(balanced(t) && sorted(t));
        treetable_add(t, &d, &v4);
        assert(balanced(t) && sorted(t));

        //4 ops, [1B (op)| 4B (k)| 4B (v??)]
        for (int i = 0; i + 9 <= len; i += 9) {
            uint8_t op = buf[i] % 4;
            int32_t k;
            int32_t v;
            memcpy(&k, &buf[i + 1], sizeof(k));
            memcpy(&v, &buf[i + 5], sizeof(v));

            switch (op) {

            case 0: {

                /* PROPERTY: after treetable_add(k,v), table should be balanced + sorted and contain key value(k,v) ~
                    : size grows by 0 if key already contained, 1 otherwise 
                    : v is the value of k
                */
                int count_Size  = treetable_size(t);
                int contained_K = treetable_contains_key(t, &k);

                treetable_add(t, &k, &v);
                assert(balanced(t) && sorted(t));
                assert(treetable_contains_key(t, &k));
                assert(treetable_size(t) == count_Size + (contained_K ? 0 : 1));

                void *new_v_ptr;
                treetable_get(t, &k, &new_v_ptr);
                assert(*(int32_t*)new_v_ptr == v);
                break;
            }

            case 1: {
                /* PROPERTY: after get() , gives a V that must be contained at least once in the table*/
                //Add (assert) -get; testamos contains(v), == v
                treetable_add(t, &k, &v);
                assert(balanced(t) && sorted(t));

                void *v_out_ptr;
                treetable_get(t, &k, &v_out_ptr);
                assert(*(int32_t*)v_out_ptr == v);
                assert(treetable_contains_value(t, v_out_ptr) > 0);
                break;
            }

            case 2: {
                /* PROPERTY: get_first_key */
                //Returns a key that exists && is the smallest key? 
/*                 int a=5, b=10, c=15;
                int v1=25, v2=30, v3=35;
                //Add b->c->a //Get first should be a or k
                treetable_add(t, &b, &v2);
                assert(balanced(t) && sorted(t));
                treetable_add(t, &c, &v3);
                assert(balanced(t) && sorted(t));
                treetable_add(t, &a, &v1);
                assert(balanced(t) && sorted(t)); */

                //ADD K,V
                treetable_add(t, &k, &v);
                assert(balanced(t) && sorted(t));

                int min_key = a;
                int min_value = v1;
                //Check min
                if(k <= a){ //
                    min_key = k;
                    min_value = v;
                } 
                
                void *k_out_ptr;
                treetable_get_first_key(t, &k_out_ptr);
                assert(treetable_contains_key(t, k_out_ptr)); //Key exists in table
                assert(*(int32_t*)k_out_ptr == min_key); //Key matches min

                void *v_out_ptr; 
                treetable_get(t, &k_out_ptr, &v_out_ptr);
                assert(*(int32_t*)v_out_ptr == min_value); //Value matches min_keys val;
                break;
            }

            case 3: {
                /* PROPERTY: get_greater_than(t,k)*/
                //Returns a k that exists && is the key after k
                
                //ADD K,V
                treetable_add(t, &k, &v);
                assert(balanced(t) && sorted(t));

                //check sucessor of K
                int expected_suc = -1;
                for (int i = 5; i <= 25; i += 5) {
                    if (i > k) {
                        expected_suc = i;
                        break;
                    }
                }
                 

                void *k_out_ptr;
                if(expected_suc != -1){
                    treetable_get_greater_than(t, &k, &k_out_ptr);
                    assert(treetable_contains_key(t, k_out_ptr)); //Exists
                }
                assert(expected_suc != -1 ? expected_suc == *(int32_t*)k_out_ptr : k >= 25); //Sucessor is correct if exists, if doesnt, k needs to be bigger than last max key
                break;
            }

            }
        }

        treetable_destroy(t);
    }
    return 0;
}