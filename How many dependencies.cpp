#include<set>
#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<cctype>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

#define EPS 1e-9
#define MAX 1000004
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define mod 1000000003
#define inf 2147483647
#define ll long long int
#define llu long long unsigned

#define FOR(i, n) for(i=0; i<n; i++)
#define FOR1(i, n) for(i=1; i<=n; i++)
#define mem(a) memset(a, 0, sizeof(a));
#define FORI(i, a, b) for(i=a; i>=b; i--)
#define FORab(i, a, b) for(i=a; i<=b; i++)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;

vector <int> flag[105];
bool vis[105]; 
int c;
void DFS(int u)
{
	int v;
	vis[u] = true;
	for(int i=0; i< (int)flag[u].size(); i++)
	{
		v = flag[u][i];
		if(!vis[v])
		{
			c++;
			DFS(v);
		}
	}
}
int main()
{
	int i , m, n, j, z, max, ans;
	while(scanf("%d", &n) && n)
	{
		
		for(i=0; i<=n ; i++)
		{
			flag[i].clear();
		}
		
		for(i=0; i<n; i++)
		{
			cin >> m;
			for(j=0; j<m; j++)
			{
				cin >> z;
				flag[i+1].push_back(z);
			}	
		}
		max = -1;
		for(i=0; i<n; i++)
		{
			mem(vis);
			c = 0;
			DFS(i+1);
			if(max < c)
			{
				max = c;
				ans = i+1;
			}		
		}
		cout << ans << endl;
	}
	return 0;
}