typedef struct Node {
    char data;
    struct Node* link;
} Node;

extern Node* top;

void push(char data);
int isEmpty();
char peek();
void pop();
void display();
