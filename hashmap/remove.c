#include "hashmap.h"

void hashmap_remove(HashMap* hm, const char* key) {
    unsigned int idx = hash(key);
    Entry* curr = hm->buckets[idx];
    Entry* prev = NULL;
    
    while (curr) {
        if (strcmp(curr->key, key) == 0) {
            if (prev) {
                prev->next = curr->next;
            } else {
                hm->buckets[idx] = curr->next;
            }
            free(curr->key);
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}
