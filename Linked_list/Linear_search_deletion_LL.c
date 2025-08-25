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
    struct node *temp = 0;
    struct node *avail = 0;
    struct node *last = 0;
    struct node *prev = 0;
    struct node *locp = 0;
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
    printf("\nEnter the element that you want to delete :");
    scanf("%d", &elem);
    ptr = start;
    while (ptr->info != elem)
    {
        ptr = ptr->link;
        loc++;
    }
    loc = loc + 1;
    printf("\nloc = %d", loc);

    if (loc == 1)
    { // Deletion of first node.
        temp = start;
        start = start->link;
        temp->link = avail;
        avail = temp;
    }
    else if (loc == n)
    { // Deletion of last node.
        ptr = start;
        while (ptr->link != NULL)
        {
            locp = ptr;
            ptr = ptr->link;
        }
        last = ptr;
        locp->link = 0;
        last->link = avail;
        avail = last;
    }
    else
    { // Deletion of element at given loction.
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
    }

    // deletion of this element after that.
    printf("\nAfter deletion of given element linked list are : ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}
// End of program.