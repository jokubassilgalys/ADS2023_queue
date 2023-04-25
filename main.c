#include <stdio.h>
#include "queue.h"

int main()
{
    struct queue *q = createQueue();

    for(int i = 0; i < 10; ++i){
        enQueue(q, i);
    }

    printQueue(q);
    printf("size:%d\n", queueSize(q));

    printf("dequeued:%d\n", deQueue(q));
    printf("dequeued:%d\n", deQueue(q));

    printQueue(q);
    printf("size:%d\n", queueSize(q));

    enQueue(q, 10);
    printf("queued 10\n");
    printf("dequeued:%d\n", deQueue(q));

    printQueue(q);  
    printf("size:%d\n", queueSize(q));

    clearQueue(q);

    printQueue(q);
    
    printf("isempty:%d\n", checkIfEmpty(q));
    printf("size:%d\n", queueSize(q));

    return 0;
}
