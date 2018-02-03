#include<stdio.h>
#include<math.h>
int main()
{
    double a,n,ans;
    for(;;)
    {
        scanf("%lf",&n);
        if(n==0)break;
        a = floor(pow(n, 1.0/3.0)+0.0000000001);
        ans = (2.0*a +(n/(a*a)))/3.0;
        printf("%.4lf\n",ans);
    }
    return 0;
}
