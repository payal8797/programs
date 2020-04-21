#include<stdio.h>
#include<stdlib.h>

int del(int array[],int n) //if array has more than 2 elements(no duplicacy) then it will not display the last 2 elements.
{
    int i;
    if(n<=2)
    {
        printf("\nEmpty array\n"); //if elements are less than 2 then no array will be displayed. 
    }
    else
    {
        printf("\nOutput:");
        for (i = 0; i < n-2; i++) 
        {
            printf("%d ", array[i]); 
        }
    }
}



void sort(int array[],int n) //sort the elements in the increasing order
{
    int i,temp, j; 
    for (i = 1; i < n; i++) 
    { 
        temp = array[i]; 
        j = i - 1; 
        while (j >= 0 && array[j] >temp) { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = temp; 
    } 
    printf("\nsorted array:");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", array[i]); 
    }
    del(array,n);
}



int main()
{
    int n,i,array[i];
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Elements are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",array[i]);
    }
    sort(array,n);
}