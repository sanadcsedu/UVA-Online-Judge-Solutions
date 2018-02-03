#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;
int main()
{
    int tcase,n,i,j,c,sum,mid;
    int a[30000];
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);

        sort(a,a+n);
        sum = 0;
        mid = n/2;
        for(j=0;j<n;j++)
        {
            c = fabs(a[mid]-a[j]);
            sum = sum +c;
        }
        printf("%d\n",sum);
    }
}
