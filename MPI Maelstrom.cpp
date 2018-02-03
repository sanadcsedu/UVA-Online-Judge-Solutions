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
#define MAX 1000000
#define pi acos(-1.0)
#define inf 1000000
#define ll long long int
#define EPS 1e-9
#define mod 100000007
using namespace std;
int dp[105][105];
void Floyd_Warshall(int n)
{
    int i, j, k;
    for(k=1; k<n; k++)
        for(i=1; i<n; i++)
            for(j=1; j<n; j++)
                if(dp[i][j] > dp[i][k] + dp[k][j])
                    dp[i][j] = dp[i][k] + dp[k][j];
}
int str_num( string n)
{
    int sum ,i;
    sum = 0;
    for(i=0; n[i]; i++)
    {
        sum *= 10;
        sum+= (n[i]-'0');
    }
    return sum;
}
int main()
{
    string w;
    int n, i, j, max;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
            dp[i][j] = inf;

        dp[i][i] = 0;
    }
    for(i=2; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            cin >> w;
            if(w != "x" )dp[i][j] = dp[j][i] = str_num(w);
        }
    }
    n++;
    Floyd_Warshall(n);
    max = 0;
    for(i=2; i<n; i++)
        if(dp[1][i]>max)max = dp[1][i];

    cout << max << endl;
    return 0;
}
