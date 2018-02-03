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
#define N 1000
using namespace std;
char str1[500],str2[500],store[N][500];
int vis[N];
int parent[N],path[N];
queue <int> Q;
map <string, int> node;
vector <int> edges[N];
void BFS(int a, int b, int n)
{
    int i, u, v;
    for(i= 0; i<=N; i++)
    {
        vis[i] = inf_max;
        parent[i] = i;
    }
    while(!Q.empty())Q.pop();
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
                if(vis[v]==inf_max)
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
}
void output(int b)
{
    memset(path, 0, sizeof(path));
    int l = 0, i;
    path[l++] = b;
    while ( parent [b] != b )
    {
        b = parent [b];
        path[l++] = b;
    }
    reverse(path, path+l);
    for(i=0;i<l; i++)
        printf("%c",store[path[i]][0]);
    printf("\n");
}
int main()
{
    int blank = 0,n, m, i, a, b, tcase, index;

    scanf("%d",&tcase);
    getchar();
    while(tcase--)
    {
        scanf("%d %d",&n, &m);
        for(i=0;i<=N;i++)
            edges[i].clear();
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

        if ( blank ) printf ("\n"); blank = 1;

        for(i=1;i<=m;i++)
        {
            scanf("%s %s",str1,str2);
            a = node[str1];
            b = node[str2];
            BFS(a, b, n);
            output(b);
        }
    }
    return 0;
}


