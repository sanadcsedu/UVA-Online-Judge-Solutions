#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10000];
    int x,i;
    while(scanf("%s",ch)!=EOF)
    {
        x = strlen(ch);
        for(i=0;i<x;i++)
        {
            ch[i] = ch[i]-7;
        }
        printf("%s\n",ch);
    }
    return 0;
}
