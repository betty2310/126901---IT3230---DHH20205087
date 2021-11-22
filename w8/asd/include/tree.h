typedef struct NodeTree
{
    char data;
    struct Node *left, *right;
} NodeT;
extern NodeT *root;
NodeT *makeNode(char n);
