#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647

using namespace std;

vector <int> edges[2503];
queue <int> Q;
int vis[2505], freq[2505];
void BFS(int start, int n)
{
    int i, u, v;
    while(!Q.empty())  Q.pop();
    for(i=0;i<=n;i++)vis[i] = inf_max;
    Q.push(start);
    vis[start] = 0;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(i=0; i<(int) edges[u].size(); i++)
        {
            v = edges[u][i];
            if(vis[v]==inf_max)
            {
                vis[v] = vis[u] + 1;
                Q.push(v);
            }
        }
    }
}
void output(int n, int start)
{
    int i;
    memset(freq, 0, sizeof(freq));
    for (i=0; i<n; i++)
        if ( vis[i] != inf_max ) freq [vis[i]]++;

    int max = inf_min;
    int index;

    for (i=1; i<n; i++)
    {
        if ( max < freq [i] )
        {
            max = freq [i];
            index = i;
        }
    }
    if ( edges [start].size () == 0 ) printf ("0\n");
    else printf ("%d %d\n", freq [index], index);
}
int main()
{
    int t, tcase, i, z, n, m, start, j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&z);
            edges[i].push_back(z);
        }
    }
    scanf("%d",&tcase);
    for(t=0; t<tcase; t++)
    {
        scanf("%d",&start);
        BFS(start, n);
        output(n, start);
    }
    return 0;
}
