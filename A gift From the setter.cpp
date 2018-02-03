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
long long a[100005];
long long S[100005];
int main()
{
    int tcase, t, k, c, n, i;
    cin >> tcase;
    for(t=0; t<tcase; t++)
    {
        scanf("%d %d %d %lld", &k, &c, &n, &a[0]);

        for(i=1; i<n; i++)
            a[i] = (k * a[i-1] + c) % 1000007;

        sort(a, a+n);

        S[0] = a[0];
        for(i=1; i<n; i++)
            S[i] = S[i-1] + a[i];

        long long sum = 0;
        for(i=0; i<n; i++)
        {
            sum += fabs(S[n-1] - S[i] - a[i]*(n-i-1));
        }
        printf("Case %d: %lld\n", t+1, sum);
    }
	return 0;
}
