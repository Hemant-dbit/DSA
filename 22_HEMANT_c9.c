/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: To print unique elements in an arraay
*/
#include <stdio.h>

int main() {
    int size, i, j,a,arr[size];
 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");			//input elements in an array
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Unique elements in the array are: ");			//unique elements in an array
    for (i = 0; i < size; i++) {
        a = 1; 
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                a = 0; 
                break;
            }
        }
        if (a==1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
