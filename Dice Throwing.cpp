#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[25+2][150+2];
int val, dice;
ll f(int n, int sum)
{
    if(dice == n)  return sum >= val;
    if(dp[n][sum] != -1) return dp[n][sum];
    ll &ret = dp[n][sum];
    ret = 0;
    for(int i=1;i<= 6; i++)  ret += f(n+1, sum+i);
    return ret;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int t, tcase;
    ll nom , denom, gcd;
    while(scanf("%d %d", &dice, &val) != EOF)
    {
        if(dice == 0 && val == 0) break;
        memset(dp, -1, sizeof(dp));
        nom = f(0, 0);
        denom = 1;
        for(int i=1 ; i<=dice ; i++) denom *= 6;

        gcd = __gcd(nom, denom);
        if(nom % denom == 0)printf("%lld\n",(ll)(nom/denom));
        else printf("%lld/%lld\n", nom/gcd, denom/gcd);
    }
    return 0;
}

