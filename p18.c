#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,r,c;
	clrscr();
	printf("Enter number of tables vertically:");
	scanf("%d",&n);
	printf("Enter the size of tables horizontally:");
	scanf("%d",&i);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=i;c++)
		{
			printf("%d\t",r*c);
		}
		printf("\n");
	}
	getch();
}
