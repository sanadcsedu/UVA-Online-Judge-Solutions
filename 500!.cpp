#include<stdio.h>
#include<math.h>
int a[1005][2600];
int main()
{
    int i,j,n;
    a[0][0]=a[1][0]=1;
    for(i=2;i<1001;i++)
    {
        for(j=0;j<2600;j++)
        {
            a[i][j]+=a[i-1][j]*i;
            if(a[i][j]>9)
            {
                a[i][j+1]=a[i][j]/10;
                a[i][j]%=10;
            }
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d!\n",n);
        for(i=2600-1;i>=0;i--)
            if(a[n][i]!=0)break;
        for(;i>=0;i--)
        printf("%d",a[n][i]);
        printf("\n");
    }
    return 0;
}
