#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[10], i, j, temp = 0;
    printf("Enter the element of array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    //
    for (j = 1; j < 10; j++)
    {
        temp = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > temp)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = temp;
    }
    printf("your array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}