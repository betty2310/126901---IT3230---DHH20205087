#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "sort.h"

#define N 500
#define MAX_RANGE 10000

int main(int argc, char *argv[]) {
    FILE *fn;
    int a[N + 1];
    fn = fopen("number.txt", "w");
    for (int i = 0; i < N; ++i) {
        int num = (rand() % MAX_RANGE) + 1;
        fprintf(fn, "%d ", num);
        a[i] = num;
    }
    int c;
    printf("|\t  ----MENU----      |\n");
    printf("|\t1. Insertion Sort   |\n");
    printf("|\t2. Selection Sort   |\n");
    printf("|\t3. Merge Sort       |\n");
    printf("|\t4. Quick Sort       |\n");
    printf("|\t5. Heap Sort        |\n");
    printf("\nEnter choice: ");
    scanf("%d", &c);
    switch (c) {
        case 1: {
            printf("You select insertionSort, ");
            clock_t t;
            t = clock();
            insertionSort(a, N);
            t = clock() - t;
            double time_taken = ((double)t) / 1000000;  // in seconds
            printf("took %lf s", time_taken);
            break;
        }
        case 2: {
            printf("\nYou select selectionSort, ");
            clock_t t;
            t = clock();
            selectionSort(a, N);
            t = clock() - t;
            double time_taken = ((double)t) / 1000000;  // in seconds
            printf("took %lf s", time_taken);
            break;
        }
        case 3: {
            printf("\nYou select mergeSort, ");
            clock_t t;
            t = clock();
            mergeSort(a, 0, N);
            t = clock() - t;
            double time_taken = ((double)t) / 1000000;  // in seconds
            printf("took %lf s", time_taken);
            break;
        }
        case 4: {
            printf("\nYou select quickSort, ");
            clock_t t;
            t = clock();
            quickSort(a, 0, N - 1);
            t = clock() - t;
            double time_taken = ((double)t) / 1000000;  // in seconds
            printf("took %lf s", time_taken);
            break;
        }
        case 5: {
            printf("You select heapSort, ");
            clock_t t;
            t = clock();
            heapSort(a, N);
            t = clock() - t;
            double time_taken = ((double)t) / 1000000;
            printf("took %lf s", time_taken);
            break;
        }
        default:
            printf("Error!\n");
            break;
    }
    fprintf(fn, "\n\n---------\n\n");
    for (int i = 0; i < N; ++i) {
        fprintf(fn, "%d ", a[i]);
    }
    fclose(fn);
    return 0;
}
