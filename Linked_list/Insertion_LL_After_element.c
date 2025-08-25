// Inserting an element after a given element in linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
void main()
{
    struct node *start = 0;
    struct node *ptr = 0;
    struct node *loc = 0;
    int i, n, elem;
    printf("Enter the value of linked list elements : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
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
    printf("\nEnter the element after which a new element is enter : ");
    scanf("%d", &elem);

    ptr = start;
    while (ptr->info != elem)
    {
        ptr = ptr->link;
        loc = ptr;
    }

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of new element that insert : ");
    scanf("%d", &new_node->info);
    if (start == NULL)
    {
        start = new_node;
        new_node->link = 0;
    }
    else
    {
        new_node->link = loc->link;
        loc->link = new_node;
    }

    ptr = start;
    printf("Element of linked list are : ");
    while (ptr != NULL)
    {
        printf("%d, ", ptr->info);
        ptr = ptr->link;
    }
}
