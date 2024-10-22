/*
Name: Hemant Gupta
Roll No: 22
Batch - A
Program - Program to implement BFS
*/

#include <stdio.h>
#include <stdlib.h>

// Initializing arrays
int visited[20];
int graph[20][20];
int queue[20];
int front = -1, rear = -1; // Queue initialization condition

// Function prototypes
void bfs(int a, int n);
void enqueue(int x);
int dequeue();

// Start of main function
void main() {
    // Declaring variables
    int i, j, a, n;

    // Accepting number of elements in array
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Input adjacency matrix
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Enter 1 if %d has an edge with %d else 0: ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }
 printf("The Adjacency Matrix is:\n");

    // Display the adjacency matrix
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    // Initialize visited array
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    // Accepting source vertex
    printf("Enter the source vertex: ");
    scanf("%d", &a);

    bfs(a, n); // Calling bfs function
} // End of main function

// Start of bfs function
void bfs(int a, int n) {
    int p, i;
    enqueue(a);
    visited[a] = 1;
    p = dequeue();

    if (p != 0) {
        printf("%d ", p);
    }

    // BFS traversal
    while (p != 0) {
        for (i = 1; i <= n; i++) {
            if ((graph[p][i] != 0) && (visited[i] == 0)) {
                enqueue(i);
                visited[i] = 1;
            }
        }
        p = dequeue();
        if (p != 0) {
            printf("%d ", p);
        }
    }
// To handle disconnected components
    for (i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            bfs(i, n);
        }
    }
} // End of bfs function

// Start of enqueue function
void enqueue(int x) {
    if (rear == 19) {
        printf("Queue full\n");
    } else {
        if (rear == -1) {
            queue[++rear] = x;
            front++;
        } else {
            queue[++rear] = x;
        }
    }
} // End of enqueue function

// Start of dequeue function
int dequeue() {
    int k;
    if ((front > rear) || (front == -1)) {
        return 0;
    } else {
        k = queue[front++];
        return k;
    }
} // End of dequeue function
