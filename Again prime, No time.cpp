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
#define MAX 5005
#define pi acos(-1.0)
#define mod 100000007
#define inf 10000000
#define ll long long int
#define mem(a) memset(a, 0, sizeof(a));

using namespace std;
int fac(int n, int p)
{
    int ret = 0;
    while(n)
    {
        n /= p;
        ret += n;
    }
    return ret;
}
bool status[MAX];
int prime[MAX];
void seive()
{
    memset(status, true, sizeof(status));
    status[0] = status[1] = false;
    int i,j, k;
    k = 0;
    for(i=2; i<MAX; i++)
    {
        if(status[i])
        {
            prime[k++] = i;
            for(j=i+i; j<MAX; j+=i)
            {
                status[j] = false;
            }
        }
    }
}
int main()
{
    seive();
    int tcase, t, n, m,i, ans, temp;
    cin >> tcase;
    for(t=1; t <=tcase; t++)
    {
        printf("Case %d:\n", t);
        cin >> m >> n;
        int w = sqrt(m);
        ans = inf;

        for(i=0; prime[i]<=m; i++)
        {
            if(m%prime[i]==0)
                {
                    int cnt = 0;
                    while(m % prime[i]==0)
                    {
                        cnt ++;
                        m /= prime[i];
                    }
                    temp = fac(n, prime[i]) /cnt ;
                    ans=ans<temp?ans:temp;
                }
        }
        if(ans==0)printf("Impossible to divide\n");
        else printf("%d\n", ans);

    }
	return 0;
}

