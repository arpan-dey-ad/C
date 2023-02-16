#include<stdio.h>
void main()
{
    int a,b,c;
    char op;
    printf("enter a number: ");
    scanf("%d %d",&a,&b);
    printf("enter operator: ");
    scanf("%c",&op);
    switch(op)
    {
    case '+':
        c=a+b;
        printf("%d+%d=%d",a,b,c);
        break;
    case '-':
        c=a-b;
        printf("%d-%d=%d",a,b,c);
        break;
    case '*':
        c=a*b;
        printf("%d*%d=%d",a,b,c);
        break;
    case '/':
        c=a/b;
        printf("%d/%d=%d",a,b,c);
        break;
    default:
        printf("error");
    }
}