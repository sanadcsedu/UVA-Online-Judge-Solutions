#include<stdio.h>
int main()
{
    int tcase,i,j,x;
    double sum,n;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        sum = 0;
        for(j=1;j<=12;j++)
        {
            scanf("%lf",&n);
            sum += n;
        }
        sum = sum/12.0;
        if(sum>999.0)
        {
            x = sum /1000.0;
            sum -= (x*1000.0);
            printf("%d $%d,%.2lf\n",i,x,sum);
        }
        else printf("%d $%.2lf\n",i,sum);
    }
    return 0;
}
