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
#include<vector>
#include<iostream>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647

using namespace std;
char str[100];
vector <int> edges[10010];
vector <int> weight[10010];
queue <int> Q;
int vis[10010], temp;
int BFS(int start, int n)
{
    int i, u, v, z;
    while(!Q.empty())Q.pop();
    for(i=0; i<=n; i++)
        vis[i] = -1;
    vis[start] = 0;
    temp = 0;
    Q.push(start);
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(i=0; i<(int)edges[u].size(); i++)
        {
            v = edges[u][i];
            if(vis[v]== -1 )
            {
                vis[v] = vis[u] + weight[u][i];
                if(vis[v]>temp)
                {
                    temp = vis[v];
                    z = v;
                }
                Q.push(v);
            }
        }
    }
    return z;

}
void solve(int n)
{
    int z, i;
    if(n==1)
        printf("0\n");
    else
    {
        z = BFS(1, n);
        z = BFS(z, n);
        printf("%d\n",temp);
    }
    for(i=0; i<=n; i++)
    {
        edges[i].clear();
        weight[i].clear();
    }

}
int main()
{
    int a, b, w, n=1, z, i;
    while(gets(str)!= NULL)
    {
        if(str[0] == '\0')
        {
            solve(n);
            n = 1;
        }
        else
        {
            sscanf(str, "%d %d %d", &a, &b, &w);
            edges[a].push_back(b);
            edges[b].push_back(a);
            weight[a].push_back(w);
            weight[b].push_back(w);
            n++;
        }
    }
    solve(n);
    return 0;
}
