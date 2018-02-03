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
int coins;
int dp[701][151][61];

int f(int c, int n1, int n5, int n10)
{
    if(c == coins)return 0;
    if(dp[n1][n5][n10] != -1) return dp[n1][n5][n10];
    int &ret = dp[n1][n5][n10];
    ret = 100000000;
    if(n1 >= 8)
        ret = min(ret, f(c+1, n1-8, n5, n10)+8);
    if(n5 >= 2)
        ret = min(ret, f(c+1, n1+2, n5-2, n10)+2);
    if(n10 >= 1)
        ret = min(ret, f(c+1, n1+2, n5, n10-1 )+1);
    if(n1 >=3 && n5>=1 )
        ret = min(ret, f(c+1, n1-3 , n5-1, n10 )+4);
    if(n10 >=1 && n1>=3)
        ret = min(ret, f(c+1, n1-3, n5+1, n10-1 )+4);

    return ret;
}
int main()
{
    //READ("input.txt");
    int t, tcase, n1, n5, n10;
    SD(tcase);
    FOR(t, tcase)
    {
        _set(dp);
        SD(coins);
        SD(n1);
        SD(n5);
        SD(n10);
        printf("%d\n", f(0, n1, n5, n10));
    }
    return 0;
}

