#include<stdio.h>

int railwayNetwork(int input[],int output[],int k)
{
    int m=0,n=0;

    while(input[k]!='\0'){
    if(input[n-1]==output[0])
        {
            n=n-1;
            m=m+1;
            printf("Valid output");
        }
    
    }
    
}
int main()
{
    int i,j,k,input[100],output[100];
    
    printf("Enter number of elements:");
    scanf("%d",&k);
    printf("Enter input:");
    for(i=0;i<k;i++)
    scanf("%d",&input[i]);
    printf("Enter output:");
    for(j=0;j<k;j++)
    scanf("%d",&output[j]);

    railwayNetwork(input,output,k);
}