#include<stdio.h>
#include<stdlib.h>

int matrixRotation(int array[i][j])
{
  int i,j,m,n,k;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i>j)
      {
        array[i][j]=k;  
        array[j][i]=array[i][k];
        k=array[j][i];
      }
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("% 4d",array[i][j]);
      
    }
    printf("\n");
  }
}

int main()
{
  int i,j,m,n,array[10][10];
  printf("Enter order of the matrix:\n");
  scanf("%d%d",&m,&n);
  printf("Enter coefficients:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Element %d%d:",i,j);
      scanf("%d",&array[i][j]);
    }
  }
  printf("Matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("% 4d",array[i][j]);
      
    }
    printf("\n");
  }
  matrixRotation(array);
}
