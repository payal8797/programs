#include<stdio.h>
#include<stdlib.h>

int matrixSort(int m, int n)
{
    int i,j,key,input[100];
    for(j=1;j<=m*n;j++)
    {
        key=input[j];
        i=j-1;
        while (i>=0) (input[i]>key)
        {
            input[i+1]=input[i];
            i=i-1;
        }
        input[i+1]=key;
    }
    
}

int main()
{
    int m,n,i,j,input[10][10];
    printf("Enter the number of rows and columns of matrix::\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements:\n");

    for (i = 1;i <=m;i++)
    {
       for (j = 1;j <= n;j++)
       {
            scanf("%d",&input[i][j]); 
       }
    }
    matrixSort(m,n);
}