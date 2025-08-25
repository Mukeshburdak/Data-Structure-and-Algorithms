// Creating a sorted linked list and traversing the elements.
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
   int i, n, item;
   struct node *prev = 0;
   struct node *loc = 0;

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
   printf("Element of linked list are :");
   struct node *ptr = 0;
   ptr = start;
   while (ptr != NULL)
   {
      printf("\n%d", ptr->info);
      ptr = ptr->link;
   }
   printf("\nEnter the value of element which insert in sorted linked list : ");
   scanf("%d", &item);
   if (start == NULL)
   {
      loc = 0;
   }
   if (item < start->info)
   {
      loc = 0;
   }
   prev = start;
   ptr = start->link;
   while (ptr != NULL)
   {
      if (item > ptr->info)
      {
         loc = prev;
      }
      prev = ptr;
      ptr = ptr->link;
   }
   loc = prev;
   printf("The loction of element where to insert an element : %d", loc->info);
}
// End of Program.