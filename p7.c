#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter your age: ");
	scanf("%d",&a);
	a<12?printf("Free Entry"):printf("Pay 20 rupees");
	getch();

}
