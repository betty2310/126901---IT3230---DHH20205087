#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

Node* top;
void push(char data) {
    struct Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    if (!temp) {
        printf("\nStack overflow!\n");
        return;
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
int isEmpty() { return top == NULL; }
char peek() {
    if (!isEmpty())
        return top->data;
    else
        return 0;
}
void pop() {
    Node* temp;
    if (top == NULL) {
        printf("\nStack Underflow");
        return;
    } else {
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}
void display() {
    Node* temp;
    if (top == NULL) {
        printf("\nStack Underflow");
        return;
    } else {
        temp = top;
        while (temp != NULL) {
            printf("%c ", temp->data);
            temp = temp->link;
        }
    }
}
