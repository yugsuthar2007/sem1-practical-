#include<stdio.h>
#include<conio.h>
void main()
{
	int m=1;
	float d=0.5;
	clrscr();
	while(1)
	{
		printf("\nMinute %d:Distance covered is %.2f",m,d);
		m=m+1;
		d=d+0.5;
		if(d==10.0)
		{
			break;
		}
	}
	getch();
}
