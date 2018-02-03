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
char input[15], ans[15];
int taken[15];
int x = 0;
map <string, bool> ase;
void backtrack(int depth)
{
    if(depth==x)
    {
        if(!ase[ans])
        {
            printf("%s\n", ans);
            ase[ans] = 1;
            return ;
        }
        return ;
    }
    for(int i=0; i<x; i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            ans[depth] = input[i];
            backtrack(depth + 1);
            taken[i] = 0;
        }
    }
}
int main()
{
    int tcase, i;
    scanf("%d", &tcase);
    for(i=0; i<tcase; i++)
    {
        scanf("%s", input);
        x = strlen(input);
        sort(input, input+x);
		mem(taken);
        backtrack(0);
        ase.clear();
		mem(ans);
        printf("\n");
    }
    return 0;
}
