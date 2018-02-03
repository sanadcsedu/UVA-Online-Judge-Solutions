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
bool check[10];
bool is_valid(int n)
{
    int rem, c = 0;
    while(n)
    {
        c++;
        rem = n % 10;
        if(!check[rem])check[rem] = true;
        else return false;
        n /= 10;
    }
    if(c==4)
    {
        if(!check[0])check[0] = true;
        else return false;
    }
    return true;
}
int main()
{
    int n, blank = 0, i, ans, flag;
    while(scanf("%d", &n) && n)
    {
        flag = 0;
        if(blank)puts("");
        blank = 1;
        for(i = 1234 ; i<= 98765; i++)
        {
            mem(check);
            if(is_valid(i))
            {
                ans = n * i;
                if(is_valid(ans))
                {
                    printf("%5d / %05d = %d\n", ans,i,  n);
                    flag =1;
                }
            }
        }
        if(!flag)printf("There are no solutions for %d.\n", n);
    }
	return 0;
}
