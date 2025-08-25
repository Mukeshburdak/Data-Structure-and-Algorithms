// Linear searching of an element in linked list.
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
    int i, n, elem, loc = 0;
    printf("Enter the value of elements do you want in linked list : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
        scanf("%d", &new_node->info);
        if (start == 0)
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
    // Traversing of element.
    ptr = start;
    while (ptr != 0)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }

    // Searching an element .
    printf("\nEnter the element do that do you want for searching :");
    scanf("%d", &elem);
    ptr = start;
    while (ptr->info != elem)
    {
        loc++;
        ptr = ptr->link;
    }
    if (loc == 0)
    {
        printf("Element does not exits : ");
    }
    printf("\nElement exits and loction is : %d ", loc + 1);
}