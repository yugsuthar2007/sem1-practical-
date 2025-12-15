#include <stdio.h>

void sortPrices(double *arr, int n)
{
    int i, j;
    double temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    #define MAX_ITEMS 100
    double prices[MAX_ITEMS];
    int n, i;

    printf("Input the number of items (max %d): ", MAX_ITEMS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_ITEMS)
    {
        printf("Error: Invalid number of items entered.\n");
        return 1;
    }

    printf("Provide the prices of these items:\n");
    for (i = 0; i < n; i++)
    {
        printf("Price %d: ", i + 1);
        if (scanf("%lf", &prices[i]) != 1)
        {
            printf("Error: Invalid input for price.\n");
            return 1;
        }
    }

    sortPrices(prices, n);

    printf("\nSorted Prices: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f", *(prices + i));
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
