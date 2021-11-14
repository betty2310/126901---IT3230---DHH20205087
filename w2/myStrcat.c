#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* myStrcat(char *s1, char *s2) {
    char *ptr;
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    ptr = (char *)malloc((n1 + n2) * sizeof(char));
    strcpy(ptr, s1);
    strcpy(ptr + n1, s2);
    return ptr;
}
int main()
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    char *ptr = myStrcat(s1, s2);
    if(ptr == NULL)
        printf("Failed");
    puts(ptr);
    free(ptr);
}