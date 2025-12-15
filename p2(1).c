#include<stdio.h>
#include<conio.h>
void main()
{
	long int l,b,a,p,f,g;
	clrscr();
	l=70;
	b=90;
	a=l*b;
	p=2*(l+b);
	f=p*30;
	g=a*70;
	printf("Perimeter of the park is %ld",p);
	printf("\nArea of the park is %ld",a);
	printf("\nCost of fencing the park is %ld",f);
	printf("\nCost of grass laying will be %ld",g);
	getch();
}
