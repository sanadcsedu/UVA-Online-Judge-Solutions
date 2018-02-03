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
#define MAX 1000000
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define mod 100000007
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

char a[70], b[70];
int l1, l2, dp[70][70][70][70];
int call(int c,int d,int e,int f)
 {
     if(c>d||e>f) return 0;
     if(dp[c][d][e][f]!=-1) return dp[c][d][e][f];
     int  ret;

     if(a[c]==a[d]&&a[d]==b[e]&&b[e]==b[f])
     {
         if(c==d||e==f)
            ret=call(c+1,d-1,e+1,f-1)+1;
         else
            ret=call(c+1,d-1,e+1,f-1)+2;

     }
     else
     {
       ret = call(c+1,d,e,f);
       ret = max(ret,call(c,d-1,e,f));
       ret = max(ret,call(c,d,e+1,f));
       ret = max(ret,call(c,d,e,f-1));
     }
     return dp[c][d][e][f]=ret;
 }

int main()
{
    int tcase, t;
    cin >> tcase;
    for(t=1; t<= tcase; t++)
    {
        memset(dp, -1, sizeof(dp));

        scanf("%s", a);
        scanf("%s", b);
        l1 = strlen(a);
        l2 = strlen(b);

        printf("Case %d: %d\n", t, call(0, l1-1 , 0, l2-1 ));
    }
	return 0;
}
