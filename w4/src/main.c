#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "postfix.h"

int main(int argc, char *argv[])
{
    char *s = argv[1];
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
            push(s[i]);
        else
            postfix(s[i]);
    }

    //display();

    printf("\nResult: %d\n", peek() - '0');
    return 0;
}