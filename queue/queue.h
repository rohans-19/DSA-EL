#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Function prototypes
Queue* create_queue();
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
int peek(Queue* q);
bool is_empty(Queue* q);
void free_queue(Queue* q);

#endif
