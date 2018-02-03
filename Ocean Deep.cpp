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

char ch;
	
int main()
{
	int i, n;
	while(cin >> ch){
		
		n = 0;
		n += ch - 48;
		while (cin >> ch){
		if (ch == '#') break;
		n *= 2;
		n += ch - 48;
		n %= 131071;
	}
		if (n == 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}
	return 0;
}