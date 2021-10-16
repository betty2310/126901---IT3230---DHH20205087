#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 255

struct Infor
{
    char name[MAX_LEN];
    char email[MAX_LEN];
    char phoneNumber[MAX_LEN];
};

typedef struct Node
{
    struct Infor data;
    struct Node *next;
} Node;

void push(Node **head, struct Infor sv) //insert in first index
{
    Node *nNode = (Node *)malloc(sizeof(Node));
    if (*head == NULL) //first node in list
    {
        nNode->data = sv;
        nNode->next = NULL;
        *head = nNode;
        return;
    }
    nNode->data = sv;
    nNode->next = *head;
    *head = nNode;
    return;
}
void insertPos() //insert with pos
{
}
void removePos() //remove node with pos
{
}
void traversing(Node *head)
{
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        printf("%s\n%s\n%s\n", cur->data.name, cur->data.email, cur->data.phoneNumber);
    }
}

int main(int argc, char *argv[])
{
    Node *head = NULL;
    struct Infor sv1 = {"Duong Huu Huynh", "huynhduong@xyz.com", "034484"};
    struct Infor sv2 = {"Le Phuong Anh", "anhphuong@abc.com", "01234"};
    push(&head, sv1);
    push(&head, sv2);
    traversing(head);

    return 0;
}