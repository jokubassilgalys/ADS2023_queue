#ifndef QUEUE_HEADER
#define QUEUE_HEADER
    struct node;
    struct queue;

    int checkIfEmpty(struct queue* q);
    struct queue* createQueue();
    void enQueue(struct queue* q, int value);
    int deQueue(struct queue* q);
    int queueSize(struct queue* q);
    void printQueue(struct queue* q);
    void clearQueue(struct queue* q);
#endif