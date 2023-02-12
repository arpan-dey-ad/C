#include<stdio.h>
void main()
{
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if (year%400==0)
	printf("year is leap");
	else if (year%100==0)
	printf("year is not leap");
	else if (year%4==0)
	printf("year is leap");
	else 
	printf("year is not leap");
}
