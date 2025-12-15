#include<stdio.h>
#include<conio.h>
void main()
{
	long int a;
	clrscr();
	printf("Enter total amount: ");
	scanf("%ld",&a);
	if(a<1000)
	{
		printf("\nNo Discount");
	}
	else if(a<=5000)
	{
		printf("\nYou get 10 percent discount\nAmount after discount is: ");
		printf("%f",a-a*10/100.0);
	}
	else
	{
		printf("\nYou get 20 percent discount\nAmount after discount is ");
		printf("%f",a-a*20/100.0);
	}
	getch();
}
