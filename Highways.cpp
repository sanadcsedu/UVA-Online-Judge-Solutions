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
	int from, to;
	double weight;
	edge(){}
	edge(int x, int y, double z):from(x), to(y), weight(z){}
	bool operator<( const edge & p)const
	{
		return weight > p.weight;
	}
}temp;
int parent[755];
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
int arrx[755], arry[755];
int main()
{
	int tcase, i, j, n, m, a, b;
	double w;
	cin >> tcase;
	while(tcase--)
	{
		cin >> n;
		for(i=1; i<=n; i++)
			cin >> arrx[i] >> arry[i];

		while(!pq.empty())pq.pop();
		for(i=0; i<=n; i++)parent[i] = i;

		for(i=1; i<=n; i++)
			for(j=i+1; j<=n; j++)
			{
				w = sqrt(double(((arrx[j]-arrx[i])*(arrx[j]-arrx[i]))) + ((arry[j]-arry[i])*(arry[j]-arry[i])));
				pq.push(edge(i, j, w));
			}
		int cnt = 0, u, v;
		cin >> m;
		for(i=0; i<m; i++)
		{
			cin >> a >> b;
			u = find(a);
			v  = find(b);
			if(u!=v)
			{
				cnt ++ ;
				Union(a, b);
			}
		}
		if(cnt==n-1)printf("No new highways need\n");
		else
		{
			while(!pq.empty())
			{
				temp = pq.top();
				if(cnt == n-1)break;
				u = find(temp.from);
				v  = find(temp.to);
				if(u!=v)
				{
					cnt ++ ;
					printf("%d %d\n", temp.from, temp.to);
					Union(temp.from, temp.to);
				}
				pq.pop();
			}
		}
		if(tcase)puts("");
	}
	return 0;
}
