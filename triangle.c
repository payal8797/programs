#include<stdio.h>
#include<stdlib.h>

int triangle(int a, int b)
{
    int count=0;
    int i,j,k;
    for (i=a;i<=b;i++)
    {
        for (j=i;j<=b;j++)
        {
            for (k=j;k<=b;k++)
            {
                if(i+j>=k & i+k>=j & j+k>=i)
                {
                    printf("Valid triangle with sides %d %d %d\n",i,j,k);
                    count++;
                }
            }
        }
    }
    printf("Total triangles:%d\n",count);

}
int main()
{
    int a,b;
    printf("Enter minimum len:");
    scanf("%d",&a);
    printf("Enter maximum len:");
    scanf("%d",&b);
    triangle(a,b);
}