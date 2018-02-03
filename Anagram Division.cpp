#include <stdio.h>
#include <string.h>
#define MAXN 10
#define MAXD 1000
#include <stdbool.h>
int dp[1<<MAXN][MAXD+1];

int factorial[MAXN+1]={1,1,2,6,24,120,620,4340,34720,312480,3124800};

int cnt[MAXN+1];
char s[MAXN+1];
int len,d;

bool check(int mask,int k)
{
    return (mask)&(1<<k);
}
int set1(int mask,int k)
{
    return (mask)|(1<<k);
}
 int f(int mask, int mod , int dep)
{
    if(dep == len)
    {
        if(mod == 0 ) return 1;
        else return 0;
    }
    if(dp[mask][mod] != -1) return dp[mask][mod];
    int ret = 0, i;

    for(i=0; i< len; i++)
    {
        if(check(mask, i) == 0)
        {
            ret += f(set1(mask, i), (mod*10 + s[i] - '0') % d, dep + 1);
        }
    }
    return dp[mask][mod] = ret;
}

int main()
{
    int i,k,t,ans;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s %d",s,&d);

        len = strlen(s);

        memset(dp,-1,sizeof(dp));
        memset(cnt,0,sizeof(cnt));

        for(i=0;i<len;i++)    cnt[s[i]-'0']++;

        ans=f(0,0,0);

        for(i=0;i<MAXN;i++) ans=ans/factorial[cnt[i]];

        printf("Case %d: %d\n",k+1,ans);
    }
    return 0;
}
