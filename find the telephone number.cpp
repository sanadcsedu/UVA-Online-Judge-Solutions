#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int x;
    while(scanf("%s",ch)!=EOF)
    {
        x = strlen (ch);
        for(int i =0 ;i<x;i++)
        {
            if(ch[i]>='A' && ch[i]<='C')ch[i] = '2';
            else if(ch[i]>='D' && ch[i]<='F')ch[i] = '3';
            else if(ch[i]>='G' && ch[i]<='I')ch[i] = '4';
            else if(ch[i]>='J' && ch[i]<='L')ch[i] = '5';
            else if(ch[i]>='M' && ch[i]<='O')ch[i] = '6';
            else if(ch[i]>='P' && ch[i]<='S')ch[i] = '7';
            else if(ch[i]>='T' && ch[i]<='V')ch[i] = '8';
            else if(ch[i]>='W' && ch[i]<='Z')ch[i] = '9';

        }
        for(int j=0;j<x;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }

}
