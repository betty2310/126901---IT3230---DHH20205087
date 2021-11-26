#include <stdlib.h>
#include <stdio.h>

#include "BST.h"

BTree *makeNode(int _data)
{
    BTree *newNode = (BTree *)malloc(sizeof(BTree));
    if (newNode == NULL)
    {
        printf("Error: Out of memory\n");
        return NULL;
    }
    newNode->data = _data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BTree *binarySearch(BTree *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    if (data < root->data)
    {
        return binarySearch(root->left, data);
    }
    return binarySearch(root->right, data);
}

BTree *insert(BTree *node, int _data)
{
    BTree *newNode = makeNode(_data);
    if (node == NULL)
    {
        return newNode;
    }
    if (_data < node->data)
    {
        node->left = insert(node->left, _data);
    }
    else if (_data > node->data)
    {
        node->right = insert(node->right, _data);
    }
    else
    {
        printf("Error: Duplicate data %d\n", _data);
    }
    return node;
}
BTree *deleteNode(BTree *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data < root->data)
    {
        deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        deleteNode(root->right, data);
    }
    else
    {
        // root has no child or one child on left or right
        if (root->left == NULL)
        {
            BTree *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            BTree *temp = root->left;
            free(root);
            return temp;
        }
        // root has two childen
    }
    return root;
}
void deleteBtree(BTree *root)
{
    if (root == NULL)
    {
        return;
    }
    deleteBtree(root->left);
    deleteBtree(root->right);
    free(root);
}

void printBTree(BTree *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    printBTree(root->left);
    printBTree(root->right);
}
