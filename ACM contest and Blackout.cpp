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
    int from, to , weight;
    bool operator<(const data &p)const{
        return weight < p.weight;
    }
}edge[100009];

int parent[100009];
int skip[305][3], flag, k, skipa, skipb, skipw, cnt, start, n, m;

int Find(int r)
{
    if(parent[r]==r)return r;
    else return parent[r] = Find(parent[r]);
}
int MST()
{
    int cost, u, v, w, i;
    sort(edge, edge+m);
    FORab(i,0, m)parent[i] = i;
    cost = 0;
    cnt = 0;
    for(i=0; i<m; i++)
    {
        u = Find(edge[i].from);
        v = Find(edge[i].to);
        if(edge[i].from == skipa && edge[i].to == skipb && edge[i].weight== skipw && start)
        {
            start = 0;
            continue;
        }
        if(u!=v)
        {
            cnt ++;
            if(!flag)
            {
                skip[k][0] = edge[i].from;
                skip[k][1] = edge[i].to;
                skip[k][2] = edge[i].weight;
                k++;
            }
            cost += edge[i].weight;
            parent[u] = v;
        }
    }
    return cost;

}
int main()
{
    int t, tcase, a, b, w, i, s1, s2, ret;
    scanf("%d", &tcase);
    FOR(t, tcase)
    {
        scanf("%d %d", &n, &m);
        FOR(i, m)
        {
            scanf("%d %d %d", &a, &b, &w);
            edge[i].from = a;
            edge[i].to = b;
            edge[i].weight = w;
        }
        start = flag =k =0;
        s1 = MST();
        flag = 1;
        s2 = inf;
        for(i=0; i<k; i++)
        {
            start =1;
            skipa = skip[i][0];
            skipb = skip[i][1];
            skipw = skip[i][2];
            ret = MST();
            if(cnt==n-1 && ret<s2)
            {
                s2 = ret;
            }
        }
        printf("%d %d\n", s1, s2);
    }
	return 0;
}
