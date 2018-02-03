#include<stdio.h>
#include<string.h>
char str[1000005];
int DP[1000005];
int valid(int a,int b)
{
   if(str[a]=='1')
   {
       if(DP[b]-DP[a]==b-a)return 1;
       else return 0;
   }
   else
   {
       if(DP[a]==DP[b])return 1;
       else return 0;
   }
   return 0;
}
int main()
{
    int tcase,i,a,b,z,q=1;
    while(scanf("%s",str)!=EOF)
    {
        if(str[0]=='\n')break;
        memset(DP,0,sizeof(DP));
        for(i=1;str[i];i++)
            DP[i]= DP[i-1] + str[i]-'0';

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
