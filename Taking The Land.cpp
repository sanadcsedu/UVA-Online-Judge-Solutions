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
int a[105][105];
int x[105];

int f(int z)
{
    int i, j;
    int m = -inf, sum = 0;

    for(i=0;i<z;i++)
    {
        sum = x[i];
        if(m < sum) m = sum;

        for(j=i+1;j<z;j++)
        {
            sum += x[j];
            if(m < sum) m = sum;
        }
    }
    return m;
}
int main()
{
    int n, m, i, j,k, z;
    while(true)
    {
        mem(a);
        scanf("%d %d", &n, &m);
        if(n==0 && m==0) break;

        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                scanf("%d", &z);
                if(z)a[i][j] = -100;
                else a[i][j] = 1;
            }
        int _max , ans = -100;
        for(i=0 ; i<n; i++)
        {
            mem(x);
            for(j=i; j<n; j++)
            {
                for(k=0; k<m; k++)
                {
                    x[k] += a[j][k];
                }
                _max = f(m);
                //cout << _max << endl;
                if(ans < _max) ans = _max;
            }
        }
        if(ans >0)printf("%d\n", ans);
        else printf("0\n");
    }
	return 0;
}
