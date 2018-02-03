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
int n, ans[20], num[20];
int taken [20];
bool flag[100];
void sieve()
{
    memset(flag, true, sizeof(flag));
    flag[0] = flag[1] = false;
    int i, j;
    for(i=0; i<sqrt(100); i++)
    {
        if(flag[i])
        {
            for(j=i+i; j<100; j+= i)
                flag[j] = false;
        }
    }
}
void backtrack(int depth)
{
    int sum, i;
    if(depth == n)
    {
        sum = ans[depth-1] + ans[0];
        if(flag[sum])
        {
            printf("%d", ans[0]);
            for(i=1; i<n; i++)
                printf(" %d", ans[i]);
            printf("\n");
            return ;
        }
    }
    for(i=1; i<n; i++)
    {
        if(!taken[i])
        {
            sum = ans[depth-1] + num[i];
            if(flag[sum])
            {
                taken[i] = 1;
                ans[depth] = num[i];
                backtrack(depth+1);
                taken[i] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    int tcase = 1, blank=0;
    while(scanf("%d", &n)!=EOF)
    {
        if(blank)printf("\n");
        blank = 1;
        printf("Case %d:\n", tcase++);

        for(int i=0; i<20; i++)
            num[i] = i+1;

        mem(taken);
        mem(ans);
        ans[0] = 1;
        taken[0] = 1;
        backtrack(1);
    }
    return 0;
}



