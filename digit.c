#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int start,end,number,remainder,sum=0,sum1=0;
    printf("Enter start and end of range:");
    scanf("%d %d",&start,&end);
    printf("Enter the number whose sum is to be calculated:");
    scanf("%d",&number);
    while(number>0)
    {
        remainder=number%10;
        number=number/10;
        sum=sum+remainder;
    }
    printf("Sum of digits is:%d",sum);
    while(start <= end) 
    {
        i = start;
        sum1 = 0;
        while(i > 0) {
            remainder=i%10;
            i=i/10;
            sum1=sum1+remainder;
        }
        //printf("%d\n",sum1);
        if (sum==sum1) {
            printf("\nRequired number is:%d\n",start);
            break;
        }
        else
            start=start+1; 
    }
}