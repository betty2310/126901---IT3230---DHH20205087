#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

Node *head = NULL;

int main(int argc, char *argv[])
{
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
