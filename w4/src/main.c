#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

void solve(char s)
{
    char a = peek();
    pop();
    char b = peek();
    pop();
    int c;
    if (s == '+')
        c = (a - '0') + (b - '0');
    if (s == '-')
        c = (a - '0') - (b - '0');
    if (s == 'x')
        c = (a - '0') * (b - '0');
    if (s == '/')
        c = (a - '0') / (b - '0');
    push(c + '0');
}

int main(int argc, char *argv[])
{
    char *s = argv[1];
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
            push(s[i]);
        else
            solve(s[i]);
    }

    //display();

    printf("\nResult: %d\n", peek() - '0');
    return 0;
}