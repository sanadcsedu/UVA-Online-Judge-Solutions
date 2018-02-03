#include<stdio.h>
#include<string.h>

int main()
{
    char text[1000]={0};
    int a[26];
    int n=0,z=0,x=0,i=0,j=0,max;
    while(scanf("%d\n",&n)!=EOF)
    {
        for(int p=0;p<=25;p++)
        a[p]=0;

        for(i=1;i<=n;i++)
        {
            gets(text);
            x=strlen(text);
            max = 0;
            for(j=0;j<x;j++)
            {
                if(text[j]>='a' && text[j]<='z')
                {
                    z = text[j];
                    a[z-97]++;

                    if(max<a[z-97])max = a[z-97];
                }
                else if(text[j]>='A' && text[j]<='Z')
                {
                    z = text[j];
                    a[z-65]++;

                    if(max<a[z-65])max = a[z-65];
                }

            }
        }
        for(int k = max;k>=1;k--)
        {
            for(int l=0;l<26;l++)
            {
                if(k == a[l])
                {
                    printf("%c %d\n",l+65,k);
                }
            }
        }
    }
    return 0;
}

