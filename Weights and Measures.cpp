#include<bits/stdc++.h>
using namespace std;
struct data
{
	int weight, strength;
}a[6000];
int dp[6000];
bool operator<(const data &x, const data &y)
{
	if(x.strength > y.strength) return true;
	return false;
}
int main()
{
	int n = 0;
	while(scanf("%d %d", &a[n].weight, &a[n].strength) != EOF)
	{
		a[n].strength -= a[n].weight;
		//if(a[n].strength < 0)a[n].strength = 0; 
		n++;
	}
	dp[0] = 999999999;
	sort(a, a + n);
	int i, j, next, ans;
	ans = 0;
	for(i=0; i<n; i++)
	{
		for(j=ans ; j>=0; j--)
		{
			next = min(dp[j]-a[i].weight, a[i].strength);
			if(next >= dp[j+1])
			{
				dp[j+1] = next;
				ans = max(ans, j+1);
			}
		} 	
	}
	printf("%d\n", ans);
	return 0;
}
