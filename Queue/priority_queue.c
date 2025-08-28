// Write a c program to insert an element in the priority queue.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void main()
{
    struct node *Front = 0;
    struct node *Rear = 0;
    struct node *ptr = 0;
    struct node *prev = 0;
    struct node *loc = 0;
    int i, n;
    printf("Enter the size of queue element : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the [%d] element : ", i + 1);
        scanf("%d", &new_node->info);

        new_node->link = NULL;
        if (Front == NULL)
        {
            Front = new_node;
            Rear = new_node;
        }
        else
        {
            ptr = Front;
            prev = NULL;
            while (ptr != NULL && (ptr->info <= new_node->info))
            {
                prev = ptr;
                ptr = ptr->link;
            }
            if (prev == NULL)
            {
                new_node->link = Front;
                Front = new_node;
            }
            else if (ptr == NULL)
            {
                Rear->link = new_node;
                Rear = new_node;
            }
            else
            {
                prev->link = new_node;
                new_node->link = ptr;
            }
        }
    }
    printf("Priority queue : ");
    ptr = Front;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}