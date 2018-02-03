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
#define MAX 1110000
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

int str1[111], str2[111];
int dp[111][111];

int main()
{
    int x , y, t =1, i, j;
    for(t=1;;t++)
    {
        cin >> x >> y;
        if(x==0 && y==0)break;

        for(i=0; i<x; i++)
            cin >> str1[i];
        for(i=0; i<y; i++)
            cin >> str2[i];

        memset(dp,0,sizeof(dp));

        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                if(str1[i-1]==str2[j-1])dp[i][j] = dp[i-1][j-1] + 1;
                else if(dp[i][j-1]<=dp[i-1][j])dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i][j-1];
            }
        }
        printf("Twin Towers #%d\n", t);
        printf("Number of Tiles : %d\n\n", dp[x][y]);

    }
	return 0;
}

