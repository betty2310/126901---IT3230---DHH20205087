#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "postfix.h"

int main(int argc, char *argv[])
{
    char infix[255];
    scanf("%s", infix);
    int len = strlen(infix);
    char *postfix = (char *)malloc(sizeof(char) * len);
    infixToPostfix(infix, postfix);
    printf("%s", postfix);

    return 0;
}