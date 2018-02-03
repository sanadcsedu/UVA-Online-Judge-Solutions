#include<stdio.h>
#include<math.h>
const double PI = 2*asin(1.0);
int main()
{
    long long int t,i,ans,n;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        ans = floor((log(2*PI*n)/2 + n*(log(n) - 1) + 1/(12*n))/log(10)) + 1 ;
        if(ans==0)printf("1\n");
        else printf("%lld\n",ans);
    }
    return 0;
}
