// Creating doubly linked list.
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
    struct node *loc1 = 0;
    struct node *loc2 = 0;
    int i, n, loc;
    printf("Enter the size of doubly linked list : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
        scanf("%d", &new_node->info);

        new_node->frow = NULL;
        new_node->back = NULL;

        if (first == NULL)
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
    // traversing.
    ptr = first;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->frow;
    }
    printf("\n");
    ptr = last;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->back;
    }

    // find the location where to insert an element.
    printf("\nEnter the loction of insertion of new element : ");
    scanf("%d", &loc);

    ptr = first;
    for (i = 1; i < loc; i++)
    {
        loc1 = ptr;
        ptr = ptr->frow;
        loc2 = ptr;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the new element : ");
    scanf("%d", &new_node->info);
    loc1->frow = new_node;
    new_node->frow = loc2;
    loc2->back = new_node;
    new_node->back = loc1;

    printf("\nAfter insertion : ");
    ptr = first;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->frow;
    }
    printf("\n");
    ptr = last;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->back;
    }
}