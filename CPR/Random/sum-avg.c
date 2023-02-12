#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,sum=0, avg;
	//garbage value maybe stored
	for(i=1;i<=10;i++)
	{
		sum = sum + i;
		printf("%d \n",i);
	}
printf("The sum is %d\n",sum);
avg = sum/i;
printf("The avg is %d",avg);
}
