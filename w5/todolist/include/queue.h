#include<time.h>

typedef struct ToDo
{
    char script[1000];
    int time;
    struct tm tm;
} ToDo;

struct QNode
{
    ToDo key;
    struct QNode *next;
};
struct Queue
{
    struct QNode *front, *rear;
};

#define MAX_SIZE_QUEUE 10

struct QNode *newNode(ToDo k);

struct Queue *createQueue();

int isQueueFull(struct Queue *q);

void enQueue(struct Queue *q, ToDo k);

void deQueue(struct Queue *q);

extern struct Queue *q;