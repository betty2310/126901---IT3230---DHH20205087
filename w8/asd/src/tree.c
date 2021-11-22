#include <stdlib.h>
#include <stdio.h>

#include "tree.h"

NodeT *makeNode(char n)
{
    NodeT *node = (NodeT *)malloc(sizeof(NodeT));
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void showTree(NodeT *root) {
    if(root == NULL)
        return;
    printf("%c ", root->data);
    showTree(root->left);
    showTree(root->right);
}
