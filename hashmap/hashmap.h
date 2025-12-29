#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TABLE_SIZE 10

typedef struct Entry {
    char* key;
    int value;
    struct Entry* next;
} Entry;

typedef struct {
    Entry* buckets[TABLE_SIZE];
} HashMap;

// Function prototypes
HashMap* hashmap_create();
unsigned int hash(const char* key);
void hashmap_put(HashMap* hm, const char* key, int value);
int hashmap_get(HashMap* hm, const char* key, bool* found);
void hashmap_remove(HashMap* hm, const char* key);
void hashmap_free(HashMap* hm);

#endif
