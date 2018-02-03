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
#define inf 2147483647
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

int price[25][25] , M, C, K[25];
int dp[300][25];
int f(int money, int item)
{
    if(money < 0) return -inf;

    if(dp[money][item] != -1) return dp[money][item];

    if(item == C)return M - money;

    int ret = - inf, i;

    for(i=0; i< K[item]; i++)
    {
        ret = max(ret, f(money - price[item][i], item + 1));
    }
    return dp[money][item] = ret;
}
int main()
{
    int tcase, t, i, j, z;
    cin >> tcase;
    for(t=1; t<= tcase; t++)
    {
        cin >> M >> C;
        for(i=0; i<C; i++)
        {
            cin >> K[i];
            for(j=0; j<K[i]; j++)
            {
                cin >> price[i][j];
            }
        }
        memset(dp, -1, sizeof(dp));

        z = f(M, 0);
        if(z < 0) printf("no solution\n");
        else printf("%d\n", z);
    }
	return 0;
}
