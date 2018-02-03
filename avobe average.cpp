#include<stdio.h>

double per(double m,int b[],int q,int w)
{
    int c = 0,k;
    for(k=0;k<w;k++)
    {
        if(b[k]>m)c++;
    }
    return c;
}

int main()
{
    int n,x,i,j,a[10000],z;
    double sum,average,now;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum = 0;
        for(j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
            sum = sum + a[j];
        }
        average = sum/x;
        z = per(average,a,10000,x);

        now = (z*100.0)/x;
        printf("%.3lf%%\n",now);


    }
    return 0;
}
