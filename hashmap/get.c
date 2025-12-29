#include "hashmap.h"

int hashmap_get(HashMap* hm, const char* key, bool* found) {
    unsigned int idx = hash(key);
    Entry* curr = hm->buckets[idx];
    
    while (curr) {
        if (strcmp(curr->key, key) == 0) {
            if (found) *found = true;
            return curr->value;
        }
        curr = curr->next;
    }
    
    if (found) *found = false;
    return -1;
}
