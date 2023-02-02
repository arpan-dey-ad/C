#include<stdio.h>
void main()
{
	//max 18,446,744,073,709,551,615 
	unsigned long long int i,d,f=1;
	printf("Enter a numnber: ");
	scanf("%llu",&d);
	//first condition is checked then increment operator is excuted
	for(i=1;i<=d;i++)
	{
		f=f*i;
	}
	printf("Factorial of %llu = %llu",d,f);
}
