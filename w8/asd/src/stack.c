#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

stackC *createStack(stackC *p) {
    p = (stackC *)malloc(sizeof(stackC));
    p->link = NULL;
    return p;
}

stackC* push(stackC *s, char data)
{
    struct stackC* temp;
    temp = (stackC*)malloc(sizeof(stackC));
    if (!temp)
    {
        printf("\nStack overflow!\n");
        return NULL;
    }
    temp->data = data;
    temp->link = s;
    s = temp;
    return s;
}
int isEmpty(stackC *s)
{
    return s == NULL;
}
char peek(stackC *s)
{
    if (!isEmpty(s))
        return s->data;
    else
        return 0;
}
stackC* pop(stackC *s)
{
    stackC* temp;
    if (s == NULL)
    {
        printf("\nStack Underflow");
        return NULL;
    }
    else
    {
        temp = s;
        s = s->link;
        temp->link = NULL;
        free(temp);
    }
    return s;
}
void display(stackC *s)
{
    stackC* temp;
    if (s == NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        temp = s;
        while (temp != NULL)
        {
            printf("%c ", temp->data);
            temp = temp->link;
        }
    }
}