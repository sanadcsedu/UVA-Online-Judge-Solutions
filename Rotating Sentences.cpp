#include<stdio.h>
#include<string.h>
int main()
{
    char a[103][103]={0};
    int x=0,max = 0,i,len,j;

    while(gets(a[x]))
    x++;

    for(i=0;i<x;i++)
    {
        len = strlen(a[i]);
        if(max<len)max = len;
    }

    for(j=0;j<max;j++)
    {
        for(i=x-1;i>=0;i--)
        {
            if(j>=strlen(a[i]))printf(" ");
            else printf("%c",a[i][j]);
        }
         printf("\n");
    }
}
