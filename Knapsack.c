#include <stdio.h>
#include <stdlib.h>

int max(int n, int m)
{
    if (n >= m){
    return n;
    }
    else
    {
        return m;
    }
}

void knapsack(int n, int w, int weight[], int value[])
{
    int i, j, p, v;
    int arr[n+1][w+1];

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
            else if (weight[i - 1] <= j)
            {
                p = value[i - 1] + arr[i - 1][j - weight[i - 1]];
                v = max(p, arr[i - 1][j]);
                arr[i][j] = v;
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    printf("Your matrix is : \n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= w; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int w, n, i, loc, min, j, swap, swap1;

    printf("Enter the weight do want to fillout: ");
    scanf("%d", &w);
    printf("Enter the value of weight size : ");
    scanf("%d", &n);

    int weight[n], value[n];
    printf("Enter the weight : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the weight[%d] : ", i + 1);
        scanf("%d", &weight[i]);
        printf("Enter profit of weight : ");
        scanf("%d", &value[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        loc = i;
        min = weight[i];
        for (j = i + 1; j < n; j++)
        {
            if (min > weight[j])
            {
                min = weight[j];
                loc = j;
            }
        }
        swap = weight[loc];
        swap1 = value[loc];
        weight[loc] = weight[i];
        value[loc] = value[i];
        weight[i] = swap;
        value[i] = swap1;
    }

    printf("your sorted array with profit: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d -> ", weight[i]);
        printf("%d ", value[i]);
        printf("\n");
    }

    knapsack(n, w, weight, value);
    return 0;
}