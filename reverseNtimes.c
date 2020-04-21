#include <stdio.h>
int main()
{
    char s[1000], r[1000];
    int begin, end, count = 0;
    int k,i;
    printf("Input a string:");
    scanf("%[^\t\n]s",s);
    printf("Input the number of times string is to be repeated:");
    scanf("%d",&k);
    while (s[count] != '\0')
    {
        count++;
    }
    end=count - 1;
    for (begin=0;begin<count;begin++) 
    {
        r[begin] = s[end];
        end--;
        if(end=' ')
        {
            for(i=0;i<k;i++)
            {
                printf("%s\t", r);    
            }
            break;
        }
    }
    return 0;
}    
