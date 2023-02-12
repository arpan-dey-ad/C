#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,i,cube;
	printf("Enter a number: ");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		cube = i*i*i;
		printf("%d\n",cube);
	}
}
