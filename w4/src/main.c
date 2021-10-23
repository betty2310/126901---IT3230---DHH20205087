#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int main(int argc, char *argv[])
{
    char *s = argv[1];
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
        {
            push(s[i]);
        }
        else
        {
            switch (s[i])
            {
            case '+':
            {
                char a = peek();
                pop();
                char b = peek();
                pop();
                int c = (a - '0') + (b - '0');
                push(c);
                break;
            }
                //     char a = peek();
                //     pop();
                //     char b = peek();
                //     pop();
                //     int c = (a - '0') - (b - '0');
                //     push(c);
                //     break;
                // case 'x':
                //     char a = peek();
                //     pop();
                //     char b = peek();
                //     pop();
                //     int c = (a - '0') * (b - '0');
                //     push(c);
                //     break;
                // case '/':
                //     char a = peek();
                //     pop();
                //     char b = peek();
                //     pop();
                //     int c = (a - '0') / (b - '0');
                //     push(c);
                //     break;

            default:
                break;
            }
        }
    }

    display();

    printf("\nTop element is: %c\n", peek());
    return 0;
}