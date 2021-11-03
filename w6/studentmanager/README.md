# Exercise

Return to SortedList exercise in Week4 (student management) (Linked List) with structure of an element:

```c
typedef struct Student_t {
char id[ID_LENGTH];
char name[NAME_LENGTH];
int grade;
struct Student_t *next; 
} Student;
```
implement the function BinarySearch for this list based on

* the name
* the grade

of students

## Instruction of project

```
.
├──  build
│  ├──  studentmanager
├──  include
│  ├──  binarySearch.h
│  └──  student.h
├──  CMakeLists.txt
├──  main.c
├──  binarySearch.c
└──  student.c
```