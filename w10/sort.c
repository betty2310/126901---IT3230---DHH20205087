#include <stdio.h>
#include <stdlib.h>

void insertionSort(int a[], int size) {
    for (int i = 1; i < size; ++i) {
        int last = a[i];
        int j = i;
        while (j > 0 && a[j - 1] > last) {
            a[j] = a[j - 1];
            j -= 1;
        }
        a[j] = last;
    }
}

void selectionSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int last = a[i];
        int index = i;
        for (int j = i + 1; j < size; ++j) {
            if (a[j] < last) {
                last = a[j];
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}
void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    // copy a to 2 sub a left L and right R
    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    int i = 0;  // Initial index of first subaay
    int j = 0;  // Initial index of second subaay
    int k = l;  // Initial index of merged subaay
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy not cac phan tu con lai neu con o ca 2 L va R
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, left + 1, mid);
        merge(a, left, mid, right);
    }
}
int partition(int a[], int left, int right) {
    int pivot = a[right];
    int i = left - 1;
    for (int j = left; j < right; ++j) {
        if (a[j] < pivot) {
            i++;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    int tmp = a[i + 1];
    a[i + 1] = a[right];
    a[right] = tmp;
    return i + 1;
}
void quickSort(int a[], int left, int right) {
    if (left < right) {
        int pi = partition(a, left, right);
        quickSort(a, left, pi - 1);
        quickSort(a, pi + 1, right);
    }
}
void adjust(int a[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;
    if (largest != i) {
        int tmp = a[i];
        a[i] = a[largest];
        a[largest] = tmp;
        adjust(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        adjust(a, n, i);
    for (int i = n - 1; i > 0; i--) {
        int tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;
        adjust(a, i, 0);
    }
}
