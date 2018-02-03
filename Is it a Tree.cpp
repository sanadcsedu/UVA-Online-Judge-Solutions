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
#define MAX 100005
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

mii z;
int in[MAX];
int vis[MAX];
vi edge[MAX];
bool cycle;
void reset()
{
    z.clear();
    mem(in);
    mem(vis);
    int i;
    FOR(i, MAX)
        edge[i].clear();
}
bool child(int n)
{
    int i;
    FOR1(i, n)
    {
        if(in[i] > 1) return true;
    }
    return false;
}
int _root;
void DFS(int u)
{
    int i, v;
    vis[u] = true;
    FOR(i, sz(edge[u]))
    {
        v = edge[u][i];
        if(!vis[v])
        {
            DFS(v);
        }
        else cycle = true;
    }
}
bool root(int n)
{
    int i, cnt = 0;
    FOR1(i, n)
    {
        if(in[i] == 0)
        {
            _root = i;
            return _root;
        }
    }
    return -1;
}
bool connected(int n)
{
    int i;
    FOR1(i, n)
        if(!vis[i]) return false;
    return true;
}
int main()
{
    //READ("input.txt");
    ios_base::sync_with_stdio(false);
    int a, b, id;
    for(int t=1; ; t++)
    {
        reset();
        id = 0;
        while(cin >> a >> b)
        {
            if(!a && !b) break;
            if(a==-1 && b==-1) return 0;
            if(!z[a])z[a] = ++id;
            if(!z[b])z[b] = ++id;
            in[z[b]]++;
            edge[z[a]].pb(z[b]);
        }
        if(child(id))
        {
            printf("Case %d is not a tree.\n", t);
            continue;
        }
        if(root(id) == -1)
        {
            printf("Case %d is not a tree.\n", t);
            continue;
        }
        cycle = false;
        DFS(_root);
        if(cycle)
        {
            printf("Case %d is not a tree.\n", t);
            continue;
        }
        if(!connected(id))
        {
            printf("Case %d is not a tree.\n", t);
            continue;
        }
        printf ("Case %d is a tree.\n",t);
    }
    return 0;
}
