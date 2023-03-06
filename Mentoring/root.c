#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d, x1, x2;
    printf("Enter Co-efficient of x-square: ");
    scanf("%d",&a);
    printf("Enter Co-efficient of x: ");
    scanf("%d",&b);
    printf("Enter Co-efficient of constant: ");
    scanf("%d",&c);
    d = sqrt(b*b - 4*a*c);
    x1 = b+d/2*a;
    x2 = b-d/2*a;
    printf("First root is %d\n",x1);
    printf("Second root is %d",x2);
}