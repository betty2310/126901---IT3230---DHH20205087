/*
Make a random string that has about 2000 characters consisting of a set of characters..
•For example:
    –set of characters: abcdef
    –string: abcadacaeeeffaadbfacddedcedfbeccae...
•Write the program that searches the pattern, for example “aadbf”, from the string.
•Note: use Simple searching string Algorithm
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2000

int simpleSearch(char *str, char *search) {
    int found = 0;
    int len = strlen(search);
    for (int i = 0; i < SIZE; ++i) {
        if (str[i] == search[0]) {
            int j = 0;
            int m = i;
            while (str[m] == search[j] && j < len) {
                if (j == len - 1) {
                    found = i;
                    break;
                }
                ++m;
                ++j;
            }
        }
    }
    return found;
}
int main() {
    char setOfChar[] = "abcdef";
    char str[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        str[i] = setOfChar[rand() % 6];
    }

    FILE *f = fopen("out.txt", "w");
    fprintf(f, "%s\n", str);
    fclose(f);

    printf("Enter a string to search: ");
    char search[SIZE];
    scanf("%s", search);

    int found = simpleSearch(str, search);
    if (found) {
        printf("Found at index: %d\n", found + 1);
    } else {
        printf("Not found!\n");
    }

    return 0;
}