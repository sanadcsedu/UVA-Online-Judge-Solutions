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

pair <double, double> a[10005];

int f(int n, int l)
{
    int i , j, ans = 0, flag = 0;
    double low = 0, high = 0;
    for(i=0; i<n; i = max(i+1, j))
    {
        if(a[i].first > high) break;
        if(a[i].second > high)
        {
            for(j = i ; j<n && a[j].first <= low ; j++)
                high = max( high , a[j].second );
            ans++;
            if( high >= l )
            {
                flag = 1;
                break;
            }
            low=high;
        }
    }
    if(flag) return ans;
    else return -1;
}
int main()
{
    int n, i, j;
    double temp, l ,c , r, w;
    while( scanf("%d %lf %lf", &n, &l, &w) != EOF)
    {
        for(i=0, j=0; i< n; i++)
        {
            scanf("%lf %lf", &c, &r);
            if(r*r <= w) continue;

            temp = sqrt(r*r*1.0 - w*w/4.0);
            a[j++] = make_pair(c - temp, c + temp);
        }
        sort (a, a + n);

        cout << f(n, l) << endl;
    }
    return 0;
}
