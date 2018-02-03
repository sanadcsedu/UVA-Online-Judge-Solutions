#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<algorithm>
using namespace std;
int dp[1010], time[50], v[50];
bool parent[50][1010];
int main()
{
	int w, t, d, i, n, k;
		bool flag=false;
	while(scanf("%d %d", &t, &w)!=EOF)
	{
		memset(parent, 0, sizeof(parent));
		memset(dp, 0, sizeof(dp));
		scanf("%d", &n);
		for(i=0; i<n; i++)
		{
			scanf("%d %d", &d, &v[i]);
			time[i] = 3*w*d;
		}
		for(i=0, k=0; i<n; i++)
		{
			for(int j=t; j>=time[i]; j--)
			{
				if(dp[j-time[i]]+v[i] > dp[j])
				{
					dp[j] = dp[j-time[i]]+v[i];
					parent[i][j] = true;
				}
			}
		}
		int count = 0;
		int temp = t;
		for(i=0; i<n; i++)
		{
			if(parent[i][w]){
				temp -= time[i];
				count++;
			}
		}
		if(flag)printf("\n");
		printf("%d\n%d\n", dp[t], count);
		temp = t;
		for(i=0; i<n; i++)
		{
			if(parent[i][w]){
				printf("%d %d", time[i]/(3*w), v[i]);
				temp -= time[i];
			}
		}
		flag = true;
	}
	return 0;
}
