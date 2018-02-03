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
#define MAX 110
#define pi acos(-1.0)
#define inf 2147483647
#define ll long long int
#define EPS 1e-9
#define mod 100000007
using namespace std;
struct edge
{
	int from, to, weight;
	edge(){}
	edge(int x, int y, int z):from(x), to(y), weight(z){}
	bool operator<( const edge & p)const
	{
		return weight > p.weight;
	}
}temp;
int parent[10005];
int find(int r)
{
	if(parent[r]==r)return r;
	return parent[r] = find(parent[r]);
}
void Union(int a, int b)
{
	int u, v;
	u = find(a);
	v = find(b);
	if(u!=v)parent[u] = v;
}
priority_queue <edge> pq;
int main()
{
    int tcase, t, j, u, v, n, i, cost,m,a,b,w;
    scanf("%d", &tcase);
    for(t=1; t<=tcase; t++)
    {
        scanf("%d %d %d", &n, &m, &cost);

        for(i=0; i<=n; i++)
            parent[i] = i;
        while(!pq.empty())pq.pop();

        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d", &a, &b, &w);
            pq.push(edge(a, b, w));
        }
        int cnt = 0, total=0, airport=0;
        while(!pq.empty())
        {
            if(cnt == n-1)break;
            temp = pq.top();
            u = find(temp.from);
            v = find(temp.to);
            if(u!=v)
            {
                Union(temp.from, temp.to);
                total += temp.weight;
                cnt ++;
            }
            pq.pop();
        }
        for(i=1; i<=n; i++)
        {
            if(parent[i]==i)
            {
                total += cost;
                airport++;
            }
        }
        printf("Case #%d: %d %d\n",t, total, airport);
    }
	return 0;
}
