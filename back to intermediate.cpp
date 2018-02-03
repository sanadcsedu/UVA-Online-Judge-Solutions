#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double time,dis,d,v,u;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v>=u)printf("Case %d: can't determine\n",i);
        else{
            time = d / u;
            dis = d / sqrt(u*u - v*v);
            if(time == dis )printf("Case %d: can't determine\n",i);
            else printf("Case %d: %.3lf\n",i,fabs(dis-time));
        }
    }
    return 0;
}
