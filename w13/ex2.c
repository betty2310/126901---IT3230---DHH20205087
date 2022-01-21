/*
Make a random string that has about 2000 characters consisting of a set of characters..
•For example:
    –set of characters: abcdef
    –string: abcadacaeeeffaadbfacddedcedfbeccae...
•Write the program that searches the pattern, for example “aadbf”, from the string.
•Note: use Boyer-Moore Algorithm
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 2000

int max(int a, int b) { return (a > b) ? a : b; }

int boyerMooreSearch(char *str, char *search) {
    int n = strlen(str);
    int m = strlen(search);
    int s = 0;  // shift run
    while (s <= n - m) {
        int j = m - 1;
        while (j >= 0 && str[s + j] == search[j]) {
            j--;
        }
        if (j < 0) {
            return s;
        }
        int x = max(1, j - str[s + j]);
        s += x;
    }

    return -1;
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

    int found = boyerMooreSearch(str, search);
    if (found >= 0 && found < SIZE) {
        printf("Found at index: %d\n", found + 1);
    } else {
        printf("Not found!\n");
    }

    return 0;
}
