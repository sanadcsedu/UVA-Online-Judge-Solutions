#include<stdio.h>
#include<string.h>
#include<math.h>
#include<queue>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list < int > x;
    int n,i,z;
    while(scanf("%d",&n) && n)
    {
        x.clear();
        for(i=1;i<=n;i++)
            x.push_back(i);
        printf("Discarded cards:");
        bool flag = true;
        while(x.size()>1)
        {
            z = x.front();
            if(flag)printf(" %d",z);
            else printf(", %d",z);
            flag = false;
            x.pop_front();
            z = x.front();
            x.push_back(z);
            x.pop_front();
        }
        printf("\nRemaining card: %d\n",x.front());
    }
    return 0;
}
