#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
void insert(int n)
{
    struct node *start = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element of linked list : ", i + 1);
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
    Traversal(start);
}
void Traversal(struct node *start)
{
    struct node *ptr = 0;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}

void main()
{
    int n;
    printf("Enter the size of of Linked list : ");
    scanf("%d", &n);
    insert(n);
}
