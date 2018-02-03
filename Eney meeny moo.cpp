#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
int ans[160];
int josephus(int n, int m)
{
    int i;
    queue <int> Q;
    for(i=1;i<=n;i++)
        Q.push(i);
    while(Q.size()>1)
    {
        Q.pop();
        for(i=1;i<m;i++)
        {
            Q.push(Q.front());
            Q.pop();
        }
    }
    return Q.front();
}
int main()
{
    int i,z,j,n;
    for(i=3;i<=150;i++)
    {
        for(j=1;;j++)
        {
            z = josephus(i,j);
            if(z == 2)break;
        }
        ans[i] = j;
    }
    while(scanf("%d",&n) && n)
        printf("%d\n",ans[n]);

    return 0;
}
