#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selectionSort(int a[], int len) {
    for (int i = 0; i < len;++i) {
        int min = i;
        for (int j = i + 1; j < len;++j) {
            if (a[j] < a[min]) 
                min = j;
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}

int main(int argc, char* argv[])
{
    int a[] = {12, 3, 4, 1, 19, 7};
    int len = 6;
    selectionSort(a, 6);
    for (int i = 0; i < len; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}