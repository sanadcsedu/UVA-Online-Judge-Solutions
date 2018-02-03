/******************************
*	Sanad Saha            *
*	University of Dhaka   *
******************************/

#include<bits/stdc++.h>

#define EPS 1e-9
#define pb push_back
#define mp make_pair
#define ins insert
#define fi first
#define se second
#define pi acos(-1.0)
#define mod 100000007
#define inf 2147483647/3
//#define inf INT_MAX
#define ll long long int
#define sss stringstream
#define oss ostringstream
#define iss istringstream
#define llu long long unsigned

#define _sq(a) (a)*(a)
#define sz(a) ((int)a.size())
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define _max3(a, b, c) max(a, max(b, c))
#define _min3(a, b, c) min(a, min(b, c))
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

ll dp[(1<<17) + 5][105];
int s, m, n;
int mask;
int _app[105];
vi aa[105];

ll f(int mask, int pos)
{
    if(popcount(mask) == 2*s) return 0;
    if(pos == n) return inf;

    if(dp[mask][pos] != -1) return dp[mask][pos];
    int i, v, pre = mask;
    for(i=0; i<sz(aa[pos]); i++)
    {
        v = aa[pos][i];
        if(check(pre, v)) pre = set1(pre, v+s);
        else pre = set1(pre, v);
    }
    dp[mask][pos] = min(f(mask, pos + 1), _app[pos] + f(pre, pos+1));
    return dp[mask][pos];
}

int main()
{
    //READ("input.txt");
    //ios_base::sync_with_stdio(false);
    string str;
    int ans, i, sub,cost;
    while(scanf("%d %d %d", &s, &m, &n) && s)
    {
        mask = 0;
        _set(dp);
        ans = 0;
        for(i=0; i<m; i++)
        {
            cin >> cost;
            ans += cost;
            getline(cin, str);
            iss zz(str);

            while(zz >> sub)
            {
                if(check(mask, sub)) mask = set1(mask, sub + s);
                else mask = set1(mask, sub);
            }
        }
        for(i=0; i<n; i++)
        {
            cin >> _app[i];
            getline(cin, str);
            iss zz(str);
            while(zz >> sub) aa[i].pb(sub);
        }
        printf("%lld\n", ans + f(mask, 0));
        for(i=0; i<n; i++)aa[i].clear();
    }
    return 0;
}


