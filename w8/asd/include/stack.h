typedef struct stackC
{
    char data;
    struct stackC *link;
} stackC;

extern stackC *p;

stackC *createStack(stackC *p);
stackC *push(stackC *s, char data);
int isEmpty(stackC *s);
char peek(stackC *s);
stackC *pop(stackC *s);
void display(stackC *s);