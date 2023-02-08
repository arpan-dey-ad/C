#include <stdio.h>
#define Max 50
int stack[Max],top=-1,n=Max-1,i;
void pop();
void push();
void show();

void main() {
    push();
    push();
    push();
    show();
    pop();
    show();
    pop();
    show();
    push();
    show();
}

void push ()  
{  
    int val;      
    if (top == n )   
    printf("\n Overflow");   
    else   
    {  
        printf("\nEnter the value : ");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}  
void pop ()   
{   
    printf("\nPOP");
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show()  
{  
    printf("\nValues in stack are : ");
    for (i=top;i>=0;i--)  
    {  
        printf("\n%d",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty\n");  
    }  
}  