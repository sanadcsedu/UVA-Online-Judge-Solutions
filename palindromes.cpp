#include<stdio.h>
#include<string.h>
int ispalindrome(char str[])
{
    int z,j,i;
    z = strlen(str);
    for(i=0,j=z-1;j>=z/2;i++,j--)
    {
        if(str[i]!=str[j])return 0;
    }
    return 1;
}
int mirrorpal(char x[])
{
    int l,i,c;
    l=strlen(x);
    c=0;
    for(i=0;i<l;i++){
        if(x[i]=='A'||x[i]=='0'||x[i]=='H'||x[i]=='I'||x[i]=='M'||x[i]=='O'||x[i]=='Y'||x[i]=='X'||x[i]=='W'||x[i]=='V'||x[i]=='U'||x[i]=='T'||x[i]=='1'||x[i]=='8')
            c++;
        }
    if(c==l)return 1;
    else return 0;
}
int ismirrored(char *str)
{
    int flag = 0,i,j,z;
    char a[]={"AEHIJLMOSTUVWXYZ12358"};
    char b[]={"A3HILLM02TUVWXY512358"};
    char ano[1000]={0};
    for(i=0;str[i];i++)
    {
        flag =0;
        for(j=0;a[j];j++)
        {
            if(str[i]==a[j])
            {
                ano[i]=b[j];
                flag = 1;
                break;
            }
            if(flag!=1)ano[i]=a[j];
        }
    }
    z = ispalindrome(ano);
    if(z==1)return 1;
    else return 0;
}
int main()
{
    char str[100];
    int p,m;
    while(scanf("%s",str)!=EOF)
    {
        p = ispalindrome(str);
        if(p==1)
        {
            m = mirrorpal(str);
            if(m==1)printf("%s -- is a mirrored palindrome.\n",str);
            else printf("%s -- is a regular palindrome.\n",str);
        }
        else
        {
            m = ismirrored(str);
            if(m==1)printf("%s -- is a mirrored string.\n",str);
            else printf("%s -- is not a palindrome.\n",str);
        }
        printf("\n");
    }
    return 0;
}
