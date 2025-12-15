#include<stdio.h>
#include<conio.h>
int main()
{
	int wa,b=5000,ch;
	clrscr();
	do
	{
		printf("\nEnter 1 for checking balance, 2 for withdrawing money and 3 for exiting: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\nYour balance is %d",b);
			break;

			case 2 : printf("\nEnter amount you want to withdraw: ");
				 scanf("%d",&wa);
				 if(wa<=b)
				 {
					b=b-wa;
					printf("\nYour balance is %d",b);
				 }
				 else
				 {
					printf("\nInsufficient balance");
				 }
				 break;
			default : printf("Enter valid input");
		}
	}
	while(ch!=3);
	getch();
}

