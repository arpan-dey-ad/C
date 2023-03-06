#include<stdio.h>
#include<string.h>
void main()
{
    char arr1[20], arr2[20];
    printf("Enter your Name: ");
    scanf("%s",&arr1);
    printf("Enter your Surname: ");
    scanf("%s",&arr2);
    strcat(arr1,arr2);
    printf("Your Name is : %s", arr1);

}