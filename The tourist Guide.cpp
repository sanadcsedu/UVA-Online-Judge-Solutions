
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define inf 100000000
using namespace std;
int dp[110][110];
void reset(int n)
{
    int i, j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
            dp[i][j] = -inf;
        dp[i][i] = 0;
    }
}
void floyd_warshall(int n)
{
    int i, j, k;
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                dp[i][j] =  max(dp[i][j], min(dp[i][k], dp[k][j]));

}
int main()
{
    int t, n, r, i, a, b, w, ans;
    for(t=1; ; t++)
    {
        cin >> n >> r;
        if(n==0 && r==0)break;
        reset(n);
        for(i=0; i<r; i++)
        {
            cin >> a >> b >> w;
            dp[a][b] = w;
            dp[b][a]= w;
        }
        floyd_warshall(n);
        cin >> a >> b >> w;
        int z = dp[a][b]-1;
        ans = ceil((w*1.0)/(z*1.0));
        printf("Scenario #%d\n", t);
        printf("Minimum Number of Trips = %d\n\n", ans);
    }
    return 0;
}
