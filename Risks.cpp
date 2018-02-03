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

vector <int> edges[25];
queue <int> Q;
int vis[25];
int BFS(int start, int end)
{
    int i, u, v;
    while(!Q.empty())Q.pop();
    for(i=0; i<22; i++)
        vis[i] = inf_max;
    Q.push(start);
    vis[start] = 0;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(i=0; i<(int)edges[u].size(); i++)
        {
            v = edges[u][i];
            if(vis[v] == inf_max)
            {
                vis[v] = vis[u] + 1;
                Q.push(v);
            }
            if(v == end)return vis[end];
        }
        if(v == end)return vis[end];
    }
    return vis[end];
}
int main()
{
    int m, tcase, t=1, i, j, z, first, start, end;
    while(scanf("%d",&first)!=EOF)
    {
        for(i=0;i<=20;i++)
            edges[i].clear();

        for(i=0;i<first; i++)
        {
            scanf("%d",&z);
            edges[1].push_back(z);
            edges[z].push_back(1);
        }
        for(i=2;i<20;i++)
        {
            scanf("%d",&m);
            for(j=0;j<m; j++)
            {
                scanf("%d",&z);
                edges[z].push_back(i);
                edges[i].push_back(z);
            }
        }
        scanf("%d",&tcase);
        printf("Test Set #%d\n",t++);
        for(i=0; i<tcase; i++)
        {
            scanf("%d %d",&start, &end);
            printf("%2d to %2d: %d\n",start,end,BFS(start, end));
        }
        printf("\n");
    }
    return 0;
}

