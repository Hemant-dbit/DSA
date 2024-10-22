/*
Roll no : 22
Batch: A
Author name: Hemant Gupta
Date: 10/10/2024
 Description: Program to implement Binary search
 */


#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        // Calculate the mid-point
        int mid = (left + right) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;  // Target found, return index
        }

        // If target is smaller, ignore the right half
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // If target is larger, ignore the left half
        else {
            left = mid + 1;
        }
    }
    // Target not found
    return -1;
}

int main() {
    int n, target, i;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for the array elements (assume sorted input)
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Calling binary search function
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
