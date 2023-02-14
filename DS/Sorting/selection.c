#include<stdio.h>

//main function
void main()
{
int a[10],n,i;
printf("Enter size of array");
scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}

// searching the smallest number
int swpos(int a[], int i, int n)
{
    int pos = i,j;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[pos])
        {
            pos=j;
        }
    }
    return pos;
}

//sort 
int solution_sort(int a[], int)
{
    int n,i, pos;
    for(i=0;i<n-1;i++)
    {
        pos = swpos(a[i],n);
        if(pos!=i)
        {
            swpos(a[i], a[pos]);
        }
    }
}

