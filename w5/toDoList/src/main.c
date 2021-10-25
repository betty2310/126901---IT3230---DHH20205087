#include <stdio.h>
#include <time.h>
#include <string.h>

#include "toDo.h"
#include "queue.h"


int main()
{
    struct Queue *q = createQueue();
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ToDo k = {"Hello world", 12, tm};

    enQueue(q, k);
    printf("%d\n", q->front->key.tm.tm_min);
    return 0;
}