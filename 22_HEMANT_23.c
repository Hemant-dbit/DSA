/*
Roll no : 22
Batch: A
Author name: Hemant Gupta
Date: 10/10/2024
 Description: Program to implement merge sort
 */


#include <stdio.h>
#include <stdlib.h>

void partition(int *a, int low, int high);
void mergesort(int *a, int low, int mid, int high);

int main() {
    int n, temp, i, j, a[20];
    
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call partition function
    partition(a, 0, n - 1);

    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

void partition(int *a, int low, int high) {
    int mid = 0;

    if (low < high) { // Divide the array into halves until it has a single element
        mid = (low + high) / 2;
        partition(a, low, mid);       // Sort the first half
        partition(a, mid + 1, high);  // Sort the second half
        mergesort(a, low, mid, high); // Merge the two sorted halves
    }
}

void mergesort(int *a, int low, int mid, int high) {
    int i, m, l, k, temp[20];
    l = low;
    i = low;
    m = mid + 1;

    // Iterate and merge elements of the left and right subarrays
    while (l <= mid && m <= high) {
        if (a[l] <= a[m]) {
            temp[i] = a[l];
            l++;
        } else {
            temp[i] = a[m];
            m++;
        }
        i++;
    }

    // If there are remaining elements in the left subarray, copy them
    while (l <= mid) {
        temp[i] = a[l];
        i++;
        l++;
    }

    // If there are remaining elements in the right subarray, copy them
    while (m <= high) {
        temp[i] = a[m];
        i++;
        m++;
    }

    // Copy the sorted elements back into the original array
    for (k = low; k <= high; k++) {
        a[k] = temp[k];
    }
}
