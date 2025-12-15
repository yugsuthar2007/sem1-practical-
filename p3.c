
#include<stdio.h>
#include<conio.h>
void main()
{
	float w,h,bmi;
	clrscr();
	printf("Enter your weight in kg: ");
	scanf("%f",&w);
	printf("Enter your height in meters: ");
	scanf("%f",&h);
	bmi=w/(h*h);
	printf("Your calculated BMI is %f",bmi);
	getch();

}
