#include<stdio.h>
#include<stdlib.h>

int compareArr(int *a, int *b) {
    for (int i = 0; i < 4;++i) {
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}
int main() {
    int a1[] = {1, 2, 3, 4, 6};
    int a2[] = {1, 2, 3, 3, 6};
    int res = compareArr(a1, a2);
    printf("%d", res);
}