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
map <char, int > n;
int con[100][100], taken[100];
char store[100], node[300], ans[100], E[300];
void reset()
{
    mem(con);
    n.clear();
    mem(ans);
    mem(store);
    mem(node);
    mem(taken);
}
int k, xxx = 0;
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
    if(depth== k-1)
    {
        printf("%c", ans[0]);
        for(i=1; ans[i]; i++)
        {
            printf(" %c", ans[i]);
        }
        puts("");
        xxx= 1;
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
	int i, tcase, t;
	scanf("%d", &tcase);
	getchar();
	while(tcase--)
	{
	    getchar();
	    gets(node);
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
		for(i=0; E[i]; i+=4)
		{
			con[n[E[i]]][n[E[i+2]]] = true;
		}
		xxx = 0;
		backtrack(0);
		if(!xxx)printf("NO\n");
		reset();
		if(tcase)puts("");
	}
	return 0;
}
