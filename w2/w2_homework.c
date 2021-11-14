#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *a;
    int n = argc - 2;
    a = (int *)malloc(sizeof(int) * n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        a[i] = atoi(argv[i + 2]);
        sum += a[i];
    }
    FILE *fo;
    fo = fopen("output", "w");
    if (fo == NULL)
    {
        printf("Failed to open file!");
        return 1;
    }
    for (int i = n - 1; i >= 0; --i)
    {
        fprintf(fo, "%d ", a[i]);
    }
    fprintf(fo, "%d\n", sum);
    fclose(fo);
    free(a);
}