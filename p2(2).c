#include<stdio.h>
#include<conio.h>
void main()
{
	int a,p,l,b,ch;
	clrscr();
	do
	{
		printf("\nEnter 1 for calculating area and perimeter and 2 for exiting: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\nEnter the lenght of the park in kilometer: ");
				 scanf("%d",&l);
				 printf("\nEnter the breadth of the park in kilometer: ");
				 scanf("%d",&b);
				 if(l<0||b<0)
				 {
					printf("\nPlease enter an accurate positive integer");
				 }
				 else
				 {
					a=l*b;
					p=2*(l+b);
					printf("\nPerimeter of the park is %d",p);
					printf("\nArea of the park is %d",a);
				 }
				 break;
			case 2 : printf("Thank you");
				 break;
			default : printf("\nInvalid input");
		}
	}
	while(ch!=2);
	getch();
}
