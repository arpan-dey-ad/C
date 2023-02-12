#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two values");
	scanf("%d %d", &a,&b);
	printf("Values before swap %d %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Values after swap %d %d",a,b);	
}
