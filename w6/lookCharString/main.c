#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  MAX_LENGTH  16

void lookChar(char *s, char *w)
{
    int len = strlen(w);
    int ch = 1;
    for (int i = 0; i < len; i++)
    {
        if (w[i] != s[i])
        {
            ch = 0;
            break;
        }
    }
    if(ch == 1)
        printf("%s\n", s);
    return;
}
int main()
{
    FILE *fp;
    fp = fopen("text.out", "r");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char *w = (char *)malloc(MAX_LENGTH * sizeof(char));
    printf("Enter word: ");
    scanf("%s", w);
    char c;
    char *s = (char *)malloc(MAX_LENGTH * sizeof(char));
    int i = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            lookChar(s, w);
            for (int j = 0; j < MAX_LENGTH; j++)
                s[j] = ' ';
            i = 0;
        }
        else
        {
            s[i++] = c;
        }
    }
    free(s);
    fclose(fp);
    return 0;
}