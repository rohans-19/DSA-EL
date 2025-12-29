#include "queue.h"

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (q) {
        q->front = q->rear = NULL;
    }
    return q;
}
