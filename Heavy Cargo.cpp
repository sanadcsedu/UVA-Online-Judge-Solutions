#include<iostream>
#include<string>
#include<cstdio>
#include<string.h>
#include<algorithm>
#include<map>
#define inf 1000000
using namespace std;
int dp[210][210];
map <string, int> G;
void reset(int n)
{
    int i, j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
            dp[i][j] = -1;
        dp[i][i] = 0;
    }
    G.clear();
}
void floyd_warshall(int n)
{
    int i, j, k;
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                dp[i][j] =  max(dp[i][j],min(dp[i][k], dp[k][j]));

}
string a, b;
int main()
{
    int n, r, i, w, x, start, end, tcase;
    for(tcase=1;;tcase++)
    {
        cin >> n >> r;
        if(n==0 && r==0)break;
        reset(n);
        x = 1;
        for(i=0; i<r; i++)
        {
            cin >> a >> b >> w;
            if(G[a]==0)G[a] = x++;
            if(G[b]==0)G[b] = x++;
            dp[G[a]][G[b]] = w;
            dp[G[b]][G[a]] = w;
        }
        cin >> a >> b;
        floyd_warshall(n);
        start = G[a];
        end = G[b];
        printf("Scenario #%d\n", tcase);
        printf("%d tons\n\n", dp[start][end]);
    }
    return 0;
}
