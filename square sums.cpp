#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[11][11];
    long long int k,i,j,n,sum,z;
    for(k=1;;k++)
    {
        scanf("%lld",&n);
        if(n==0)break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            scanf("%lld",&a[i][j]);
        }
        printf("Case %lld:",k);
        for(i=0;i<(n/2);i++)
        {
            sum = 0;
            sum=a[i][i]+a[n-1-i][i]+a[n-1-i][n-1-i]+a[i][n-1-i];
            for(j=i+1;j<(n-i-1);j++)
            {
                sum += a[i][j] + a[n-1-i][j] + a[j][i] + a[j][n-1-i];
            }
            printf(" %lld",sum);
        }
        if(n%2!=0)printf(" %lld",a[n/2][n/2]);
        printf("\n");
    }
    return 0;
}
