// Creating linked list from ending.
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
    struct node *prev = 0;
    int i, n;
    printf("Enter the size of element do you want to insert :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
        scanf("%d", &new_node->info);
        if (start == NULL)
        {
            start = new_node;
            prev = new_node;
        }
        else
        {
            prev->link = new_node;
            prev = new_node;
        }
        prev->link = NULL;
    }
    // Traversing of element.
    ptr = start;
    printf("Elements of linked list are : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
} // End of program.