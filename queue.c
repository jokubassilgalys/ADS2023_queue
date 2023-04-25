#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node{
    int value;
    struct node *next;
};

struct queue{
    struct node *head;
    struct node *tail;
};

int checkIfEmpty(struct queue* q)
{
    if(q->head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct queue* createQueue()
{
    struct queue *q;

    q = (struct queue*) malloc(sizeof(struct queue));
    q->head = NULL;
    q->tail = NULL;

    return q;
}

void enQueue(struct queue* q, int value)
{
    struct node *newNode;
    newNode = (struct node*) malloc(sizeof(struct node));

    newNode->value = value;
    newNode->next = NULL;

    if(q->head == NULL){
        q->head = newNode;
    }
    else {
        q->tail->next = newNode;
    }
    
    q->tail = newNode;
    
}

int deQueue(struct queue* q)
{
    if(checkIfEmpty(q)){
        printf("Cannot dequeue an empty queue\n");
        return 0;
    }

    int data = q->head->value;

    struct node *temp;
    temp = q->head;
    q->head = temp->next;

    free(temp);

    return data;
}

int queueSize(struct queue* q)
{
    struct node *current = q->head;
    int i = 0; 
    while(current != NULL){
        ++i;
        current = current->next;
    }
    return i;
}

void printQueue(struct queue* q)
{
    struct node *current = q->head; 
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void clearQueue(struct queue* q)
{
    while(!checkIfEmpty(q)){
        deQueue(q);
    }
}
