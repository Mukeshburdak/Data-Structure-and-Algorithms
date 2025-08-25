// merging of two linked list.
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
    struct node *start1 = 0;
    struct node *ptr = 0;
    struct node *temp = 0;
    int i, n, m;

    printf("Enter size of element of first linked list : ");
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
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        temp = ptr;
        ptr = ptr->link;
    }

    printf("\nEnter size of element of second linked list : ");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i);
        scanf("%d", &new_node->info);
        if (start1 == NULL)
        {
            start1 = new_node;
            new_node->link = 0;
        }
        else
        {
            new_node->link = start1;
            start1 = new_node;
        }
    }
    ptr = start1;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
    temp->link = start1;

    // after merging of 2 linked list.
    printf("\n Linked list element are : ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}