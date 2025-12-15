#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,n=5;
	clrscr();
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n*2-1;c++)
		{
			if(c==r || c==(2*n-r))
			{
				printf("%d",c);
			}
			else if(r==1)
			{
				printf("%d",c);
			}
			else
			{
				printf(" ");
			}
		 }
		 printf("\n");
	}
	getch();
}
