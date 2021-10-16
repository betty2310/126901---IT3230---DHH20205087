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
void insertPos(Node **head, struct Infor sv, int pos) //insert with pos
{
    if (pos == 0)
    {
        push(head, sv);
        return;
    }
    Node *cur = *head;
    // find the previous node of pos
    for (int i = 0; cur->next != NULL && i < pos - 1;++i) {
        cur = cur->next;
    }
    Node *nNode = (Node *)malloc(sizeof(Node));
    nNode->data = sv;
    nNode->next = cur->next;
    cur->next = nNode;
}
void removePos(Node **head, int pos) //remove node with pos
{
    Node *cur = *head;
    if(pos == 0) //delete first index node
    {
        *head = cur->next;
        free(cur);
        return;
    }
    
    for (int i = 0; cur->next != NULL && i < pos - 1;++i) {
        cur = cur->next;
    }
    Node *after = cur->next->next;
    cur->next = after;
    return;
}
void traversing(Node *head)
{
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        printf("%s %s %s\n", cur->data.name, cur->data.email, cur->data.phoneNumber);
    }
}

void freeAll(Node **head)
{
    Node *cur = *head;
    while(cur!=NULL) {
        (*head) = (*head)->next;
        free(cur);
        cur = *head;
    }
    return;
}
void reverseList(Node **head)
{
    Node* prev = NULL;
    Node* cur = *head;
    Node* next = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
}

int main(int argc, char *argv[])
{
    Node *head = NULL;
    struct Infor sv1 = {"Duong Huu Huynh", "huynhduong@xyz.com", "034484"};
    struct Infor sv2 = {"Le Phuong Anh", "anhphuong@abc.com", "01234"};
    struct Infor sv3 = {"Le Hong Hanh", "hanhhong@mnv.com", "01234"};
    struct Infor sv4 = {"Hoang Khai Nga", "khainga@xyz.com", "034484"};
    struct Infor sv5 = {"Nguyen Van Hong", "hongnguyen@abc.com", "01234"};
    struct Infor sv6 = {"Ta Van Thien", "thienvan@mnv.com", "09343"};
    push(&head, sv1);
    push(&head, sv2);
    insertPos(&head, sv3, 2);
    push(&head, sv4);
    insertPos(&head, sv5, 3);
    removePos(&head, 2);
    insertPos(&head, sv6, 2);
    //freeAll(&head);
    reverseList(&head);
    traversing(head);

    return 0;
}