#include <bits/stdc++.h>
using namespace std;
#define MAX 62
#define mod 10007

char str1[MAX], str2[MAX], str3[MAX];
int l1, l2, l3;
int dp[MAX][MAX][MAX];
int f(int idx1, int idx2, int idx3)
{
    if(idx3 == l3) return 1;
    if(dp[idx1][idx2][idx3] != -1) return dp[idx1][idx2][idx3];
    int &ret = dp[idx1][idx2][idx3];
    ret = 0;
    int i;
    for(i=idx1 ;i < l1; i++) if(str1[i] == str3[idx3]) ret += f(i+1, idx2, idx3+1);
    for(i=idx2 ;i < l2; i++) if(str2[i] == str3[idx3]) ret += f(idx1, i+1, idx3+1);
    ret %= mod;
    return ret;
}
int main()
{
    int tcase;
    cin >> tcase;
    while(tcase--)
    {
        scanf("%s %s %s", str1, str2, str3);
        memset(dp, -1, sizeof(dp));
        l1 = strlen(str1);
        l2 = strlen(str2);
        l3 = strlen(str3);
        cout << f(0, 0, 0) << endl;
    }
    return 0;
}


