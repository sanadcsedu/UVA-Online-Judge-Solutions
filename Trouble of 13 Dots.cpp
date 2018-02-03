#include<set>
#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<cctype>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

#define EPS 1e-9
#define MAX 1000000
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define mod 100000007
#define inf 1000000
#define ll long long int
#define llu long long unsigned

#define FOR(i, n) for(i=0; i<n; i++)
#define FOR1(i, n) for(i=1; i<=n; i++)
#define mem(a) memset(a, 0, sizeof(a));
#define FORI(i, a, b) for(i=a; i>=b; i--)
#define FORab(i, a, b) for(i=a; i<=b; i++)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;
int cost[110], like[110];
int n, money;
int dp[110][10005];

int knapsack(int item, int rest)
{
    if(rest < 0) return -inf;
    if(item == n)
    {
        int z = money + 200 - rest;
        if (z > money && z <= 2000)
                return -inf;
        return 0;
    }
    if(dp[item][rest] != -1) return dp[item][rest];
    int ret1, ret2;
    ret1 = like[item] + knapsack(item+1, rest-cost[item]);
    ret2 = knapsack(item+1, rest);
    return dp[item][rest] = max(ret1, ret2);
}

int main()
{
    int i, ans;
    while(scanf("%d %d", &money, &n) != EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d %d", &cost[i], &like[i]);
        memset(dp, -1, sizeof(dp));
        ans = knapsack(0, money + 200);
        printf("%d\n", ans);
    }
	return 0;
}
