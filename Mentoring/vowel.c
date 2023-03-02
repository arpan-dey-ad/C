#include<stdio.h>
void main()
{
    char x;
    printf("Enter the character: ");
    scanf("%c", &x);
    if(x=='a' || x== 'e' || x=='i' || x=='o' || x=='u')
    printf("Entered character is a vowel");
    else
    printf("Entered character is a consonant");
}