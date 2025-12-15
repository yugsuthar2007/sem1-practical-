#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	for(n=1;n<=50;n++)
	{
		if(n%50==0)
		{
			printf("\nBook ID: %d (Special Edition",n);
		}
		else
		{
			printf("\nBook ID: %d",n);
		}
	}
	getch();
}
