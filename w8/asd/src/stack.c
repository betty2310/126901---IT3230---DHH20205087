#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

NodeS *createStack(NodeS *p) {
    p = (NodeS *)malloc(sizeof(NodeS));
    p->link = NULL;
    return p;
}

NodeS* push(NodeS *s, char data)
{
    struct NodeS* temp;
    temp = (NodeS*)malloc(sizeof(NodeS));
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
int isEmpty(NodeS *s)
{
    return s == NULL;
}
char peek(NodeS *s)
{
    if (!isEmpty(s))
        return s->data;
    else
        return 0;
}
NodeS* pop(NodeS *s)
{
    NodeS* temp;
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
void display(NodeS *s)
{
    NodeS* temp;
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