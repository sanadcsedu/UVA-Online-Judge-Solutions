#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100],a[100];
    while(gets(ch)!=NULL)
    {
        int x = strlen(ch);
        int k = 0,j=0,i=0;

        for(i=0;i<x;i++)
        {
            if(ch[i]!=' ')
            {
                a[k]=ch[i];
                k++;
            }
            else
            {
                for(j=k-1;j>=0;j++)
                printf("%c",a[j]);

                k = 0;
            }
        }
        printf("\n");

    }
    return 0;


}
