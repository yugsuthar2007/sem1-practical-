#include<stdio.h>
int main()
{
    int i,j,n,k,a,b,ch;
    char X,Y,e;
    int r[10][5] = {{0}};

    printf("---Welcome to Movie Theatre---\n");
    Y:
    printf("Press\n1]Show seat matrix\n2]Book tickets\n3]Cancel Tickets\n4]Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {


        case 1:
        printf("\nSeating Chart: ");
        for(i=0;i<6;i++)
        {
            printf("\nRow %d:",i+1);
            for(j=0; j<10; j++)
            {
                printf("%d",r[i][j]);
            }
            printf("\n");
        }
        goto Y;

        case 2:
        printf("\nSeating Chart: ");
        for(i=0;i<6;i++)
        {
            printf("\nRow %d:",i+1);
            for(j=0; j<10; j++)
            {
                printf("\t%d",r[i][j]);
            }
            printf("\n\n");
        }
        printf("\nHow many seats you want to book ? ");
        scanf("%d",&n);

        for(k=0; k<n; k++)
        {
            printf("Enter the row number: ");
            scanf("%d",&a);
            printf("Enter the column number: ");
            scanf("%d",&b);

            r[a][b] = 'X';
        }
        goto Y;

        case 3:
        printf("\nHow many seats you want to cancel ? ");
        scanf("%d",&n);

        for(k=0; k<n; k++)
        {
            printf("Enter the row number: ");
            scanf("%d",&a);
            printf("Enter the column number: ");
            scanf("%d",&b);

            r[a][b] = 0;
        }
        goto Y;

        case 4:
            printf("\nExiting...");
            goto e;

        default:
            printf("\nEnter a valid number");
            goto Y;

    }
    e:
    return 0;
}
