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

struct trie
{
    int cnt;
    trie *next[3];
    trie ()
    {
        cnt = 0;
        memset(next, 0, sizeof(next));
    }
};
trie *root;

int _insert(string s)
{
    trie *cur = root;
    int len, x,i;
    int ans, z;
    len = s.length();
    ans = 0;
    for(i=0; i<len; i++)
    {
        x = s[i] - '0';

        if(cur->next[x] == NULL)
        {
            cur->next[x] = new trie();
        }
        cur = cur->next[x];
        cur->cnt ++;
        z = cur->cnt * (i+1);
        if(z > ans)ans = z;

    }
    return ans;
}
int main()
{
    //READ("input.txt");
    int t , tcase, i,n;
    int ret, _max;
    scanf("%d", &tcase);
    string str;
    for(t=0; t<tcase; t++)
    {
        root = new trie();
        scanf("%d", &n);
        _max = 0;
        for(i=0; i<n; i++)
        {
            cin >> str;
            ret = _insert(str);
            if(ret > _max)_max = ret;
        }
        cout << _max << endl;
    }
	return 0;
}
