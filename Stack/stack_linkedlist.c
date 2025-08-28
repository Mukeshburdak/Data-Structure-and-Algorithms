#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
void main()
{
    struct node *Top = 0;
    struct node *ptr = 0;
    int i, n;
    printf("Enter the size element of stack : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i + 1);
        scanf("%d", &new_node->info);

        if (Top == NULL)
        {
            Top = new_node;
            new_node->link = 0;
        }
        else
        {
            new_node->link = Top;
            Top = new_node;
        }
    }

    // Traversing
    ptr = Top;
    printf("your stack using Linked List : \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
    // Insertion from starting.

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the new  element [%d] : ", i + 1);
    scanf("%d", &new_node->info);

    if (Top == NULL)
    {
        Top = new_node;
        new_node->link = 0;
    }
    else
    {
        new_node->link = Top;
        Top = new_node;
    }
    // Traversing after inserting an new element.
    ptr = Top;
    printf("your stack using Linked List : \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }


    //deleting an element from stack.

    Top = Top->link;
    ptr = Top;
    printf("\nAfter deleting an element : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}
//Exit.