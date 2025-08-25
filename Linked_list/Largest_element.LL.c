// largest element in linked list.
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
    int temp = 0, max = 0;
    int i, n;
    printf("Enter the size of linked list element : ");
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
    printf("Element of linked list : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }

    // Greatest element in linked list.
    ptr = start;
    max = ptr->info;
    while (ptr != NULL)
    {
        if (max <= ptr->info)
        {
            temp = max;
            max = ptr->info;
            ptr->info = temp;
            ptr = ptr->link;
        }
        else
        {
            ptr = ptr->link;
        }
    }
    printf("\n%d", max);
}