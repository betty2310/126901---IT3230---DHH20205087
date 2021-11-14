#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linearSearch(int *arr, int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int linearSentinelSearch(int *arr, int size, int key)
{
    int i;
    arr[size] = key;
    for (i = 0; arr[i] != key; i++)
        ;
    if (i == size)
        return -1;
    else
        return i;
}
int main(int argc, char* argv[])
{
    int arr[11];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);
    int pos = linearSentinelSearch(arr, 10, key);
    return 0;
}
