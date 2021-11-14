#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

Node *nodeMiddle(Node *head, Node *tail)
{
    Node *middle = head;
    Node *current = head;

    // current chay nhanh hon middle 2 lan
    while (current != tail)
    {
        current = current->next;
        if (current != tail)
        {
            current = current->next;
        }
        middle = middle->next;
    }
    return middle;
}

Node *findStudentByGradeUseBinarySearch(Node *head, int grade, int n)
{
    Node *start = head;
    Node *last = NULL;
    while (last != start)
    {
        Node *mid = nodeMiddle(start, last);
        if (mid == NULL)
            return NULL;
        if (mid->Data.grade == grade)
            return mid;
        if (mid->Data.grade > grade)
        {
            start = mid->next;
        }
        if (mid->Data.grade < grade)
        {
            last = mid;
        }
    }
    return NULL;
}

