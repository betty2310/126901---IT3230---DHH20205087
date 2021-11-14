#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LENGTH 10
#define NAME_LENGTH 255

struct student
{
    char id[ID_LENGTH];
    char name[NAME_LENGTH];
    int grade;
};

typedef struct Node
{
    struct student Data;
    struct Node *next;
} Node;

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
void printList(Node *head)
{
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        printf("%s %s %d\n", cur->Data.id, cur->Data.name, cur->Data.grade);
    }
}
int main(int argc, char *argv[])
{
    Node *head = NULL;
    struct student sv1 = {"20201234", "Pham Hong An", 12};
    struct student sv2 = {"20205091", "Le Phuong Anh", 13};
    struct student sv3 = {"20201434", "Duong Huu Huynh", 9};
    struct student sv4 = {"20204354", "Vu Hoang Anh", 11};
    struct student sv5 = {"20206873", "Hoang Khai Nga", 10};
    struct student sv6 = {"20205348", "Le Hong Van", 12};
    struct student sv7 = {"20201234", "Bac Kieu Phong", 8};
    struct student sv8 = {"20209876", "Au Duong Co", 14};

    addStudent(&head, sv1);
    addStudent(&head, sv2);
    addStudent(&head, sv3);
    addStudent(&head, sv4);
    addStudent(&head, sv5);
    addStudent(&head, sv6);
    addStudent(&head, sv7);
    addStudent(&head, sv8);

    printList(head);
    char fId[ID_LENGTH];
    printf("\n<*------FIND STUDENT------*>\nNhap id: ");
    scanf("%s", fId);
    Node *ptr = findStudentById(head, fId);
    if(ptr == NULL)
        printf("Can not find this Id in linked list!\n");
    else 
        printf("Find student!\nName: %s\tGrade: %d\n", ptr->Data.name, ptr->Data.grade);
    printf("\n<*------REMOVE STUDENT------*>\nNhap id: ");
    char rId[ID_LENGTH];
    scanf("%s", rId);
    removeStudentById(&head, rId);
    printList(head);
    printf("\n<*------CHANGE GRADE STUDENT------*>\nNhap id: ");
    char gId[ID_LENGTH];
    int nGr;
    scanf("%s", gId);
    printf("Enter new grade: ");
    scanf("%d", &nGr);
    changeGradeStudentById(&head, gId, nGr);
    printList(head);
 
    return 0;
}