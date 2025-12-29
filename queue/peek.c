#include "queue.h"
#include <stdio.h>

int peek(Queue* q) {
    if (is_empty(q)) {
        fprintf(stderr, "Queue is empty\n");
        return -1;
    }
    return q->front->data;
}
