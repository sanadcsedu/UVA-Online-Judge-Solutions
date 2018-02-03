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
 
unsigned long long a[1005][1005];
char str[1005];
bool flag[1005][1005];

int dp(int p, int q)
{
	if(flag[p][q])
	{
		if(p==1 && q==1)return a[p][q] = 1;

		if(a[p][q] != -1)return a[p][q];
		else
		{
			if(p==1)return a[p][q] = dp(p, q-1);
			else if(q==1)return a[p][q] = dp(p-1, q);
			else return a[p][q] = dp(p, q-1) + dp(p-1 , q);
		}
	}
	return 0;
}
int main()
{
	int tcase,t, w, n, i, u, v;
	cin >> tcase;
	for(t=1; t<=tcase; t++ )
	{
		memset(a, -1, sizeof(a));
		memset(flag , true, sizeof(flag) );
		cin >> w >> n;
		getchar();
		for(i=0; i<w; i++)
		{
			gets(str);
			u = v = -1;
			char *ss = strtok( str , " " );
			while( ss != NULL )
			{
				sscanf( ss , "%d" , &v );
				ss = strtok( NULL , " " );
				if( u < 0 )
					u = v;
				else flag [u][v] = false;
			}
		}
		dp(w, n);
		printf("%llu\n", a[w][n]);
		if(tcase != t)puts("");
	}
	return 0;
}