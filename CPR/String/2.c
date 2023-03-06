#include<stdio.h>
void main(void)
{
    char str[100];
    int count=0, i;
    printf("Enter any string: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
        count++;
    printf("\nLength of the String = %d", count);
}