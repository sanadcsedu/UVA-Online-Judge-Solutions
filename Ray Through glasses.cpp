#include<stdio.h>
int a[1000][400];
int main()
{
    int i,j,n,c;
    a[0][0]=1;
    a[1][0]=2;
    for(i=2;i<=1000;i++)
    {
        c = 0;
        for(j=0;j<300;j++)
        {
            a[i][j]=a[i-1][j]+a[i-2][j]+c;
            if(a[i][j]>=10)
            {
                a[i][j]%=10;
                c = 1;
            }
            else c = 0;
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(i=299;i>=0;i--)
            if(a[n][i]!=0)break;

        for(j=i;j>=0;j--)
        printf("%d",a[n][j]);
        printf("\n");
    }
    return 0;
}
