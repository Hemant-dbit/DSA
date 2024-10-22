/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 23/08/2024
Description: Circular Queue with insertion and deletion at both front and rear ends
*/

#include<stdio.h>
#include<stdlib.h>

int queue[5];        // Initialization
int f = -1, r = -1;  // Front and rear

// Function prototypes
void enqueueRear(int);    // Insert at rear
void enqueueFront(int);   // Insert at front
void dequeueRear();       // Delete from rear
void dequeueFront();      // Delete from front
void display();           // Display the queue

// Main method
void main() {
    int ch;    // User choice of operation
    int n1;    // Storing elements
    
    while(1) {
        printf("\n--Queue operation--");
        printf("\n1. Enqueue element at rear");
        printf("\n2. Enqueue element at front");
        printf("\n3. Dequeue element from rear");
        printf("\n4. Dequeue element from front");
        printf("\n5. Display elements of queue");
        printf("\n6. --Exit--");
        
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1: 
                printf("Enter the element to be enqueued at rear: ");
                scanf("%d", &n1);
                enqueueRear(n1);
                break;
            
            case 2: 
                printf("Enter the element to be enqueued at front: ");
                scanf("%d", &n1);
                enqueueFront(n1);
                break;
            
            case 3: 
                dequeueRear();
                break;
            
            case 4: 
                dequeueFront();
                break;
            
            case 5: 
                display();
                break;
            
            case 6: 
                exit(1);
            
            default: 
                printf("Enter a valid number for operation");
                break;
        }  // End of switch
    }      // End of while
}          // End of main

// Enqueue at rear
void enqueueRear(int n) {
    if ((r + 1) % 5 == f) {  // Check if queue is full
        printf("Queue is full");
    } else {
        if (r == -1 && f == -1) {  // Inserting the first element
            r = f = 0;
            queue[r] = n;
        } else {
            r = (r + 1) % 5;  // Circular increment of rear
            queue[r] = n;
        }
    }
}  // End of enqueueRear function

// Enqueue at front
void enqueueFront(int n) {
    if ((r + 1) % 5 == f) {  // Check if queue is full
        printf("Queue is full");
    } else {
        if (r == -1 && f == -1) {  // Inserting the first element
            r = f = 0;
            queue[f] = n;
        } else {
            f = (f - 1 + 5) % 5;  // Circular decrement of front
            queue[f] = n;
        }
    }
}  // End of enqueueFront function

// Dequeue from rear
void dequeueRear() {
    if (r == -1 && f == -1) {  // Check if queue is empty
        printf("Queue is empty");
    } else {
        printf("Dequeued element from rear: %d", queue[r]);
        if (r == f) {  // 
            r = f = -1;
        } else {
            r = (r - 1 + 5) % 5;  // Circular decrement of rear
        }
    }
}  // End of dequeueRear function

// Dequeue from front
void dequeueFront() {
    if (r == -1 && f == -1) {  // Check if queue is empty
        printf("Queue is empty");
    } else {
        printf("Dequeued element from front: %d", queue[f]);
        if (r == f) {  // 
            r = f = -1;
        } else {
            f = (f + 1) % 5;  // Circular increment of front
        }
    }
}  // End of dequeueFront function

// Display function to print the elements of the queue
void display() {
    if (r == -1 && f == -1) {  // Check if queue is empty
        printf("Queue is empty");
    } else {
        int i = f;
        printf("Queue elements are: ");
        while (i != r) {
            printf("%d ", queue[i]);
            i = (i + 1) % 5;
        }
        printf("%d\n", queue[i]);  // Print the last element
    }
}  // End of display function
