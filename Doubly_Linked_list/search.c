// Searching of element in 2-way linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *frow;
    struct node *back;
};

void main()
{
    struct node *first = 0;
    struct node *last = 0;
    struct node *ptr = 0;
    int i, n, elem, loc = 0;
    printf("Enter the size of 2-way linked list : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
        scanf("%d", &new_node->info);
        new_node->frow = NULL;
        new_node->back = NULL;

        if (first == 0)
        {
            first = new_node;
            last = new_node;
        }
        else
        {
            last->frow = new_node;
            new_node->back = last;
            last = new_node;
        }
    }
    // Traversing.
    printf("Linked in forward : ");
    ptr = first;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->frow;
    }
    printf("\nLinked list in backward : ");
    ptr = last;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->back;
    }
    // Searching an element.
    printf("\nEnter the element that you want to search : ");
    scanf("%d", &elem);
    ptr = first;
    for (i = 0; i < n; i++)
    {
        if (ptr->info == elem)
        {
            loc = 1;
        }
        else
        {
            loc = 0;
            ptr = ptr->frow;
        }
    }
    if (loc == 1)
    {
        printf("Element exist :");
    }
    else
    {
        printf("Element does not exist : ");
    }
}
// End of program.