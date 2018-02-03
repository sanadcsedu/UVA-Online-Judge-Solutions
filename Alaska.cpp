#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,a[10000],flag,z;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        flag = 0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            z = a[i]-a[i-1];
            if(z>200)flag = 1;
        }
        if ( 2 * (1422 - a [n - 1]) > 200 ) printf("IMPOSSIBLE\n");
        else if(flag==1)printf("IMPOSSIBLE\n");
        else printf("POSSIBLE\n");
    }
    return 0;
}
