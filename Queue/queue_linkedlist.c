// Creating a queue using linked list.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
void main()
{
    struct node *front = 0;
    struct node *rear = 0;
    struct node *ptr = 0;
    int i, n;

    printf("Enter the size of queue : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i + 1);
        scanf("%d", &new_node->info);
        if (front == NULL)
        {
            front = new_node;
            rear = new_node;
            new_node->link = 0;
        }
        else
        {
            rear->link = new_node;
            rear =new_node;
            new_node->link = 0;
        }
    }
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}