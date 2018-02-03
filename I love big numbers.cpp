#include<stdio.h>
int a[1005][2600],sum[1005];
int main()
{
    sum[0]=sum[1]=1;
    a[0][0]=a[1][0]=1;
    int i,j,n;
    for(i=2;i<1002;i++)
        for(j=0;j<2600;j++)
        {
            a[i][j]+=a[i-1][j]*i;
            if(a[i][j]>9)
            {
                a[i][j+1]=a[i][j]/10;
                a[i][j]%=10;
            }
            sum[i]+= a[i][j];
        }
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",sum[n]);
    return 0;
}
