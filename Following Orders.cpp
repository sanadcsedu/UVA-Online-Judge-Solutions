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
#define ll long long int
#define EPS 1e-9
#define mod 100000007
#define mem(a) memset(a, 0, sizeof(a));
using namespace std;
char node[100], E[200], store[100];
char ans[100];
bool con[50][50];
map <char , int> n;
int k = 0;
int taken[110];
bool check(int x, int len)
{
	for(int i=0; i<len; i++)
	{
		if(con[x][n[ans[i]]]==true)return false;
	}
	return true;
}
void backtrack(int depth)
{
	int i;
	if(depth == k-1)
	{
		puts(ans);
		return ;
	}
	for(i=1; i<=(k-1); i++)
	{
		if(taken[i]==0 && check(i, depth))
		{
			taken[i] = 1;
			ans[depth] = store[i];
			backtrack(depth + 1);
			taken[i] = 0;
		}
	}
	
}
int main()
{
	int i, flag=0;
	while(gets(node)!= NULL)
	{
		gets(E);
		int l = strlen(node);
		sort(node, node+l);
		for(i=0, k=1; node[i]; i++)
		{
			if(isalpha(node[i]))
			{
				if(!n[node[i]])
				{
					store[k] = node[i];
					n[node[i]] = k++; 
			
				}
			}
		}
		mem(con);
		for(i=0; E[i]; i+=4)
		{
			con[n[E[i]]][n[E[i+2]]] = true;
		}
		mem(taken);
		if(flag)puts("");
		flag = 1;
		backtrack(0);
		n.clear();
		mem(ans);
		mem(store);
		mem(node);
	}
	return 0;
}