#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
#define inf 1000000
using namespace std;
int dp[25][25];
char input[25][25];
void Floyd_Warshall(int n)
{
    int i, j, k;
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);

}
void reset()
{
    int i, j;
    for(i=0; i<25; i++){
        for(j=0; j<25; j++)
            dp[i][j] = inf;

        dp[i][i] = 0;
    }
    memset(input, 0, sizeof(input));
}
int main()
{
    int n, m, a, b, w, i, j;
    for(int t=1;;t++)
    {
        scanf("%d %d", &n, &m);
        if(n==0 && m==0)break;
        reset();
        for(i=1; i<=n ; i++)
            scanf("%s", input[i]);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d", &a, &b, &w);
            dp[a][b] = w;
            dp[b][a] = w;
        }
        Floyd_Warshall(n);
        int min = 10000000, ans, sum;
        for(i=1; i<=n; i++)
        {
            sum = 0;
            for(j=1; j<=n; j++)
                sum += dp[i][j];

            if(sum < min)
            {
                min = sum;
                ans = i;
            }
        }
        printf("Case #%d : %s\n",t, input[ans]);
    }
    return 0;
}
