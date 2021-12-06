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
BTree *leftMostNode(BTree *node) {
    BTree *cur = node;
    while(cur!=NULL && cur->left != NULL) {
        cur = cur->left;
    }
    return cur;
}
BTree *deleteNode(BTree *root, int data)
{
    if (root == NULL)
        return NULL;
    BTree *par, *cur = root;
    while(cur != NULL && cur->data != data)
    {
        par = cur;
        if(data < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
    if(cur->left == NULL && cur->right == NULL)
    {
        if(cur != root)
        {
            if(par->left == cur)
                par->left == NULL;
            else
                par->right == NULL;
        }
        else
            root == NULL;
        free(cur);
    }
    else if(cur->left && cur->right)
    {
        BTree *node = leftMostNode(cur);
        int key = node->data;
        deleteNode(root, node->data);
        cur->data = key;
    }
    else {
        BTree *child = (cur->left) ? cur->left : cur->right;
        if(cur != root)
        {
            if(par->left ==cur)
                par->left = NULL;
            else
                par->right = NULL;
        }
        else
            root = child;
        free(cur);
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
