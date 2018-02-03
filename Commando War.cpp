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
struct data
{
    int x, y;
}s[1005];
bool operator<(data a, data b)
{
    if(a.y > b.y) return true;
    else return false;
}
int main()
{
    int t=1, n, i, ans, hand, m;
    while( scanf("%d", &n) && n)
    {
        for(i=0; i<n; i++)
        {
            cin >> s[i].x >> s[i].y;
        }
        sort(s, s + n);
        ans = hand = m = 0;
        for(i=0; i<n; i++)
        {
            ans += s[i].x;
            hand = ans + s[i].y;
            m = max(m, hand);
        }
        printf("Case %d: %d\n", t++, m);

    }
	return 0;
}
