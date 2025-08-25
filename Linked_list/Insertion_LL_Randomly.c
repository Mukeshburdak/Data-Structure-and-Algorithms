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
   int i, n, loc, m;
   struct node *beg;
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
   beg = ptr;
   // Take input where to insert the new element.
   printf("\nEnter the loction of new element insert : ");
   scanf("%d", &loc);

   ptr = start;
   for (i = 1; i < loc; i++)
   {
      ptr = ptr->link;
   }
   //

   struct node *new_node = (struct node *)malloc(sizeof(struct node));
   // new_node->link=0;
   printf("Entering new  linked list element: ");
   scanf("%d", &new_node->info);

   if (loc == 0)
   {
      new_node->link = start;
      start = new_node;
   }
   else
   {
      new_node->link = ptr->link;
      ptr->link = new_node;
   }

   // Traversing of elements.
   printf("Element of linked list are : ");
   ptr = start;
   while (ptr != NULL)
   {
      printf("%d ", ptr->info);
      ptr = ptr->link;
   }
}
// End of Program.