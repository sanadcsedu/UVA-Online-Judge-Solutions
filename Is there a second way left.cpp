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
    int from, to, weight;
    bool operator < (const data &p)const{
        return weight < p.weight;
    }
}edge [100009];

int parent[100009], skip[500][3];
int n, e, t, tcase, skipa, skipb, skipw, flag, start, cnt, cost, k;

int Find(int r)
{
    if(parent[r]==r)return r ;
    return parent[r] = Find(parent[r]);
}

int MST()
{
    int  u, v, i;
    sort (edge, edge+e);
    FORab(i,0, n)parent[i] = i;
    cost = 0;
    cnt = 0;
    FOR(i, e)
    {
        u = Find(edge[i].from);
        v = Find(edge[i].to);
        if(edge[i].from == skipa && edge[i].to == skipb && edge[i].weight == skipw && start )
        {
            start = 0;
            continue;
        }
        if(u!= v)
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
    int i, a, b, w, s1, s2, res;
    cin >> tcase;
    for(t=1; t<=tcase; t++)
    {
        cin >> n >> e;
        for(i=0; i<e; i++)
        {
            cin >> a >> b >> w;
            edge[i].from = a;
            edge[i].to = b;
            edge[i].weight = w;
        }
        flag  = start = k = 0;
        skipa = skipb = skipw = 0;

        s1 = MST();
        if(cnt != n-1)
        {
            printf("Case #%d : No way\n", t);
            continue;
        }


        flag = 1;
        s2 = inf;

        FOR(i, k)
        {
            start = 1;
            skipa = skip[i][0];
            skipb = skip[i][1];
            skipw = skip[i][2];
            res = MST();
            if(cnt == n-1 && res < s2)
            {
                s2 = res;
            }
        }
        if(s2 == inf)printf("Case #%d : No second way\n", t);
        else printf("Case #%d : %d\n", t, s2);
    }
	return 0;
}
