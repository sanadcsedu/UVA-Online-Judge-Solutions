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
#define MAX 1000000
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define mod 100000007
#define inf 2147483647
#define ll long long int
#define llu long long unsigned

#define FOR(i, n) for(i=0; i<n; i++)
#define FOR1(i, n) for(i=1; i<=n; i++)
#define mem(a) memset(a, 0, sizeof(a));
#define FORI(i, a, b) for(i=a; i>=b; i--)
#define FORab(i, a, b) for(i=a; i<=b; i++)

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

using namespace std;
int M[80][80];
int a[80];
int main()
{
    //READ("input.txt");
    int tcase, i, j, k, n, MaxSum, suf, ans;
    cin >> tcase;
    for(int t =1 ; t <= tcase; t ++)
    {
        cin >> n;

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d", &M[i][j]);

        ans = -inf;
        for(i=0; i<n ; i++)
        {
            mem(a);
            for(j=i; j<n; j++)
            {
                for(k=0; k<n; k++)
                {
                    a[k] += M[j][k];
                    printf("%d ", a[k]);
                }
                printf("\n\n");

                MaxSum = -inf;

                suf = 0;
                for(k=0; k<n; k++)
                {
                    MaxSum = max(MaxSum, suf + a[k]);
                    suf = max(suf + a[k], suf);
                }
                if(ans < MaxSum)ans = MaxSum;
            }
        }
        printf("%d\n", ans);
    }
	return 0;
}
