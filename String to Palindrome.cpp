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

char str1[1004];
int dp[1004][1004];

int f(int i , int j)
{
    if( i >= j )return 0;
    if(dp[i][j] != -1)return dp[i][j];

    if(str1[i] == str1[j]) dp[i][j] = f(i+1, j-1);
    else dp[i][j] = min( min(f(i+1, j), f(i, j-1)), f(i+1, j-1)) + 1;

    return dp[i][j];
}
int main()
{
    int tcase, i, j, n;
    scanf("%d", &tcase);
    for(int t =1; t<=tcase ; t++)
    {
        scanf("%s", str1);
        n = strlen(str1);
        memset(dp, -1, sizeof(dp));
        printf("Case %d: %d\n", t,f( 0, n-1 ));

    }
    return  0;
}
