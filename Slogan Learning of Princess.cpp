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

char s[200][150],p[100][150],r[150];

int main()
{
    string s[200],p[100],r;
    int n,k,q;
    while(cin>>n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            getline(cin,s[i]);
            getline(cin,p[i]);
        }
        cin>>q;
        getchar();
        while(q--)
        {
            getline(cin,r);
            for(int i=0;i<n;i++)
            {
                if(s[i]==r)
                {
                    cout<<p[i]<<endl;
                    break;
                }
            }
        }
    }
 return 0;
}
