#include<stdio.h>
#include<string.h>

int main()
{
    char text[201];
    int i,j,p,k,q,z,x;

    while(gets(text)!=NULL){


        x = strlen(text);

        int a[123];

        for(k=65;k<123;k++)
        a[k]=0;

        for(j=0;j<x;j++)
        {
            if(text[j]>='a' && text[j]<='z')
            {
                z =(text[j]);
                a[z]++;
            }
            else
            {
                z =(text[j]);
                a[z]++;
            }
        }
        int max=0;
        for(p=65;p<123;p++)
        {
            if(max<a[p])max = a[p];
        }

        for(q=65;q<123;q++)
        {
            if(a[q]==max)
            {
                printf("%c",q);
            }
        }
        printf(" %d\n",max);

}
}
