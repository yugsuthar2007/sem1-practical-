#include<stdio.h>
#include<conio.h>
void main()
{
	long int l,b,a,p,f,g;
	clrscr();
	printf("Enter lenght and breadth of park ");
	scanf("%ld %ld",&l,&b);
	if(l>0 && b>0)
	{
		a=l*b;
		p=2*(l+b);
		f=p*30;
		g=a*70;
		printf("Perimeter of the park is %ld",p);
		printf("\nArea of the park is %ld",a);
		printf("\nCost of fencing the park is %ld",f);
		printf("\nCost of grass laying will be %ld",g);
	}
	else
	{
		printf("Please enter valid positive number");
	}
	getch();
}
