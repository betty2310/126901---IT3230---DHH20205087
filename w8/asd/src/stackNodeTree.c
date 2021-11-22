// #include <stdlib.h>

// #include "stackNodeTree.h"

// sTree *createStackNodeTree(sTree *p) {
//     p = (sTree *)malloc(sizeof(sTree));
//     p->link = NULL;
//     return p;
// }

// NodeT *makeNode(char n)
// {
//     NodeT *node = (NodeT *)malloc(sizeof(NodeT));
//     node->data = n;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

// sTree* pushNodeTree(sTree *s, char c)
// {
//     struct sTree* temp;
//     temp = (sTree*)malloc(sizeof(sTree));
//     if (!temp)
//     {
//         printf("\nStack overflow!\n");
//         return NULL;
//     }
//     NodeT *node = makeNode(c);
//     temp->data = node;
//     temp->link = s;
//     s = temp;

//     return s;
// }
// int isEmptyNodeTree(sTree *s)
// {
//     return s == NULL;
// }
// NodeT* peekNodeTree(sTree *s)
// {
//     if (!isEmpty(s))
//         return s->data;
//     else
//         return 0;
// }
// sTree* popNodeTree(sTree *s)
// {
//     sTree* temp;
//     if (s == NULL)
//     {
//         printf("\nStack Underflow");
//         return NULL;
//     }
//     else
//     {
//         temp = s;
//         s = s->link;
//         temp->link = NULL;
//         free(temp);
//     }
//     return s;
// }