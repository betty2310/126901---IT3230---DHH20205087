#include "stack.h"

void postfix(char s)
{
    char a = peek();
    pop();
    char b = peek();
    pop();
    int c;
    if (s == '+')
        c = (a - '0') + (b - '0');
    if (s == '-')
        c = (b - '0') - (a - '0');
    if (s == 'x')
        c = (a - '0') * (b - '0');
    if (s == '/')
        c = (b - '0') / (a - '0');
    push(c + '0');
}