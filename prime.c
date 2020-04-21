#include<stdio.h>
#include<stdlib.h>

int altPrime(int array[],int n)
{
    int k;
    for(k=1;k<=n;k=k+2)
    {
        printf("\n\n%d",array[k]);
    }
}


int isPrime(int array[],int n)
{
    int i,j,k,flag;
    printf("\nPrime numbers are :");
    for (i = 0; i < n; i++) {
       j = 2;
       flag = 1;
       while (j < array[i]) {
           if (array[i] % j == 0) {
               flag = 0;
               break;
           }
           j++;
       }
       if (flag == 1) {
           printf("%d ", array[i]);
       }
       /*for (i,k=1;i,k<=n;i++,k++)
       {
           array[k]=array[i];
       } */
   }


   altPrime(array,n);
}




int main()
{
    int i,n,array[i];
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nElements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");

    isPrime(array,n);
}