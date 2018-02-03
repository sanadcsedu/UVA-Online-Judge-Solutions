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
using namespace std;
int parent[MAX];
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
char input[20], q;
int main()
{
	int tcase, a, b, n, i, x, y, n1, n2, flag=0;
	cin >> tcase;
	for(int t = 0;t<tcase;t++)
	{
		n1 = n2 = 0;
        cin >> n;
		getchar();
		for(i=0; i<MAX; i++)
			parent[i] = i;
		while(gets(input) && sscanf(input, "%c %d %d", &q, &a, &b)==3)
		{
            if(q=='c')Union(a, b);
			else
			{
				x = find(a);
				y = find(b);
				if(x==y)n1++;
				else n2++;
			}
		}
		if(flag)printf("\n");
		printf("%d,%d\n", n1, n2);
		flag = 1;
	}
	return 0;
}
