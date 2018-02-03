#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#include<vector>
#include<iostream>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647
#define N 10010
using namespace std;
struct input
{
    int num;
    int mod;
}a[N];
bool even(int x)
{
    if(x <0)x*=-1;
    if(x%2)return false;
    else return true;
}
bool odd(int x)
{
    if(x <0)x*=-1;
    if(x%2)return true;
    else return false;
}
bool operator< (input a, input b)
{
    if ( a.mod < b.mod ) return true;

    if ( a.mod == b.mod ) {
        if ( odd (a.num) && even (b.num) ) return true;
        if ( odd (a.num) && odd (b.num) && a.num > b.num ) return true;
        if ( even (a.num) && even (b.num) && a.num < b.num ) return true;
    }

    return false;
}
int main()
{
    int n, m, i;
    for(;;)
    {
        scanf("%d %d",&n, &m);
         if ( n == 0 && m == 0 ) {
            printf ("0 0\n");
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i].num);
            a[i].mod = a[i].num % m;
        }
        sort(a, a+n);
        printf ("%d %d\n", n, m);
        for(i=0; i<n; i++)
            printf("%d\n", a[i].num);
    }
    return 0;
}
