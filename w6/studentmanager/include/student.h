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

void addStudent(Node **head, struct student sv);
Node *findStudentById(Node *head, char *Id);
void removeStudentById(Node **head, char *Id);
void changeGradeStudentById(Node **head, char *Id, int nGr);
void printList(Node *head);
Node *findStudentByGradeUseBinarySearch(Node *head, int grade, int n);
Node *findStudentByNameUseBinarySearch(Node *head, char *name, int n);
extern Node *head;