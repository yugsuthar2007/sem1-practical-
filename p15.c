#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i,s;
	clrscr();
	printf("Enter the timer: ");
	scanf("%d",&s);
	for(i=s;i>=0;i--)
	{
		printf("%d",i);
		delay(1000);
		clrscr();
	}
	printf("Countdown completed.");
	getch();
}
