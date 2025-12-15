#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	printf("Enter your marks: ");
	scanf("%d",&m);
	m>=90?printf("Grade A"):m>=80?printf("Grade B"):m>=70?printf("Grade C"):m>=60?printf("Grade D"):printf("Fail");
	getch();
}
