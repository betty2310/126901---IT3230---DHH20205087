#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

void addStudent(Node **head, struct student sv) //student add default sorted by grade
{
    Node *cur = (Node *)malloc(sizeof(Node));
    if (*head == NULL)
    {
        cur->Data = sv;
        cur->next = NULL;
        *head = cur;
        return;
    }
    if (sv.grade >= (*head)->Data.grade)
    {
        cur->Data = sv;
        cur->next = (*head);
        *head = cur;
        return;
    }
    cur = *head;
    Node *new_sv = (Node *)malloc(sizeof(Node));
    // find prev index > grade
    while (cur->next != NULL && sv.grade <= cur->next->Data.grade)
    {
        cur = cur->next;
    }
    new_sv->Data = sv;
    new_sv->next = cur->next;
    cur->next = new_sv;
    return;
}

Node *findStudentById(Node *head, char *Id) {
    Node *p = (Node *)malloc(sizeof(Node));
    p = head;
    while(p!=NULL) {
        if(strcmp(p->Data.id, Id) == 0) 
        {
            return p;
        }
        p = p->next;
    }
    free(p);
    return NULL;
}

void removeStudentById(Node **head, char *Id) 
{
    Node *cur = *head;
    if(!(strcmp(cur->Data.id, Id))) 
    {
        *head = cur->next;
        return;
    }
    // find prev index 
    while (cur->next != NULL && strcmp(cur->next->Data.id, Id)!=0)
    {
        cur = cur->next;
    }
    Node *nNext = cur->next->next;
    cur->next = nNext;
    return;
}

void changeGradeStudentById(Node **head, char *Id, int nGr) 
{
    Node *cur = *head;
    while (cur->next != NULL && strcmp(cur->Data.id, Id)!=0)
    {
        cur = cur->next;
    }
    cur->Data.grade = nGr;
    return;
}

int countStudentInLinkedList(Node *head) 
{
    Node *cur = head;
    int count = 0;
    while (cur != NULL)
    {
        count++;
        cur = cur->next;
    }
    return count;
}
void printList(Node *head)
{
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        printf("%s %s %d\n", cur->Data.id, cur->Data.name, cur->Data.grade);
    }
}