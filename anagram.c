#include <stdio.h>
#include <string.h>

void main()
{
    int flag=0;

    char str[100],ch;
    int i,j,l;

    char str1[100],ch1;
    int i1,j1,l1;
    //accepting first string
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    int k=0;
    while(str[k]!='\0')        //upper case
    {
        if(str[k]>='a' && str[k]<='z')
        {
            str[k]=str[k]-32;
        }
        k=k+1;
    }
    printf("Output:\t%s\n",str);
    l=strlen(str);
    for(i=1;i<l;i++)                  //sort
    {
        for(j=0;j<l-i;j++)
        {
	        if(str[j]>str[j+1])
	        {
	            ch=str[j];
	            str[j] = str[j+1];
	            str[j+1]=ch;
	        }
        }
    }
    printf("Output : \n");
    printf("%s\n\n",str);

   //accepting second string
    printf("Input the string : ");
    fgets(str1, sizeof str1, stdin);
    int w=0;
    while(str1[w]!='\0')                   //upper case
    {
        if(str1[w]>='a' && str1[w]<='z')
        {
            str1[w]=str1[w]-32;
        }
        w=w+1;
    }
    printf("Output:\t%s\n",str1);
    l1=strlen(str1);
    for(i1=1;i1<l1;i1++)                 //sort
    {
        for(j1=0;j1<l1-i1;j1++)
        {
	        if(str1[j1]>str1[j1+1])
	        {
	            ch1=str1[j1];
	            str1[j1] = str1[j1+1];
	            str1[j1+1]=ch1;
            }
        }
    }
    printf("Output : \n");
    printf("%s\n\n",str1);


    //checking anagram
    for(i=0;i<l;i++)
    {
        if (str[i]==str1[i])
        {
            flag=1;
            //printf("**\n");
        }
    }
    if(flag==1)
    {
        printf("\nAn anagram.\n");
    }
    if(flag==0)
    {
        printf("\nNot an anagram.\n");
    }
    }