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

int a[1000005];
int main()
{
    long long total;
    int n , i, ans, res, first, sum;
    bool flag;
    while(scanf("%d %d", &n, &sum) != EOF)
    {
        for(i=0; i<n; i++)
          scanf("%d",&a[i]);

        res = inf;
        first = 0;
        total = 0;
        flag = false;
        for(i=0 ; i<n; )
        {
            while(sum >= total && i < n)
            {
                total += a[i++];
            }
            while(total >= sum)
            {
               total -= a[first++];
               flag = true;
            }
            ans = i - first + 1;
            if(ans < res)res = ans;
        }
        if(flag)cout << res << endl;
        else cout << "0" << endl;
    }
	return 0;
}
