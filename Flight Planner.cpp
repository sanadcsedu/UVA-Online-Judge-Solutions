#pragma comment(linker,"/STACK:16777216")
#pragma warning(disable:4786)

/*
	Sanad Saha
	University of Dhaka
*/
#include<set>
#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<bitset>
#include<cctype>
#include<cstdio>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
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
#define inf 1<<23
#define ll long long int
#define llu long long unsigned

#define sz(a) ((int)a.size())
#define FOR(i, n) for(i=0; i<n; i++)
#define FOR1(i, n) for(i=1; i<=n; i++)
#define mem(a) memset(a, 0, sizeof(a))
#define _set(a) memset(a,-1,sizeof(a))
#define FORI(i, a, b) for(i=a; i>=b; i--)
#define FORab(i, a, b) for(i=a; i<=b; i++)

#define SD(a) scanf("%d",&a)
#define SLF(a) scanf("%lf",&a)
#define SC(a) scanf("%c",&a)
#define SS(a) scanf("%s",a)
#define SLL(a) scanf("%lld", &a)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;

typedef pair <int, int> pii;

//int dx[] = {0,0,1,-1};
//int dy[] = {1,-1,0,0};
//int dx[] = {-1,-1,-1,0,0,1,1,1};
//int dy[] = {-1,0,1,-1,1,-1,0,1};

int a[15][1005];
int X, n;
int dp[15][1005];

int f(int alt, int dis)
{
    if(alt == 0 && dis == n ) return 0;
    if(alt < 0 || alt>9 || dis == n) return inf;
    if(dp[alt][dis] != -1) return dp[alt][dis];

    int climb, hold, sink;
    climb = 60 - a[alt][dis] + f(alt+1 , dis + 1);
    hold = 30 - a[alt][dis] + f(alt , dis + 1);
    sink = 20 - a[alt][dis] + f(alt - 1 , dis + 1);
    return dp[alt][dis] = min(min(climb, sink), hold);

}
int main()
{
	//READ("input.txt");
	//ios_base::sync_with_stdio(0);
	int tcase, j, i, ans;

	SD(tcase);
	while(tcase--)
    {
        SD(X);
        n = X / 100;
        FORI(i, 9 , 0)
        {
            FOR(j, n)
            {
                SD(a[i][j]);
            }
        }
        _set(dp);
        ans = f(0, 0);
        printf("%d\n\n", ans);
    }
	return 0;
}
