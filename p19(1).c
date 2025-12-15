#include<stdio.h>
#include<conio.h>
void main()
{
	int c,r;
	clrscr();
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
				printf("1");
		}
		printf("\n");
	}
	getch();
}
