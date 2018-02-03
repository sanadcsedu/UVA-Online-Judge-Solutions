#include<stdio.h>
#include<string.h>

int main()
{
    char a[200000];

    for(;;)
    {
        gets(a);
        if(strcmp(a,"0") == 0) break;
        int x,c=0;
        x=strlen (a);
        for(int i=0;i<x;i++)
        {
            c = ((a[i]-'0') + c * 10)%17;
        }
        if(c==0)printf("1\n");
        else printf("0\n");
    }
    return 0;
}
