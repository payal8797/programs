#include<stdio.h>
#include<stdlib.h>

void kaprekarNumbers(int p, int q) 
{
    int i,d1,d2,d,rem=0,rem0=0,rem1=0,rev=0,num,result;
    for(i=p;i<=q;i++)
    {
        num=i*i;
        //printf("%d",num);
        d1=0;
        while(i!=0)  //counting the digits of original no.
        {
            i=i/10;
            d1++;
        }
        for(i=1;i<=d1;i++)     //extrating d1 digits
        {
            num=num%10;
            rem=rem+num;
        }
        num=i*i;
        while(num!=0)     //reversing the no.
        {
            rem0=num%10;
            rev=rev*10+rem0;
            num=num/10;
        }
        d2=0;
        while(rev!=0)  //counting the digits of reversed no.
        {
            rev=rev/10;
            d2++;
        }
        d=d2-d1;
        for(i=1;i<=d;i++)   // //extrating remaining digitsx
        {
            rev=rev%10;
            rem1=rem1+rev;
        }
    
        result=rem+rem1;   // adding 2 parts
        if(result==num)
        {
            printf("%d",result);
        }
    }
}   

int main()
{
    int p,q;    
    printf("Enter value of p and q:\n");
    scanf("%d%d",&p,&q);
    //printf("f");
    kaprekarNumbers(p,q);
}