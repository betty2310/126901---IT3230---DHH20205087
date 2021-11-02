#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "queue.h"

struct QNode *newNode(ToDo k)
{
    struct QNode *temp = (struct QNode *)malloc(sizeof(struct QNode));
    temp->key.time = k.time;
    temp->key.tm = k.tm;
    strcpy(temp->key.script, k.script);
    temp->next = NULL;
    return temp;
}

struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

int isQueueFull(struct Queue *q) {
    struct QNode *temp = q->front;
    if(temp == NULL)
        return 0;
    int count = 1;
    while(temp->next != NULL) 
    {
        ++count;
        temp = temp->next;
    }
    return count == MAX_SIZE_QUEUE;
}

void enQueue(struct Queue *q, ToDo k)
{
    struct QNode *temp = newNode(k);
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

void deQueue(struct Queue *q)
{
    if (q->front == NULL)
        return;
    struct QNode *temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}