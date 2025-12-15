#include<stdio.h>
#include<conio.h>
void main()
{
	int u,sum=21,c,x;
	clrscr();
	while(sum>1)
	{
	printf("\nEnter the number of matchsticks you want to pick between 1 to 4\n");
	scanf("%d",&u);
	if(u<0||u>4)
	{
		printf("\nInvalid input");
	}
	else
	{
		c=5-u;
		printf("\nComputer picks %d",c);
		sum=sum-(c+u);

	}
	printf("\nTotal sticks left to be picked: %d",sum);


	}
	printf("\n1 stick is left to pick by you therefore Computer wins");
	getch();
}
