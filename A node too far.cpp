#include<stdio.h>
#include<string.h>
#include<math.h>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#define inf 2147483640
using namespace std;
int vis[2000];
int main()
{
    int tcase=1,NC,index,a,b,i,start,TTL,u,v,c;
    vector < int > node[1000];
    queue < int > Q;
    for(;;)
    {
        scanf("%d",&NC);
        if(NC==0)break;

        map < int, int> soja;

        for(i=0;i<=(NC*2);i++)node[i].clear();

        for(i=1,index=1;i<=NC;i++)
        {
            scanf("%d %d",&a,&b);
            if(!soja[a])soja[a] = index++;
            if(!soja[b])soja[b] = index++;
            node[soja[a]].push_back(soja[b]);
            node[soja[b]].push_back(soja[a]);
        }
        for(;;)
        {
            for(i=0;i<=1900;i++)
                vis[i] = inf;

            while(!Q.empty())Q.pop();

            scanf("%d %d",&start,&TTL);
            if(start==0 && TTL==0 )break;

            Q.push(soja[start]);
            vis[soja[start]]=0;

            while(!Q.empty())
            {
                u = Q.front();
                Q.pop();
                for(i=0;i<(int)node[u].size();i++)
                {
                    v = node[u][i];
                    if(vis[v]==inf)
                    {
                        vis[v] = vis[u]+1;
                        Q.push(v);
                    }
                }
            }
            for(i=1,c=0;i<index;i++)
                if(vis[i]>TTL)c++;

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tcase++,c,start,TTL);
        }
    }
    return 0;
}
