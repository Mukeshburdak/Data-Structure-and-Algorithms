// WAP to print the largest and second largest element from an array.

#include <stdio.h>
#include <stdlib.h>

void main()
{
   int num, m;                 // m is variable which store place where new element is insert.
   int *ptr, i, large, slarge; // ptr is pointer variable which store element of array.
   // num variable which store no. of element in array.
   // large is variable which store larger value of element of array.

   printf("Enter how many element do you want for array : ");
   scanf("%d", &num);

   ptr = (int *)malloc(num * sizeof(int));

   for (i = 0; i < num; i++)
   {
      printf("\nEnter your [%d] element of array : ", i); // user input of array element.
      scanf("%d", &ptr[i]);
   }

   // printing of array elements.
   printf("\n{");

   for (i = 0; i < num; i++)
   {
      printf("%d, ", ptr[i]);
   }
   printf("}");

   // printing of largest element.
   large = ptr[0];
   for (i = 1; i < num; i++)
   {
      if (ptr[i] >= large)
      {
         large = ptr[i];
      }
   }

   printf("\nlargest element of array is : %d", large);

   // printing of second largest element.

   slarge = ptr[0];
   for (i = 0; i < num; i++)
   {
      if (ptr[i] < large)
      {
         if (ptr[i] >= slarge)
         {
            slarge = ptr[i];
         }
      }
   }

   printf("\nSecond largest element of array is : %d", slarge);
}