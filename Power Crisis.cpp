#include<stdio.h>
#include<string.h>
#include<list>
using namespace std;
int ans[110];
int josephus(int n, int m)
{
    int i;
    list <int> Q;
    for(i=1;i<=n;i++)
        Q.push_back(i);
    while(Q.size()>1)
    {
        Q.pop_front();
        for(i=1;i<m;i++)
        {
            Q.push_back(Q.front());
            Q.pop_front();
        }
    }
    return Q.front();
}
int main()
{
    int z,j,n;
    while(scanf("%d",&n) && n)
    {
         for(j=1;;j++)
         {
            z = josephus(n,j);
            if(z == 13)break;
         }
         printf("%d\n",j);
    }
    return 0;
}
