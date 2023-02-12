#include<stdio.h>
void main()
{
    int marks,i;
    printf("Enter marks: ");
    scanf("%d",&marks);
    i=marks/10;
    switch(i)
    {
    case 10:
        printf("Outstanding");
        break;
    case 9:
        printf("Excellent");
        break;
    case 8:
        printf("Well Done");
        break;
    case 7:
        printf("Good");
        break;
    case 6:
        printf("Improve Yourself");
        break;
    case 5:
        printf("Almost on the verge of failing");
        break;
    default:
        printf("FAIL");
       // break;
    }
}