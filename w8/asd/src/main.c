#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "postfix.h"
#include "stack.h"
#include "tree.h"

typedef struct stackNodeTree {
    NodeT *data;
    struct stackNodeTree *link;
} stackT;

stackT *createStackNodeTree(stackT *p);
stackT *pushNodeTree(stackT *s, NodeT *c);
int isEmptyNodeTree(stackT *s);
NodeT *peekNodeTree(stackT *s);
stackT *popNodeTree(stackT *s);

stackC *p;   // use to store the postfix expression
stackT *st;  // use to store the tree
NodeT *root;

int main(int argc, char *argv[]) {
    p = createStack(p);
    st = createStackNodeTree(st);

    char infix[255];
    scanf("%s", infix);
    int len = strlen(infix);
    char *postfix = (char *)malloc(sizeof(char) * len);
    infixToPostfix(infix, postfix);

    int len2 = strlen(postfix);
    NodeT *l, *r, *t;
    for (int i = 0; i < len2; ++i) {
        t = makeNode(postfix[i]);
        if (!isOperator(postfix[i])) {
            st = pushNodeTree(st, t);
        } else {
            r = peekNodeTree(st);
            st = popNodeTree(st);
            l = peekNodeTree(st);
            st = popNodeTree(st);
            t->data = postfix[i];
            t->left = l;
            t->right = r;
            st = pushNodeTree(st, t);
        }
        root = t;
    }

    showTree(root);
    return 0;
}

stackT *createStackNodeTree(stackT *st) {
    st = (stackT *)malloc(sizeof(stackT));
    st->data = NULL;
    st->link = NULL;
    return st;
}
stackT *pushNodeTree(stackT *s, NodeT *c) {
    stackT *tmp;
    tmp = (stackT *)malloc(sizeof(stackT));
    if (!tmp) {
        printf("\nStack overflow!\n");
        return NULL;
    }
    tmp->data = c;
    tmp->link = s;
    s = tmp;
    return s;
}
int isEmptyNodeTree(stackT *s) { return s == NULL; }
NodeT *peekNodeTree(stackT *s) {
    if (!isEmptyNodeTree(s)) {
        return s->data;
    } else
        return NULL;
}
stackT *popNodeTree(stackT *s) {
    if (s == NULL) {
        printf("\nStack underflow!\n");
        return NULL;
    } else {
        stackT *tmp;
        tmp = s;
        s = s->link;
        tmp->link = NULL;
        free(tmp);
    }
    return s;
}
