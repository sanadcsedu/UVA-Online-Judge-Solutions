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
#define MAX 10010
#define pi acos(-1.0)
#define inf 2147483647
#define ll long long int
#define EPS 1e-9
#define mod 100000007
using namespace std;
int parent[MAX], owe[MAX];
int Find(int r)
{
	if(parent[r]==r)return r;
	return parent[r] = Find(parent[r]);
}
void Union(int a, int b)
{
	int u, v, temp;
	u = Find(a);
	v = Find(b);
	if(u!=v)
	{
        owe[u] += owe[v];
        owe[v] = 0;
		parent[v] = u;
    }
}
int main()
{
	int tcase, t, i,n, m,a, b;
	cin >> tcase;
	for(t=0; t<tcase; t++)
	{
	    cin >> n >> m;
		for(i=0; i<n; i++)
			parent[i] = i;
		for(i=0; i<n; i++)
			cin >> owe[i];
		for(i=0; i<m;i++)
		{
			cin >> a >> b;
			Union(a, b);
		}
		for(i=0; i<n; i++)
            if(owe[i])break;
		if(i==n)cout << "POSSIBLE" << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
}
