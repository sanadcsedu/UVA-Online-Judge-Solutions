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
int parent[200];
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
    int tcase, t, j, z, u, v, n, i, a, b;
    char p;
    scanf("%d", &tcase);
    for(t=1; t<=tcase; t++)
    {
        scanf("%d", &n);
        for(i=0; i<=n; i++)
            parent[i] = i;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d%c", &z, &p);
                if(z)pq.push(edge(i, j, z));
            }
        }
        printf("Case %d:\n", t);
        int cnt = 0;
        while(!pq.empty())
        {
            if(cnt == n-1)break;
            temp = pq.top();
            u = find(temp.from);
            v = find(temp.to);
            if(u!=v)
            {
                Union(temp.from, temp.to);
                a = max(temp.from, temp.to) -1 +'A';
                b = min(temp.from, temp.to) -1 +'A';
                printf("%c-%c %d\n",b, a, temp.weight);
                cnt ++;
            }
            pq.pop();
        }
    }
	return 0;
}

