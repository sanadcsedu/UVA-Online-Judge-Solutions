#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[1000];
    int boot[1000];
    int dp[20000];
    int tcase;
    scanf("%d\n",&tcase);
    //fflush(stdin);
    for(int i=1;i<=tcase;i++)
    {
        //memset(str,0,sizeof(str));
        memset(boot,0,sizeof(boot));
        gets(str);
        int num,j,k=0;
        num = 0;
        for(j=0;str[j];j++)
        {
            if(str[j]==' ')
            {
                boot[k++]= num;
                num = 0;
            }
            else
            num = num*10 + str[j]-'0';
        }
        boot[k]=num;
        int sum = 0,b;
        for(j=0;j<=k;j++)
        sum = sum + boot[j];
        sort(boot,boot+k+1);
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        if(sum%2==1)printf("NO\n");
        else
        {
            for(j=0;j<=(sum/2);j++)
            {
                b = boot[j];
                for(k=(sum/2);k>=0;k--)
                {
                    if(dp[k]==1)
                    dp[k+b]=1;
                }
            }
            if(dp[sum/2]==1)printf("YES\n");
            else printf("NO\n");
        }
    }
}
