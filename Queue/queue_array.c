// Impelement program using array.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int front, rare, *queue, i, n;

    printf("Enter the size of element of Queue : ");
    scanf("%d", &n);
    queue = (int *)malloc(n * (sizeof(int)));

    front = 0;
    rare = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element [%d] :", i + 1);
        scanf("%d", &queue[i]);
        rare = rare + 1;
    }

    // Element of queue.
    printf("\nElement of queue are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", queue[i]);
    }
    // Deleting an exisiting element
    printf("\nAfter deleting an element from queue : ");
    front = front + 1;
    for (i = front; i < rare; i++)
    {
        printf("%d ", queue[i]);
    }
}