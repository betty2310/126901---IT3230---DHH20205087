typedef struct NodeTree
{
    char data;
    struct NodeTree *left, *right;
} NodeT;
extern NodeT *root;
NodeT *makeNode(char n);
void showTree(NodeT *root);
