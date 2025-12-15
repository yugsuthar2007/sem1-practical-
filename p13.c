#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int l;
	clrscr();
	for(l=10;l<=100;l=l+10)
	{
		printf("\nCurrent water level: %d litres",l);
		delay(1000);
		clrscr();
	}
	printf("\nTank is full");
	getch();
}
