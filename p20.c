#include<stdio.h>
void main()
{
    int rs[25],as[25],i;
    for(i=0;i<25;i++)
    {
        printf("enter the registered ID of participant:");
        scanf("%d",&rs[i]);
    }
    for( i=0;i<24;i++)
    {
        printf("participants who attended are:");
        scanf("%d",&as[i]);
    }
    for(i=0;i<25;i++)
    {
        if(rs[i]!=as[i])
        {
            printf("absent participant is :%d",rs[i]);
            break;
        }

    }
}

