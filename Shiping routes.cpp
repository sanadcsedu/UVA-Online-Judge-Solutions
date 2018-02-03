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
#define inf 2147483647
using namespace std;
char str1[5],str2[5];
int vis[100];
int main()
{
    int tcase, i, n, m, a, b, p, D, t, cost, u, v;
    vector <int> edges[100];
    queue <int> Q;
    scanf("%d",&tcase);
    for(t=1; t<=tcase; t++)
    {
        map <string, int> node;
        scanf("%d %d %d",&n, &m, &p);
        for(i=0;i<=n; i++)
            edges[i].clear();
        for(i=1;i<=n;i++)
        {
            scanf("%s",str1);
            node[str1] = i;
        }
        for(i=1;i<=m; i++)
        {
            scanf("%s %s",str1,str2);
            a = node[str1];
            b = node[str2];
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        if(t==1)printf("SHIPPING ROUTES OUTPUT\n");
        printf("\nDATA SET  %d\n\n",t);

        for(D=1; D<=p; D++)
        {
            scanf("%d",&cost);
            scanf("%s %s",str1, str2);
            a = node[str1];
            b = node[str2];
            while(!Q.empty())Q.pop();

            for(i=0;i<=n;i++)
                vis[i] = inf;

            Q.push(a);
            vis[a] = 0;
            while(!Q.empty())
            {
                u = Q.front();
                Q.pop();
                for(i=0; i<(int)edges[u].size(); i++)
                {
                    v = edges[u][i];
                    if(vis[v] == inf)
                    {
                        vis[v] = vis[u] + 1;
                        Q.push(v);
                    }
                }
            }
            if(vis[b]!= inf)printf("$%d\n",cost*100*vis[b]);
            else printf("NO SHIPMENT POSSIBLE\n");
        }
    }
    printf("\nEND OF OUTPUT\n");
    return 0;
}
