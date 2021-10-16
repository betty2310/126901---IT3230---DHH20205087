#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LENGTH 10
#define NAME_LENGTH 255

struct data {
    char id[ID_LENGTH];
    char name[NAME_LENGTH];
    int grade;
};

typedef struct Student_t {
    struct data Data;
    struct Student_t *next;
} Student;

int main(int argc, char *argv[])
{
    
    return 0;
}