#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define inf 1000000
using namespace std;
int dp[110][110];
bool flag[110];
void Floyd_Warshall(int n)
{
    int i, j, k;
    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);

}
void reset()
{
    int i, j;
    for(i=0; i<105; i++){
        for(j=0; j<105; j++)
            dp[i][j] = inf;

        dp[i][i] = 0;
    }
    memset(flag, false, sizeof(flag));
}
int main()
{
    //freopen("input.txt", "r",stdin);
    int i, j, t=1,a,b,n;
    while(cin >> a >> b)
    {
        reset();
        if(!a && !b)break;
        n = -1;
        do
        {
            if(!a && !b) break;
            dp[a][b] = 1;
            flag[a] = true;
            flag[b] = true;
            n = max(n, max(a, b));
        }
        while(cin >> a >> b);
        n++;
        Floyd_Warshall(n);

        int sum = 0;
        for(i=1; i<n; i++)
            for(j=1; j<n; j++)
                if(dp[i][j] < inf)
                    sum += dp[i][j];

        int c = 0;
        for(i=1; i<n; i++)
            if(flag[i])c++;
        double ans = sum / (c*(c-1)*1.0);
        printf("Case %d: average length between pages = %.3f clicks\n", t++, ans);
    }
    return 0;
}
