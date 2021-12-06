typedef struct BinaryTree {
    int data;
    struct BinaryTree *left;
    struct BinaryTree *right;
} BTree;

BTree *makeNode(int data);
BTree *binarySearch(BTree *root, int data);
BTree *insert(BTree *node, int _data);
BTree *leftMostNode(BTree *node);
BTree *deleteNode(BTree *root, int _data);
void deleteBtree(BTree *root);
void printBTree(BTree *root);
