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
    struct node *loc = 0;
    struct node *loc1 = 0;
    struct node *loc2 = 0;
    int i, n, elem;
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
    // deletion of element given by user.
    printf("\nEnter the element that you want to delete : ");
    scanf("%d", &elem);
    ptr = first;
    while (ptr->info != elem)
    {
        loc1 = ptr;
        ptr = ptr->frow;
        loc2 = ptr;
    }
    //
    loc1->frow = loc2->frow;
    loc2->frow->back = loc2->back;

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