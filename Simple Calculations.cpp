#include<stdio.h>
int main()
{
    double c[3005],x,y,a1,sum;
    int i,j,n,tcase;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d %lf %lf",&n,&x,&y);
        sum = 0;
        for(j=1;j<=n;j++)
        {
            scanf("%lf",&c[j]);
            c[j]+=c[j-1];
            sum+=c[j];
        }
        sum*=2.0;
        a1 = (n*x + y-sum)/(n+1);
        printf("%.2lf\n",a1);
        if(i!=tcase)printf("\n");
    }
    return 0;
}
