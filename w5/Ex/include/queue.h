struct QNode
{
    int key;
    struct QNode *next;
};
struct Queue
{   
    struct QNode *front, *rear;
};

#define MAX_SIZE_QUEUE 10

struct QNode *newNode(int k);

struct Queue *createQueue();

int isQueueFull(struct Queue *q);

void enQueue(struct Queue *q, int k);

void deQueue(struct Queue *q);
