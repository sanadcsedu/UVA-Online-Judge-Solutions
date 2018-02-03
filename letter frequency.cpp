#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char text[201];
    int n,i,j,p,k,q,z,x;

    while(scanf("%d\n",&n)==1){

    for(i=1;i<=n;i++)
    {

        gets(text);

        x = strlen(text);

        int a[26];

        for(k=0;k<26;k++)
        a[k]=0;

        for(j=0;j<x;j++)
        {
            if(tolower(text[j])>='a' && tolower(text[j])<='z')
            {
                z = tolower(text[j]);
                a[z-97]++;
            }
        }
        int max=0;
        for(p=0;p<26;p++)
        {
            if(max<a[p])max = a[p];
        }

        for(q=0;q<26;q++)
        {
            if(a[q]==max)
            {
                printf("%c",q+97);
            }
        }
        printf("\n");
        }
    }
    return 0;
}
