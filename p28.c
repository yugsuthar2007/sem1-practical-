#include<stdio.h>

union books
{
	char book_title[25];
	int price;
	char book_author[25];
	int availability;
	int accession_number;
};

int main()
{
	union books book;
	printf("Enter book title:");
	gets(book.book_title);
	printf("\nThe book is:");
	puts(book.book_title);
	printf("\nEnter the name of Author:");
	gets(book.book_author);
	printf("\nAuthor:");
	puts(book.book_author);
	printf("\nEnter the price of book:");
	scanf("%d",&book.price);
	printf("\nThe price of book is:%d",book.price);
	printf("\nEnter the availability of book:");
	scanf("%d",&book.availability);
	if(book.availability==1)
	{
		printf("\nBook is available");
	}
	else if(book.availability==0)
	{
		printf("\nBook is unavailable");
	}
	else
	{
		printf("\nInvalid number entered");
	}
	printf("\nEnter the accession number is:");
	scanf("%d",&book.accession_number);
	printf("\nThe accession number is:%d",book.accession_number);
	return 0;
}
