#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int n,x,start,end,i,j,a;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        scanf("%s",str);
        x = strlen (str);
        start = 0;
        end = 0;
        a = x/n;
        for(i = 0;i<x;i++)
        {
            if((i+1)%a==0)
            {
                end = i;
                for(j = end;j>=start;j--)
                {
                    printf("%c",str[j]);
                }
                start = end + 1;
            }
        }
        printf("\n");
    }
}
