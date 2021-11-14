#include <stdio.h>

#include "queue.h"

int main()
{
    struct Queue *q = createQueue();
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int len = 11;
    for (int i = 0; i <= 11; ++i)
    {
        if (!isQueueFull(q))
        {
            enQueue(q, a[i]);
        }
        else {
            deQueue(q);
            printf("dequeue: %d, enqueue: %d\n", a[i + 1 - len], a[i]);
            enQueue(q, a[i]);
        }
    }
    printf("Queue Front : %d \n", q->front->key);
    printf("Queue Rear : %d", q->rear->key);
    return 0;
}
