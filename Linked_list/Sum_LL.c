// Sum of linked list elements after creating linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void main()
{
    struct node *start = 0; // start is store the the address of first element.
    int sum = 0, i, n;
    // n is variable which store the size of linked list.
    // Sum is variable which store the sum of linked list element.
    printf("Enter the size of linked list : ");
    scanf("%d", &n);

    // Taking user input of linked list elements.
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element :", i);
        scanf("%d", &new_node->info);
        if (start == NULL)
        {
            start = new_node;
            new_node->link = 0;
        }
        else
        {
            new_node->link = start;
            start = new_node;
        }
    }
    // Traversing of linked list elements.

    struct node *ptr = 0;
    ptr = start;
    while (ptr != NULL)
    {
        sum = sum + ptr->info;
        ptr = ptr->link;
    }
    printf("\nSum of linked list element are : %d", sum);
    // printing of sum of linked list element.
}
// End of program.