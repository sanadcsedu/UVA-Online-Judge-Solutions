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
#define MAX 110
#define pi acos(-1.0)
#define inf 1000000
#define ll long long int
#define EPS 1e-9
#define mod 100000007
using namespace std;
double dp[210][210];
int arrx[210], arry[210];
void reset(int n)
{
    int i, j;
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++)
            dp[i][j] = inf;

        dp[i][i] = 0;
    }
}
void floyd_warshall(int n)
{
    int i, j, k;
    for(k=0; k<n; k++)
        for(i=0; i<n;i++)
            for(j=0; j<n; j++)
                dp[i][j] = min(max(dp[i][k], dp[k][j]), dp[i][j]);
}
int main()
{
	int i, j, n, tcase=1;
	double w;
	while(scanf("%d", &n) && n)
	{
		for(i=0; i<n; i++)
			cin >> arrx[i] >> arry[i];

        reset(n);
		for(i=0; i<n; i++)
			for(j=i+1; j<n; j++)
			{
				w = sqrt(double(((arrx[j]-arrx[i])*(arrx[j]-arrx[i]))) + ((arry[j]-arry[i])*(arry[j]-arry[i])));
				dp[i][j] = w;
				dp[j][i] = w;
			}

        floyd_warshall(n);

        printf("Scenario #%d\n", tcase++);
        printf("Frog Distance = %.3lf\n\n", dp[0][1]);
	}
	return 0;
}

