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
#define N 1000
using namespace std;
char str1[5],str2[5],store[N][5];
int vis[N];
int parent[N],path[N];
int main()
{
    int blank = 0,n, i, a, b, l, u, v, index;
    queue <int> Q;
    map <string, int> node;
    vector <int> edges[N];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<N;i++)
        {
            edges[i].clear();
            vis[i] = inf;
            parent[i] = i;
        }
        node.clear();
        memset(store, 0, sizeof(store));
        for(i=1, index = 1;i<=n;i++)
        {
            scanf("%s %s",str1, str2);
            if(!node[str1])
            {
                strcpy(store[index], str1);
                node[str1] = index++;
            }
            if(!node[str2])
            {
                strcpy(store[index], str2);
                node[str2] = index++;
            }
            edges[node[str1]].push_back(node[str2]);
            edges[node[str2]].push_back(node[str1]);
        }
        while(!Q.empty())Q.pop();
        memset(path, 0, sizeof(path));

        scanf("%s %s",str1,str2);
        a = node[str1];
        b = node[str2];
        Q.push(a);
        vis[a] = 0;
        bool possible = false;
        while(!Q.empty())
        {
            u = Q.front();
            Q.pop();
            for(i=0; i<(int)edges[u].size(); i++)
            {
                v = edges[u][i];
                if(vis[v]==inf)
                {
                    parent[v] = u;
                    vis[v] = vis[u] + 1;
                    Q.push(v);
                }
                if(v==b)
                {
                    possible = true;
                    break;
                }
            }
            if(possible)break;
        }
        if ( blank ) printf ("\n"); blank = 1;

        if(possible)
        {
            l = 0;
            path[l++] = b;
            while ( parent [b] != b )
            {
                b = parent [b];
                path[l++] = b;
            }
            reverse(path, path+l);
            for(i=0;i<(l-1); i++)
            {
                printf("%s", store[path[i]]);
                printf(" %s\n", store[path[i+1]]);
            }

        }
        else printf("No route\n");
    }
    return 0;
}

