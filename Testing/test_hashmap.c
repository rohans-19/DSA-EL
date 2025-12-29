#include "hashmap/hashmap.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("Testing Hash Map...\n");
    HashMap* hm = hashmap_create();
    
    hashmap_put(hm, "apple", 100);
    hashmap_put(hm, "banana", 200);
    hashmap_put(hm, "cherry", 300);
    
    bool found;
    assert(hashmap_get(hm, "apple", &found) == 100 && found);
    assert(hashmap_get(hm, "banana", &found) == 200 && found);
    assert(hashmap_get(hm, "cherry", &found) == 300 && found);
    
    hashmap_put(hm, "apple", 150);
    assert(hashmap_get(hm, "apple", &found) == 150 && found);
    
    hashmap_remove(hm, "banana");
    hashmap_get(hm, "banana", &found);
    assert(!found);
    
    hashmap_free(hm);
    printf("Hash Map tests passed!\n");
    return 0;
}
