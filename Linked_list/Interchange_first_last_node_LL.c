// Interchange of first node to last node of linked list.
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
    struct node *temp = 0;
    struct node *loc = 0;
    int i, n;
    printf("Enter the size of linked list elements : ");
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
    // Traversing.
    ptr = start;
    while (ptr->link != NULL)
    {
        printf("%d ", ptr->info);
        prev = ptr;
        ptr = ptr->link;
        loc = ptr;
    }
    printf("%d \n", ptr->info);

    temp = start;
    prev->link = temp;
    loc->link = temp->link;
    temp->link = 0;
    start = loc;
    // traversing.
    ptr = start;

    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}