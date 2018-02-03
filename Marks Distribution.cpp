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

int dp[110][110];
int high , low, t, n;

int f(int sum, int index)
{
    if(sum > t)return 0;

    if(index == n)
    {
        if(sum == t)return 1;
        else return 0;
    }

    if(dp[sum][index] != -1)
        return dp[sum][index];

    dp[sum][index] = 0;
    int ret = 0;
    for(int i = low ; i <= high; i++)
    {
        sum += i;
        ret += f(sum, index + 1);
        sum -= i;
    }
    return dp[sum][index] = ret;
}

int main()
{
    int tcase, p;
    cin >> tcase;
    while(tcase --)
    {
        memset(dp, -1, sizeof(dp));
        cin >> n >> t >> p;
        high = t - p*(n-1);
        low = p;

        cout << f(0, 0) << endl;
    }
	return 0;
}
