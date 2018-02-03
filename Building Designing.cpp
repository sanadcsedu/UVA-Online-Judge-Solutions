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
    int val;
    bool col;
}a[500006];

bool operator < (const data &a, const data &b)
{
    if(a.val < b.val)return true;
    else return false;
}
int main()
{
    int tcase, t, i, j, n, z, ans;
    bool check;
    cin >> tcase;
    for(t=0; t<tcase; t++)
    {
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> z;
            if(z < 0)
            {
                a[i].val = fabs(z);
                a[i].col = true;
            }
            else
            {
                a[i].val = z;
                a[i].col = false;
            }
        }
        sort(a, a + n);
        ans = 1;
        check = a[0].col;

        for(i=1; i<n; i++)
        {
            if(a[i].col != check)
            {
                ans ++;
                check = a[i].col;
            }
        }
        cout << ans<< endl;
    }
	return 0;
}
