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
#define MAX 2005
#define pi acos(-1.0)
#define mod 100000007
#define inf 100000000
#define ll long long int

#define pb(a) push_back(a)
#define FOR(i, n) for(i=0; i<n; i++)
#define FOR1(i, n) for(i=1; i<=n; i++)
#define mem(a) memset(a, 0, sizeof(a));
#define FORI(i, a, b) for(i=a; i>=b; i--)
#define FORab(i, a, b) for(i=a; i<=b; i++)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;

bool airport[MAX];
int dis[MAX];
vector <int> edge[10000];
queue <int> q;
void reset(int n)
{
    int i;
    FOR(i, n+1)
        edge[i].clear();
    mem(airport);
}
void BFS(int start, int n)
{
    int i, u, v, z;
    FOR(i, n+1)
        dis[i] = inf;
    if(airport[start])dis[start] = 0;
    else dis[start] = 1;

    q.push(start);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(i=0; i<(int) edge[u].size(); i++)
        {
            v = edge[u][i];

            if(airport[v])z = dis[u];
            else z = dis[u] + 1;

            if(dis[v] > z)
            {
                dis[v] = z;
                q.push(v);
            }
        }
    }
}
int main()
{
    //READ("input.txt");
    int tcase, t, n, m, k, z, i, a, b, query, s, e;
    scanf("%d", &tcase);
    FOR1(t, tcase)
    {
        scanf("%d %d %d", &n, &m, &k);
        reset(n);
        FOR(i, k)
        {
            scanf("%d", &z);
            airport[z] = true;
        }
        FOR(i, m)
        {
            scanf("%d %d", &a, &b);
            edge[a].pb(b);
            edge[b].pb(a);
        }
        scanf("%d", &query);
        printf("Case %d:\n", t);
        FOR(i, query)
        {
            scanf("%d %d", &s, &e);
            if(s==e)
            {
                printf("0\n");
                continue;
            }
            BFS(s, n);
            if(dis[e]==inf)printf("-1\n");
            else printf("%d\n", dis[e]);
        }
        puts("");
    }
    return 0;
}
