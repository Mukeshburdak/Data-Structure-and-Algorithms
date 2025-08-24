// WAP to find the location of the array element using Linear Search.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, i, *ptr, n; // Here num is store the size of array.
                         // ptr is pointer variable which store address of array elements.
    /*Here n is variable which store a particular element given by user
     of find of its loction.*/
    printf("Enter the size of array do you want : ");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        printf("\nEnter the [%d] element of array : ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\nEnter the number do you want to find location : ");
    scanf("%d", &n);
    for (i = 0; i < num; i++)
    {
        if (ptr[i] == n)
        {
            printf("\nloction of the element is [%d] ", i);
        }
    }
}