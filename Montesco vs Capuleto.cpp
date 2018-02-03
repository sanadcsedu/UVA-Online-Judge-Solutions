#include<stdio.h>
#include<string.h>
#include<math.h>
#include<queue>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#define inf 1000000000
using namespace std;
int vis[300],G[3];
int main()
{
    int tcase,i,u,v,a,b,n,m,c,t,j,sum, z;
    vector <int> edges[300];
    queue <int> Q;
    scanf("%d",&tcase);
    for(t=1;t<=tcase;t++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)edges[i].clear();
        memset(vis,0,sizeof(vis));
        while(!Q.empty())Q.pop();

        for(i=1; i<=n; i++)
        {
            scanf("%d",&m);
            for(j=1; j<=m; j++)
            {
                scanf("%d",&z);
                edges[i].push_back(z);
                edges[z].push_back(i);
            }
        }
        bool flag = true;
        for(i=1,sum=0;i<=n;i++)
        {
            if(!vis[i])
            {
                Q.push(i);
                vis[i] = 1;
                G[1]=G[2]=0;
                while(!Q.empty())
                {
                    u = Q.front();
                    Q.pop();
                    G[vis[u]]++;
                    for(j=0;j<(int)edges[u].size();j++)
                    {
                        v = edges[u][j];
                        if(!vis[v])
                        {
                            vis[v] = 3 - vis[u];
                            Q.push(v);
                        }
                        if(vis[v]==vis[u] && v!=u )flag = false;

                    }
                    if(!flag)break;
                }
                if(!flag)break;
                if(G[1] && G[2])sum += min( G[1], G[2] );
                else if(G[1])	sum += G[1];
                else			sum += G[2];
            }
        }
        if(flag)printf("%d\n",sum+1);
        else printf("0\n");
    }
    return 0;
}
