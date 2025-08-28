#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *array, n, i = 0;
    int min = 0, j = 0, loc = 0, temp = 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    printf("Enter the element of array : ");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %d element: ",i);
        scanf("%d", &array[i]);
    }

    printf("After applying selection sort alogorithm array is : ");
    for (i = 0; i < n - 1; i++)
    {
        loc = i;
        min = array[i];
        for (j = i + 1; j < n; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                loc = j;
            }
        }
        temp = array[loc];
        array[loc] = array[i];
        array[i] = temp;
    }
    // printing of array element.
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
