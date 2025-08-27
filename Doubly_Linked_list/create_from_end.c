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
    int i, n;
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
}