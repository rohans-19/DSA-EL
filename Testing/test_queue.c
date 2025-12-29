#include "queue/queue.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("Testing Queue...\n");
    Queue* q = create_queue();
    assert(is_empty(q));
    
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    
    assert(!is_empty(q));
    assert(peek(q) == 10);
    
    assert(dequeue(q) == 10);
    assert(peek(q) == 20);
    assert(dequeue(q) == 20);
    assert(dequeue(q) == 30);
    assert(is_empty(q));
    
    free_queue(q);
    printf("Queue tests passed!\n");
    return 0;
}
