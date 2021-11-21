#include "stack.h"
#include <string.h>

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == 'x' || c == '/');
}

int order(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case 'x':
    case '/':
        return 2;
    }
    return -1;
}
void infixToPostfix(char *infix, char *postfix)
{
    int index = 0;
    int len = strlen(infix);
    for (int i = 0; i < len; ++i)
    {
        if (infix[i] == '(')
        {
            p = push(p, infix[i]);
            continue;
        }
        if (infix[i] == ')')
        {
            while (peek(p) != '(' && !isEmpty(p))
            {
                postfix[index++] = peek(p);
                p = pop(p);
            }
            p = pop(p);
            continue;
        }
        if (isOperator(infix[i]))
        {
            if (order(infix[i]) > order(peek(p)))
            {
                p = push(p, infix[i]);
            }
            else
            {
                while (order(infix[i]) <= order(peek(p)))
                {
                    postfix[index++] = peek(p);
                    p = pop(p);
                }
                p = push(p, infix[i]);
            }
            continue;
        }
        else
        {
            postfix[index++] = infix[i];
            continue;
        }
    }
    while (!isEmpty(p))
    {
        postfix[index++] = peek(p);
        p = pop(p);
    }
}