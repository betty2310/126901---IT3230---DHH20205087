#include <stdlib.h>

#include "tree.h"

NodeT *makeNode(char n)
{
    NodeT *node = (NodeT *)malloc(sizeof(NodeT));
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}
