#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<deque>
#include<set>
#include<string>

#define MAX 1000005
#define pi acos(-1.0)
#define inf 10000
#define ll long long int
#define EPS 1e-9
#define mod 100000007

using namespace std;

int dp[110][110];
void reset(int n)
{
    int i, j;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++)
            dp[i][j] = inf;

        dp[i][i] = 0;
    }
}
void floyd_warshall(int n)
{
    int i, j, k;
    for(k=0; k<n; k++)
        for(i=0; i<n;i++)
            for(j=0; j<n; j++)
                if(dp[i][j] > dp[i][k]+dp[k][j])
                    dp[i][j] = dp[i][k] + dp[k][j];

}
int main()
{
    int n, t, m, tcase, a, b, i, S, D;
    cin >> tcase;
    for(t=1; t<=tcase; t++)
    {
        cin >> n;
        cin >> m;
        reset(n);
        for(i=0; i<m; i++)
        {
            cin >> a >> b;
            dp[a][b] = dp[b][a] = 1;
        }
        floyd_warshall(n);
        cin>>S>>D;
        int MIN=0;
        MIN=dp[S][0]+dp[0][D];
        for(int i=1;i<n;i++)
            MIN=max(MIN,dp[S][i]+dp[i][D]);

        printf("Case %d: %d\n",t, MIN);
    }
    return 0;
}


