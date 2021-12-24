#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "BST.h"

int main(int argc, char *argv[]) {
    /*
                  7
                /   \
               3     9
             /  \   /  \
            2    5 8   10
    */
    BTree *root = NULL;
    root = insert(root, 7);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 8);
    printBTree(root);

    printf("\nEnter number to search: ");
    int num;
    scanf("%d", &num);
    BTree *ans = binarySearch(root, num);
    if (ans != NULL)
        printf("Found %d\n", ans->data);
    else
        printf("Not found\n");

    // root = insert(root, 6);
    // printBTree(root);
    // root = deleteNode(root, 6);
    // printBTree(root);

    return 0;
}

