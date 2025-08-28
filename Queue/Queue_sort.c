#include <stdio.h>
#include <stdlib.h>

void insert(int *queue, int *rear, int n, int item) {
    if (*rear >= n) {
        printf("Queue Overflow! Cannot insert more elements.\n");
        return;
    }

    int i = *rear - 1;

   
    while (i >= 0 && queue[i] > item) {
        queue[i + 1] = queue[i];
        i--;
    }
    
    queue[i + 1] = item; // Insert the item at the correct position
    (*rear)++; // Increase the rear index
}

void main() {
    int *queue, n, i, item, rear = 0;

    printf("Enter the size of queue: ");
    scanf("%d", &n);
    
    queue = (int *)malloc(n * sizeof(int));
    if (queue == NULL) {
        printf("Memory allocation failed\n");
    }

    // Accept elements from the user
    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &queue[i]);
        rear++;
    }

    // Sort the queue (Bubble Sort)
    for (i = 0; i < rear - 1; i++) {
        for (int j = 0; j < rear - i - 1; j++) {
            if (queue[j] > queue[j + 1]) {
                int temp = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = temp;
            }
        }
    }

    // Insert an element
    printf("Enter the element to insert: ");
    scanf("%d", &item);
    insert(queue, &rear, n, item);

    // Print the queue
    printf("Updated priority queue: ");
    for (i = 0; i < rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");

    free(queue); // Free up allocated memory
}
