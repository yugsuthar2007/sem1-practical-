#include<stdio.h>
int main()
{
    int n,i,prices[100],profit=0;
    printf("Enter number of days: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the price at day %d: ",i+1);
        scanf("%d",&prices[i]);
    }

    printf("\nThe prices are :");
    for(i=0;i<n;i++)
    {
        printf(" %d ",prices[i]);
    }

    for(i=0;i<n;i++)
    {
        if(prices[i+1]>prices[i])
        {
            profit=prices[i+1]-prices[i];
        }
    }
    printf("\nThe maximum profit is %d",profit);

    return 0;
}
