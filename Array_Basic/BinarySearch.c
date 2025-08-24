#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, i, j, num, temp;
    // ptr pointer variable which store array element.
    // num is the size of array.
    // temp is the temporary variable.

    int item, ub, lb, beg, end, mid, loc = 0;
    // item is variable which store the element which user search.
    // ub is upper bound element of array.
    // lb is lower bound element of array.
    // mid temporary variable.
    // beg and end are location of beginner and ending.
    // loc is store loction of searching element.

    printf("Enter your size of array : "); // user input of array size.
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int)); // Dynamic memory allocation.

    for (i = 0; i < num; i++)
    {
        printf("Enter the [%d] element of array : ", i); // user input of array elements.
        scanf("%d", &ptr[i]);
    }

    // Printing of array elements.

    printf("Printing of array elements:");
    printf("\n{");

    for (i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }

    printf("}");
    // Apply opertion to sorting an array elements.

    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (ptr[j] >= ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    // Printing of sorted array elements.

    printf("\nPrinting of sorted array elements: ");
    printf("\n{");

    for (i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("}");

    // initilization.
    lb = 1, ub = num;
    beg = lb, end = ub, mid = ((beg + end) / 2);

    printf("\nEnter the element for searching : "); // user input for which element to search.
    scanf("%d", &item);

    while (beg <= end && ptr[mid] != item)
    {
        if (item < ptr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = ((beg + end) / 2);
    }

    if (ptr[mid] == item)
    {
        loc = mid + 1;
    }
    else
    {
        loc = 0;
    }

    // Printing of loction of searched element.

    if (loc != 0)
    {
        printf("Location of element exist and is: %d ", loc);
    }
    else
    {
        printf("Location of element does not exists.");
    }
}
// End of program.