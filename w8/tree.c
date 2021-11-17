#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;

Node *root;
int leaf = 0;
int nodeCount = 0;

int isLeaf(Node *node)
{
    return !node->left && !node->right;
}
Node *makeNode(int n)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void print(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    print(root->left);
    print(root->right);
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return (l > r ? l : r) + 1;
}

void travelTree(Node *root)
{
    if (root == NULL)
        return;
    leaf += isLeaf(root);
    nodeCount++;
    travelTree(root->left);
    travelTree(root->right);
}
int numberOfLeafs(Node *root)
{
    return leaf;
}
int numberOfInternalNode(Node *root)
{
    return nodeCount - leaf;
}
int count(Node *root) {
    return nodeCount;
}

int main(int argc, char *argv[])
{
    /*
      1
    /  \ 
   2     3
  / \   / \
 4   5  6  7 
      \
        12
    */
    root = makeNode(1);
    root->left = makeNode(2);
    root->right = makeNode(3);
    root->left->left = makeNode(4);
    root->left->right = makeNode(5);
    root->left->right->right = makeNode(12);
    root->right->left = makeNode(6);
    root->right->right = makeNode(7);
    print(root);
    printf("\nHeight(Depth) of Tree is: %d", height(root));

    travelTree(root);
    printf("\nNumber of leafs: %d", numberOfLeafs(root));
    printf("\nNumber of internal nodes: %d", numberOfInternalNode(root));
    printf("\nNumber of nodes: %d", count(root));
    return 0;
}