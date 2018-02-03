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

char str1[105], str2[105];
int a1[30], a2[30];
int main()
{
    int i, x, j, flag, n;
    while(gets(str1) != NULL)
    {
        gets(str2);
        n = strlen(str1);

        mem(a1);
        mem(a2);

        for(i=0; i < n; i++)
        {
            a1[str1[i] - 'A']++;
            a2[str2[i] - 'A']++;
        }
        sort(a1, a1 + 26);
        sort(a2, a2 + 26);

        flag = 1;
        for(i=0; i<26; i++)
        {
            if(a1[i] != a2[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1) printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}

