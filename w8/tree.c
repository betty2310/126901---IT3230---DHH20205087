#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;

Node *root;

Node *makeNode(int n)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void print(Node *root) {
    if(root == NULL)
        return;
    printf("%d ", root->data);
    print(root->left);
    print(root->right);
}

int height(Node *root)
{
    if(root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return (l > r ? l : r) + 1;
}
int numberOfLeafs(Node *root);
int numberOfInternalNode(Node *root);
int count(Node *root);

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
    return 0;
}