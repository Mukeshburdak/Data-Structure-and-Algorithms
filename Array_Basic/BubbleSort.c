#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, i, j, num, temp;
    // ptr pointer variable which store array element.
    // num is the size of array.
    // temp is the temporary variable.

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
}
// End of program.