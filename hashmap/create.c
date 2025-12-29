#include "hashmap.h"

HashMap* hashmap_create() {
    HashMap* hm = (HashMap*)malloc(sizeof(HashMap));
    if (hm) {
        for (int i = 0; i < TABLE_SIZE; i++) {
            hm->buckets[i] = NULL;
        }
    }
    return hm;
}
