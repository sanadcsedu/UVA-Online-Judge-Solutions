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
int deg[210];
int main()
{
    int n, r, i, a, b;
    while (cin >> n >> r)
    {
        mem(deg);
        FOR(i, r)
        {
            cin >> a >> b;
            deg[a]++;
            deg[b]++;
        }
        bool flag = true;
        FOR(i, n)
        {
            if(deg[i]%2 ==1 || deg[i]==0)
            {
                flag = false;
                break;
            }
        }
        if(flag)cout << "Possible" << endl;
        else cout << "Not Possible" << endl;
    }
	return 0;
}
