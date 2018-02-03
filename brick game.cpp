#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int tcase,i,j,a[15],n;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        sort(a,a+n);
        printf("Case %d: %d\n",i,a[n/2]);
    }
    return 0;

}
