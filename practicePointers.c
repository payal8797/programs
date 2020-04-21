#include<stdio.h>
#include<stdlib.h>

/*int searchNumber(int array[],int size,int n)
{
    int j;
    for(j=0;j<5;j++)
    {
        if(array[j]==n)
        {
            printf("No. is at index:%d\n",j);
        }
    }
    if(j==size)
    {
        printf("No. not found\n");
    }
}

void check(int *a)
{
    *a=20;
}*/

int check(int a)
{
    return a=20;
}


int main()
{
    int n;
    int a=10;
    check(a);
    printf("%d",a);
    
    int b=100;
    int *ptr=&a;
    //int **ptr1=&ptr;
    //int ***ptr2=&ptr1;
    int *ptr1=&b;
    int s=ptr-ptr1;
    int *array;
    array=(int*)malloc(5*sizeof(int));
    //printf("%ld\n",sizeof(array));
    if(array==NULL)
    {
        printf("Error");
        return 0;
    }
    //printf("%p",array);
    //printf("\n%p",&array[1]);
    //printf("\n%p",&a  rray[5]);
    //printf("\n%p\n%p",array,&array[0]);
    //printf("%d\n%p\n%p",a,&a,ptr);
    //printf("\n%d\n%d",a,*ptr);
    //printf("%d\n%p\n%d\n%p\n%p\n%d",a,ptr,*ptr,ptr1,*ptr1,**ptr1);
    //printf("%p\n%p",ptr,ptr++);
    //printf("%d",s);
   /* int i;
    for(i=0;i<5;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter a no.");
    scanf("%d",&n);

    searchNumber(array,5,n);*/
    return 0;
}