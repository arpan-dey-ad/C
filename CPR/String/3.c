#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    int i,j;
    printf("Enter String: ");
    scanf("%s",&a);
    printf("Enter String: ");
    scanf("%s",&b);
    printf("Select Operation\n 1. Copy String\n 2. Concatenate String\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
    strcpy(a,b);
    break;
    case 2:
    printf("Enter charcters to be concatenated: ");
    scanf("%d",&j);
    strncat(a,b,j);
    default:
    break;
    }
    puts(a);
    puts(b);
}

