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
#define MAX 1000000
#define pi acos(-1.0)
#define inf 2147483647
#define ll long long
#define EPS 1e-9
#define mod 100000007
#define mem(a) memset(a, 0, sizeof(a));
using namespace std;
int g[6][6];
int ans[10];
void backtrack(int x, int depth)
{
	int i, j;
	ans[depth] = x;
	if(depth==8)
	{
		for(i=0; i<8; i++)
		printf("%d", ans[i]);
		printf("%d", x);
		puts("");
		return ;
	}
	for(i=1; i<=5; i++)
	{
		if(g[x][i])
		{
			g[x][i] = g[i][x] = 0;
			backtrack(i, depth+1);
			g[x][i] = g[i][x] = 1;
		}
	}
}
int main()
{
	g[1][2] = g[1][3] = g[1][5] = 1;
	g[2][1] = g[2][3] = g[2][5] =1 ;
	g[3][1] = g[3][2] = g[3][4] = g[3][5] = 1;
	g[4][3] = g[4][5] = 1;
	g[5][1] = g[5][2] = g[5][3] = g[5][4] = 1;
	backtrack(1, 0);
	return 0;
}
