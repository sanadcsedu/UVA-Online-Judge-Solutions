#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<queue>
#define inf 100000000
using namespace std;
struct node
{
    int to, weight;
    node(){}
    node(int t, int w) : to(t), weight(w) {}
    bool operator< (const node &e)const{
        return weight > e.weight;
    }
};
priority_queue<node> pq;
vector <node> graph[100];
int dis[100];
int parent[100];
int list[100];
void reset(int n)
{
    for(int i=0; i<=n; i++)
        graph[i].clear();

    memset(list, 0, sizeof(list));
    memset(dis, 0, sizeof(dis));
    memset(parent, 0, sizeof(parent));
    return;
}
int dijkstra(int start, int end, int n)
{
    int i, u, v;
    for(i=0; i<=n; i++)
    {
        dis[i] = inf;
        parent[i] = i;
    }
    dis[start] = 0;
    pq.push(node(start, dis[start]));
    while(!pq.empty())
    {
        node p = pq.top();
        pq.pop();
        u = p.to;
        for(i=0; i<(int)graph[u].size(); i++)
        {
            v = graph[u][i].to;
            if(dis[v] > dis[u] + graph[u][i].weight)
            {
                parent[v] = u;
                dis[v] = dis[u] + graph[u][i].weight;
                pq.push(node(v, dis[v]));
            }
        }
    }
    return dis[end];
}
void path(int s, int e)
{
    int i=0, j;
    list[i++] = e;
    while(parent[e] != e)
    {
        e = parent[e];
        list[i++] = e;
    }
    for(j=i-1; j>=0; j--)
        printf(" %d",list[j]);

    return;
}
int main()
{
    int start, end, t, n, j, to, wei, res, i, m;
    for(t=1; ;t++)
    {
        cin >> n;
        if(n==0)break;
        reset(n);
        for(i=1; i<=n; i++)
        {
            cin >> m;
            for(j=0; j<m;j++)
            {
                cin >> to >> wei;
                graph[i].push_back(node(to, wei));
            }
        }
        cin >> start >> end;
        res = dijkstra(start, end, n);
        printf("Case %d: Path =",t);
        path(start,end);
        printf("; %d second delay\n",res);
    }
    return 0;

}
