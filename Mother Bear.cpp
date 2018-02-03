#include<stdio.h>
#include<string.h>
#include<ctype.h>
int palindrome(char *b)
{
    int x,i,j;
    x = strlen(b);
    for(i=0,j=x-1;i<=x/2;i++,j--)
    {
        if(b[i]!=b[j])return 0;
    }
    return 1;
}
int main()
{
    int i,z,j;
    char a[1000];
    for(;;)
    {
        gets(a);
        if(strcmp(a,"DONE")==0)break;
        char b[1000]={0};

        for(i=0,j=0;a[i];i++)
        {
            a[i]=tolower(a[i]);
            if(a[i]>='a' && a[i]<='z')
            b[j++]=a[i];
        }
        z = palindrome(b);
        if(z==1)printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
