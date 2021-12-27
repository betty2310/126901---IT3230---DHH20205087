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
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    // copy arr to 2 sub arr left L and right R
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0;  // Initial index of first subarray
    int j = 0;  // Initial index of second subarray
    int k = l;  // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy not cac phan tu con lai neu con o ca 2 L va R
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
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

