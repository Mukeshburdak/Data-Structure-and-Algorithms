// Creating a linked list and traversing the elements.
#include <stdio.h>
#include <stdlib.h>

struct node
{
   int info;
   struct node *link;
};
void main()
{
   struct node *start = 0; // start is store the the address of first element.
   int i, n;
   // n is variable which store the size of linked list.
   printf("Enter the value of linked list elements : ");
   scanf("%d", &n);
   // User element of linked list.
   for (i = 0; i < n; i++)
   {
      struct node *new_node = (struct node *)malloc(sizeof(struct node));

      printf("Entering [%d] linked list element: ", i);
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
   // Traversing of elements.
   printf("Element of linked list are : ");
   struct node *ptr = 0;
   ptr = start;
   while (ptr != NULL)
   {
      printf("%d ", ptr->info);
      ptr = ptr->link;
   }
}
// End of Program.