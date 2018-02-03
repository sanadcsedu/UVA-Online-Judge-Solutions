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

map <char , int> node;
vector <int> awake;
vector < int > G[100];

char str[5];
bool vis[30];

void reset()
{
    mem(vis);
    node.clear();
    awake.clear();
    for(int i=0; i<30; i++)
        G[i].clear();
}
int main()
{
    //READ("input.txt");
    int n, m, k, i, v, j, cnt;
    while(scanf("%d", &n) != EOF)
    {
        reset();
        scanf("%d", &m);
        k = 0;
        scanf("%s", str);
        for(i=0; str[i]; i++)
        {
            node[str[i]] = k;
            vis[k] = true;
            k ++;
        }
        for(i=0; i<m; i++)
        {
            scanf("%s", str);
            if(!node.count(str[0])) node[str[0]] = k++;
            if(!node.count(str[1])) node[str[1]] = k++;

            G[node[str[0]]].push_back(node[str[1]]);
            G[node[str[1]]].push_back(node[str[0]]);
        }
        int hour = 0, z;
        bool ans = false;
        while(true)
        {
            z = 0;
            awake.clear();
            for(i=0; i< n; i++)
            {
                if(!vis[i])
                {
                    cnt = 0;
                    for(j=0; j<(int) G[i].size(); j++)
                    {
                        v = G[i][j];
                        if(vis[v])cnt++;
                    }
                    if(cnt >= 3) awake.push_back(i);
                }
                else z++;
            }
            if(awake.size() == 0)
            {
                if(z != n) ans = true;
                break;
            }
            for(i=0; i<(int)awake.size(); i++)
            {
                vis[awake[i]] = true;
            }
            hour ++;
        }
        if(ans) printf("THIS BRAIN NEVER WAKES UP\n");
        else printf("WAKE UP IN, %d, YEARS\n", hour);


    }
	return 0;
}
