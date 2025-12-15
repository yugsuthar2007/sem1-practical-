#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter your age: ");
	scanf("%d",&a);
	a<18?printf("You are not eligible to open an account"):printf("You are eligible to open an account");
	getch();
}
