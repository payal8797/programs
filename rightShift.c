#include<stdio.h>
#include<stdlib.h>

int rightShift(int n,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        n/=2;
        //printf("%d",n);
    }
    printf("After %d right shifts=%d\n",m,n);
}

int main()
{
    int m,n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Number of times to be shifted:");
    scanf("%d",&m);
    rightShift(n,m);
}