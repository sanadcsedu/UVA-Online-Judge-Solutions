#include<stdio.h>
#include<string.h>
char str[1000005];
int valid(int a,int b)
{
    for(int j=a;j<=b;j++)
        if(str[a]!=str[j])return 0;
    return 1;
}
int main()
{
    int tcase,i,a,b,z,q=1;
    while(scanf("%s",str)!=EOF)
    {
        if(str[0]=='\n')break;
        scanf("%d",&tcase);
        for(i=1;i<=tcase;i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)z = valid(b,a);
            else z = valid(a,b);
            if(i==1)printf("Case %d:\n",q++);
            if(z==1)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
