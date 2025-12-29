#include "queue.h"
#include <stdio.h>

int dequeue(Queue* q) {
    if (is_empty(q)) {
        fprintf(stderr, "Queue underflow\n");
        return -1;
    }
    
    Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    
    if (q->front == NULL) {
        q->rear = NULL;
    }
    
    free(temp);
    return data;
}
