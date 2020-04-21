#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter total numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            printf("Fizz,");
        }
        else if(i%5==0)
        {
            printf("Buzz,");
        }
        else if(i%3==0 && i%5==0)
        {
            printf("Fizz Buzz,");
        }
        else
        {
            printf("%d,",i);
        }
    }
    printf("\n");
}