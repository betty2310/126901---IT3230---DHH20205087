#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "postfix.h"
#include "stack.h"

int orderOfOpera(char op1, char op2) {
    int order = 0;
    if (op1 == '+' || op1 == '-') {
        if (op2 == 'x' || op2 == '/') {
            order = 1;
        } else {
            order = 0;
        }
    }
    return order;
}

int main(int argc, char *argv[]) {
    char s[255];
    scanf("%s", s);
    int len = strlen(s);
    char *expression = (char *)malloc(sizeof(char) * len);
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] <= '9' && s[i] >= '0') {
            expression[index++] = s[i];
        } else {
            char op1 = peek();
            push(s[i]);
            if (s[i] == ')') {
                char op = peek();
                while (op != '(') {
                    expression[index++] = op;
                    pop();
                    op = peek();
                }
                pop();
            }
            char op2 = peek();
            int ch = orderOfOpera(op2, op1);
            if (ch) {
                expression[index++] = op1;
                pop();
                pop();
                push(s[i]);
            }
        }
    }
    expression[index] = peek();
    pop();

    for (int i = 0; i <= index; i++) {
        if (expression[i] == ')') continue;
        if (expression[i] <= '9' && expression[i] >= '0')
            push(expression[i]);
        else
            postfix(expression[i]);
    }
    printf("%d\n", peek() - '0');

    return 0;
}
