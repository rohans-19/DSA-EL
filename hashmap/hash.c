#include "hashmap.h"

unsigned int hash(const char* key) {
    unsigned int hash_val = 0;
    while (*key) {
        hash_val = (hash_val << 5) + *key++;
    }
    return hash_val % TABLE_SIZE;
}
