#include "hashmap.h"

void hashmap_free(HashMap* hm) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Entry* curr = hm->buckets[i];
        while (curr) {
            Entry* temp = curr;
            curr = curr->next;
            free(temp->key);
            free(temp);
        }
    }
    free(hm);
}
