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
    struct node *avail = 0;
    struct node *locp = 0;
    int i, n, loc;
    printf("Enter the value of linked list element that do you want : ");
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
    // traversing.
    printf("The elements of linked list are : ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }

    printf("\nEnter the loction of element that you want to delete : ");
    scanf("%d", &loc);
    ptr = start;
    for (i = 1; i < loc; i++)
    {
        prev = ptr;
        ptr = ptr->link;
        locp = ptr;
    }
    prev->link = locp->link;
    locp->link = avail;
    avail = locp;

    printf("\nThe new elements of linked list are : ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}