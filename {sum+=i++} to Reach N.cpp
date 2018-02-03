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
#define MAX 3000001
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
int prime[MAX];
bool status[MAX];
int k = 0;
void sieve()
{
    memset(status, true, sizeof(status));
    status[0] = status[1] = false;
    int i, j, sq;
    sq = sqrt(MAX);
    for(i = 2; i<= sq; i++)
    {
        if(status[i])
        {
            for(j= i+i; j<MAX; j+= i)
                status[j] = false;
        }
    }
    for(i =2 ; i< MAX; i++)
        if(status[i])prime[k++] = i;
}
ll NumOfDiv(ll n)
{
    long long i, c, ret, sq;
    ret = 1;
    while(n%2==0)   n/=2;
    sq = sqrt(n);
    for(i = 0; prime[i] <= sq && i <k ; i++)
    {
        if(n % prime[i] == 0)
        {
            c = 0;
            while(n % prime[i] == 0)
            {
                c ++ ;
                n /= prime[i];
            }
            ret *= (c+1);
            sq = sqrt(n);
        }

    }
    if(i==k) return 1;
    if(n>1)     ret *= 2 ;
    return ret - 1 ;
}
int main()
{
    sieve();
    ll n;
    while(scanf("%lld", &n)!= EOF)
    {
        cout << NumOfDiv(n)+1 << endl;
    }
	return 0;
}
