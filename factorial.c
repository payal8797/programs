#include<stdio.h>
#include<stdlib.h>

int computeFact(int n)
{
    int j,fact=1;
    for(j=1;j<=n;j++)
    {
        fact=fact*j;
    }
    //printf("Factorial:%d\n",fact);
    return fact;
}

int factorial(int n, int i)
{
    int k,num,m,sum=0,a[100];
    for(k=1;k<=i;k++)
    {       
        sum=0;
        while(n>0)
        {
            num=n%10;
            n=n/10;
            sum=sum+computeFact(num);
        }  
                     
        for (m=1;m<=k;m++)
        {
            if(n==sum)
            {
                printf("-1");
                break;
            }
        }
    printf("Sum:%d\n",sum);
    n=sum;
    }
}
    

int main()
{
    int n,i;
    printf("Enter number whose factorial is to be calculated:");
    scanf("%d",&n);
    printf("Enter number of times factorial is to be calculated:");
    scanf("%d",&i);
    
    factorial(n,i);
}