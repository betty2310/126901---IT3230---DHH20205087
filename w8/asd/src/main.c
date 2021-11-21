#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "postfix.h"
#include "tree.h"

NodeS *p, *q;

int main(int argc, char *argv[])
{
    p = createStack(p);

    char infix[255];
    scanf("%s", infix);
    int len = strlen(infix);
    char *postfix = (char *)malloc(sizeof(char) * len);

    infixToPostfix(infix, postfix);
    
    return 0;
}