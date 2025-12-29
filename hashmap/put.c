#include "hashmap.h"

void hashmap_put(HashMap* hm, const char* key, int value) {
    unsigned int idx = hash(key);
    Entry* curr = hm->buckets[idx];
    
    while (curr) {
        if (strcmp(curr->key, key) == 0) {
            curr->value = value;
            return;
        }
        curr = curr->next;
    }
    
    Entry* new_entry = (Entry*)malloc(sizeof(Entry));
    new_entry->key = strdup(key);
    new_entry->value = value;
    new_entry->next = hm->buckets[idx];
    hm->buckets[idx] = new_entry;
}
