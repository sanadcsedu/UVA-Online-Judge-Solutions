#include<stdio.h>
#include<math.h>
const double pi= 2*asin(1.0);
int main()
{
    double pillar,rope,a,b,ans;
    int tcase,i;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%lf %lf",&pillar,&rope);
        a = rope/2.0;
        b = pillar/2.0;
        ans = pi*sqrt(a*a-b*b)*a;
        printf("%.3lf\n",ans);
    }
    return 0;
}
