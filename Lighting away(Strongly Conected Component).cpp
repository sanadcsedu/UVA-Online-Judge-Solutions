#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<deque>
#include<set>
#include<string>
#define MAX 10010
#define pi acos(-1.0)
#define inf 2147483647
#define ll long long int
#define EPS 1e-9
#define mod 100000007
using namespace std;
vector <int> G[MAX], res;
int vis[MAX],ans[MAX];
void DFS(int u)
{
    int i, v;
    vis[u] = 2;
    for(i=0; i<(int)G[u].size(); i++)
    {
        v = G[u][i];
        if(vis[v]==0)DFS(v);
    }
    res.push_back(u);
    vis[u] = 1;
}
int main()
{
    int tcase, t, i, n, m, k, z, cnt, a, b, j;
    scanf("%d", &tcase);
    for(t=1; t<=tcase; t++)
    {
        scanf("%d %d", &n, &m);
        memset(vis, 0, sizeof(vis));
        for(i=0; i<=n; i++)
            G[i].clear();
        res.clear();
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a, &b);
            G[a].push_back(b);
        }
        cnt = 0;
        for(i=1; i<=n; i++)
            if(!vis[i])
                DFS(i);
        memset(vis, 0, sizeof(vis));

        for(i=0; i<(int)res.size();i++)
            ans[i] = res[i];

        reverse(ans, ans+i);

        for(j=0; j<i; j++)
		{
			if(vis[ans[j]]==0)
			{
				DFS(ans[j]);
				cnt++;
			}
		}
        printf("Case %d: %d\n", t, cnt);
    }
    return 0;
}
