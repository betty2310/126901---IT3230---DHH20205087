/*
Make a random string that has about 2000 characters consisting of a set of characters..
•For example:
    –set of characters: abcdef
    –string: abcadacaeeeffaadbfacddedcedfbeccae...
•Write the program that searches the pattern, for example “aadbf”, from the string.
•Note: use KMP algorithm
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2000

void computeLPSArray(char *search, int m, int *lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (search[i] == search[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void useKmpSearch(char *str, char *search) {
    int n = strlen(str);
    int m = strlen(search);
    int lps[m];
    computeLPSArray(search, m, lps);
    int i = 0;  // index for str[]
    int j = 0;  // index for search[]
    while (i < n) {
        if (search[j] == str[i]) {
            j++;
            i++;
        }
        if (j == m) {
            printf("Found pattern at index %d\n", i - j);
            j = lps[j - 1];
        }
        // mismatch after j matches
        else if (i < n && search[j] != str[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return;
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
    useKmpSearch(str, search);
    return 0;
}
