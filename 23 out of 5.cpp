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

int a[5], vis[5];

bool Backtrack(int step, int sum)
{
	if(step == 5)
	{
		if(sum==23)return true;
		return false;
	}
	for(int i=0; i<5; i++)
	{
		if(!vis[i])
		{
			vis[i] = true;
			if(Backtrack(step + 1, sum * a[i]))return true;
			if(Backtrack(step + 1, sum + a[i]))return true;
			if(Backtrack(step + 1, sum - a[i]))return true; 
			vis[i] = false;
		}
	}
	return false;

}
int main()
{
	int i;
	bool flag;
	while(1)
	{
		bool b = true;
		for(i=0; i<5; i++)
		{
			scanf("%d", &a[i]);
			if(a[i]!= 0)b = false;
		}
		
		if(!b)
		{
			mem(vis);
			flag = false;
			for(i=0; i<5; i++)
			{
				vis[i] = true;
				if(Backtrack(1, a[i]))
				{
					flag = true;
					if(flag)break;
				}
				vis[i] = false;
			}
			if(flag) printf("Possible\n");
			else printf("Impossible\n");
		}
		else break;
	}
}
