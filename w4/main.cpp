#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    int data;
    struct Node* link;
} Node ;
 
Node* top;
 
void push(int data)
{
    struct Node* temp;
    temp = (Node *)malloc(sizeof(Node));
    if (!temp)
    {
        printf("\nStack overflow!\n");
        return;
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
int isEmpty()
{
    return top == NULL;
}
 
int peek()
{
    if (!isEmpty())
        return top->data;
    else
        return 0;
}
void pop()
{
    Node* temp;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}
 
void display()
{
    Node* temp;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->link;
        }
    }
}
 
int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
 
    display();

    printf("\nTop element is: %d\n", peek());

    pop();
    pop();
 
    display();

    printf("\nTop element is: %d\n", peek());
    return 0;
}