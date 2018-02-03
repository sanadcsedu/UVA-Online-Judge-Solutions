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
#define pi acos(-1.0)
#define mod 100000007
#define inf 2147483647
#define ll long long int
#define mem(a) memset(a, 0, sizeof(a));

using namespace std;
int n[100000];
int nod(int x)
{
    int ret = 0, w, i;
    w = sqrt(x);
    for(i=1; i<=w; i++)
    {
        if(x%i == 0)
        {
            ret +=2 ;
        }
    }
    if(w*w == x)ret--;
    return ret;
}
int binary_search(int item, int end)
{
    int start, mid;
    start = 0;
    while(start < end)
    {
        mid = (start+end)/2;
        if(n[mid] < item)start = mid+1;
        else end = mid;
    }
    return start;
}
int main()
{
    //freopen("input.txt", "r", stdin );
    int i, t, tcase, a, b, total, p, q;
    mem(n);
    n[0] = 1;
    for(i=1;; i++)
    {
        n[i] = n[i-1] + nod(n[i-1]);
        if(n[i] > 1000000)break;
    }
    total = i;
    cin >> tcase;
    for(t=1; t<=tcase; t++)
    {
        cin >> a >> b;
        p = binary_search(a, total);
        q = binary_search(b, total);
        if(n[q]==b)q++;
        printf("Case %d: %d\n",t, q-p);
    }
	return 0;
}
