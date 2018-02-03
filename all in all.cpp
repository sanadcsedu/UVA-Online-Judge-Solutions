#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j,k;
    while(scanf("%s %s",a,b)!=EOF)
    {
        for(i=0,j=0,k=0;b[i];i++)
        {
            if(a[j]==b[i])
            {
                j++;
                c[k++]=b[i];
            }
        }
        c[k]='\0';
        if(strcmp(a,c)==0)printf("Yes\n");
        else printf("No\n");
    }
}
