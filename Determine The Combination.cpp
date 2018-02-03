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
char str[35],ans[35];
int n, taken[35];
int z;
void backtrack(int depth, int x)
{
    if(depth == n)
    {
        printf("%s\n", ans);
        return ;
    }
    for(int i=x ;i<z; i++)
    {
        if(taken[i]==0)
        {
            taken[i] =1;
            ans[depth] = str[i];
            backtrack(depth+1, i+1);
            taken[i] = 0;
            while(str[i]==str[i+1])i++;
        }
    }
}
int main()
{
    while(scanf("%s %d", str, &n)!= EOF)
    {
        z = strlen(str);
        sort(str, str+z);
        mem(taken);
        backtrack(0, 0);
        mem(ans);
    }
    return 0;
}
