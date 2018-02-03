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
int parent_frnd[MAX], parent_enemy[MAX];
int find_frnd(int r)
{
	if(parent_frnd[r]==r)return r;
	return parent_frnd[r] = find_frnd(parent_frnd[r]);
}
void Union_frnd(int a, int b)
{
	int u, v;
	u = find_frnd(a);
	v = find_frnd(b);
	if(u!=v)parent_frnd[u] = v;
}
int find_enemy(int r)
{
	if(parent_enemy[r]==r)return r;
	return parent_enemy[r] = find_enemy(parent_enemy[r]);
}
void Union_enemy(int a, int b)
{
	int u, v;
	u = find_enemy(a);
	v = find_enemy(b);
	if(u!=v)parent_enemy[u] = v;
}
int main()
{
	int n, i, query, a, b, x, y, p, q;
	cin >> n;
	for(i=0; i<n; i++)
	{
		parent_frnd[i] =i;
		parent_enemy[i] = i;
	}
	for(;;)
	{
		cin >> query >> a >> b;
		if(query == 0 && a==0 && b==0)break;
		if(query==1)//set friend
		{
			x = find_enemy(a);
			y = find_enemy(b);
			if(x==y)printf("-1\n");
			else
			{
				Union_frnd(a, b);
			}
		}
		else if(query == 2)// set enemy
		{
			x = find_frnd(a);
			y = find_frnd(b);
			if(x==y)printf("-1\n");
			else
			{
				Union_enemy(a, b);
			}
		}
		else if(query == 3)// are friends
		{
			x = find_frnd(a);
			y = find_frnd(b);
			if(x==y)printf("1\n");
			else printf("0\n");
		}
		else // are enemy
		{
			x = find_enemy(a);
			y = find_enemy(b);
			if(x==y)printf("0\n");
			else printf("1\n");
		}
	}
	return 0;
}
