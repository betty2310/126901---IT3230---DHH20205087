typedef struct NodeT
{
    int data;
    struct Node *left, *right;
} NodeT;
extern NodeT *root;
NodeT *makeNode(int n);
