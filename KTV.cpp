/******************************
*	Sanad Saha            *
*	University of Dhaka   *
******************************/

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
#define MAX 505
#define pb push_back
#define mp make_pair
#define ins insert
#define fi first
#define se second
#define pi acos(-1.0)
#define mod 100000007
#define inf 2147483647
#define ll long long int
#define sss stringstream
#define oss ostringstream
#define llu long long unsigned

#define _sq(a) (a)*(a)
#define sz(a) ((int)a.size())
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define FOR(i, n) for(i=0; i<(int)n; i++)
#define FOR1(i, n) for(i=1; i<=(int)n; i++)
#define mem(a) memset(a, 0, sizeof(a))
#define _set(a) memset(a,-1,sizeof(a))
#define FORI(i, a, b) for(i=a; i>=(int)b; i--)
#define FORab(i, a, b) for(i=a; i<=(int)b; i++)
#define popcount(n) __builtin_popcount(n)
#define popcountl(n) __builtin_popcountll(n)
#define sort_rev(a) sort(a.rbegin(), a.rend())
#define sort_all(a) sort(a.begin(), a.end())
#define dis_twopoints(x1,y1,x2,y2) sqrt(_sq(x1-x2) + _sq(y1-y2))
#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

//If Long Long (mask & (1LL << k))
#define check(mask, k) (mask & (1 << k))
#define set1(mask, k) (mask | (1 << k))
#define set0(mask ,k) (mask & (~(1<<k)))

#define SD(a) scanf("%d",&a)
#define SLF(a) scanf("%lf",&a)
#define SC(a) scanf("%c",&a)
#define SS(a) scanf("%s",a)
#define SLLD(a) scanf("%lld", &a)
#define Si64(a) scanf("%I64d", &a)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;

typedef pair <int, int> pii;
typedef pair <double, double> pdd;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <string> vs;
typedef vector <vi> vvi;
typedef map<string , int> msi;
typedef map<int , int> mii;
typedef map<char , int> mci;
typedef map<int, string> mis;
typedef set<int> si;
typedef set<string> ss;

//int dx[] = {0,0,1,-1};
//int dy[] = {1,-1,0,0};
//int dx[] = {-1,-1,-1,0,0,1,1,1};
//int dy[] = {-1,0,1,-1,1,-1,0,1};

int mark[10][10][10];
int dp[1<< 9];

int bitmask(int Mask)
{
    if(Mask == 511 ) return 0;
    if(dp[Mask] != -1) return dp[Mask];
    int _max = -inf, i, j, k;
    FOR(i, 9)
    {
        if(check(Mask, i) == 0)
            FOR(j, 9)
            {
                if(check(Mask, j) == 0)
                    FOR(k, 9)
                    {
                        if(check(Mask, k) == 0 && mark[i][j][k])
                            _max = max(_max, mark[i][j][k] + bitmask(Mask|(1<<i)|(1<<j)|(1<<k)));
                    }
            }
    }
    return dp[Mask] = _max;
}
int main()
{
    //READ("input.txt");
    int t = 1, n, a, v, b, c, i, res;
    while(SD(n) && n)
    {
        mem(mark);
        _set(dp);
        FOR(i, n)
        {
            SD(a);
            SD(b);
            SD(c);
            SD(v);
            a--, b--, c--;
            mark[a][b][c] = mark[a][c][b] = mark[b][c][a] = mark[b][a][c] = mark[c][b][a] = mark[c][a][b] = v;
        }
        res = bitmask(0);
        if(res <= 0)printf("Case %d: -1\n", t++);
        else printf("Case %d: %d\n", t++, res);
    }
    return 0;
}

