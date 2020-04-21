#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int count=0;
    int i,j;
    int flag=0;
    printf("Enter string:");
    scanf("%s",&str);
    while(str[count]!='\0')
    {
     count=count+1; 
    }
    printf("len:%d\n",count);
    for(i=0;i < count ;i++)
    {
        if(str[i] != str[count-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag) 
    {
        printf("%s is not a palindrome/n", str);
    }    
    else 
    {
        printf("%s is a palindrome/n", str);
    }
}