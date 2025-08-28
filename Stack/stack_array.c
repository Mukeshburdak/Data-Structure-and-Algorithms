// Stack implemantion using array.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *stack, n, i = 0;
    int Top = 0;
    printf("Enter the Size of stack : ");
    scanf("%d", &n);
    stack = (int *)malloc(n * (sizeof(int)));
    while (i < n)
    {
        printf("Enter the [%d] element :", Top);
        scanf("%d", &stack[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", stack[i]);
        i++;
    }
    Top = n - 1;
    // Insertion in stack is from Top;
    Top = Top + 1;
    printf("\nEnter the new Element in stack : ");
    scanf("%d", &stack[Top]);

    i = 0;
    printf("After inserting a new element : ");
    while (i <= Top)
    {
        printf("%d ", stack[i]);
        i++;
    }

    // Deletion from stack is from top;
    printf("\nAfter deletion of an element : ");
    Top = Top - 1;
    i = 0;
    while (i <= Top)
    {
        printf("%d ", stack[i]);
        i++;
    }
}
//Exit