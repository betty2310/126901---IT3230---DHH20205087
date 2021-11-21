typedef struct NodeS
{
    char data;
    struct NodeS *link;
} NodeS;

extern NodeS *p, *q;

NodeS *createStack(NodeS *p);
NodeS *push(NodeS *s, char data);
int isEmpty(NodeS *s);
char peek(NodeS *s);
NodeS *pop(NodeS *s);
void display(NodeS *s);