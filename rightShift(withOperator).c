#include<stdio.h>
#include<stdlib.h>

int rightShift(int n,int m)
{
    printf("After %d right shift(s):%d\n",m,(n>>m));
}

/*long long decimalToBinary(int n,int m)
{
    long long binaryNumber=0;
    int remainder,i=1;
    while(n!=0)
    {
        remainder=n%2;
        n=n/2;
        binaryNumber=binaryNumber+remainder*i;
        i=i*10;
    }
    //printf("%lld",binaryNumber);
    
}*/

int main()
{
    int m,n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Number of times to be shifted:");
    scanf("%d",&m);
    rightShift(n,m);
    //decimalToBinary(n,m);
}