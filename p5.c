#include<stdio.h>
#include<conio.h>
void main()
{
	long int lm,lw,p,w,m,ilm,ilw,l;
	float prew,lit,litw,litm;
	clrscr();
	p=1441981744;
	prew=48.8;
	w=prew*p/100;
	m=p-w;
	lit=85.95;
	l=p*lit/100;
	litm=80.95;
	lm=m*litm/100;
	litw=62.84;
	lw=w*litw/100;
	ilm=m-lm;
	ilw=w-lw;
	printf("Total number of literate people are: %d",l);
	printf("\nTotal number of illiterate men are: %d",ilm);
	printf("\nTotal number of illitrate women are: %d",ilw);
	getch();
}

