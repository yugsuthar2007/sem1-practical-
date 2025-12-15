#include<stdio.h>
#include<conio.h>
void main()
{
	int m,fa,a,x,y;
	clrscr();
	printf("Enter the respective number for items\n1-Burger:150\n2-Pizza:200\n3-Pasta:120\n4-Sandwich:100\n5-French Fries:80\nEnter 0 to exit\n");
	fa=0;
	x:scanf("%d",&m);
	switch(m)
	{
		case 1:
		fa=fa+150;
		break;
		case 2:
		fa=fa+200;
		break;
		case 3:
		fa=fa+150;
		break;
		case 4:
		fa=fa+100;
		break;
		case 5:
		fa=fa+80;
		break;
		case 0:
		goto y;
		default:
		printf("Item not on menu");
	}
	goto x;
	y:printf("Your total bill amount is %d",fa);
	getch();
}

