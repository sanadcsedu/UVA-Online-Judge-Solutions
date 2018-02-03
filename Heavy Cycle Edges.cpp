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
int parent[1010], res[1010];
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
	int n, m, i, a, b, w, u, v, k;
	for(;;)
	{
		cin >> n >> m;
		if(n==0 && m==0)break;

		memset(res, 0, sizeof(res));
		while(!pq.empty())pq.pop();
		for(i=0; i<n; i++)
			parent[i] = i;

		for(i=0; i<m; i++)
		{
			cin >> a >> b >> w;
			pq.push(edge(a, b, w));
		}
		bool forest = false;
		k = 0;
		while(!pq.empty())
		{
			temp = pq.top();
			u = find(temp.from);
			v = find(temp.to);
			if(u!=v)
				Union(temp.from, temp.to);
			else
			{
				forest = true;
				res[k++] = temp.weight;
			}
			pq.pop();
		}
		if(forest)
		{
			sort(res, res+k);
			cout << res[0];
			for(i=1; i<k; i++)
				printf(" %d", res[i]);
		}
		else cout << "forest";

		printf("\n");
	}
	return 0;
}

