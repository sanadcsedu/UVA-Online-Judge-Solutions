#include<stdio.h>
int a[5003][1205];
int main()
{
    int i,j,n;
    a[0][0]=0;
    a[1][0]=a[2][0]=1;
    for(i=3;i<5001;i++)
    {
        for(j=0;j<1200;j++)
        {
            a[i][j]+=a[i-1][j]+a[i-2][j];
            if(a[i][j]>9)
            {
                a[i][j+1]+=a[i][j]/10;
                a[i][j]%=10;
            }
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1200;i>0;i--)
            if(a[n][i]!=0) break;
        printf("The Fibonacci number for %d is ", n);
        for(;i>=0;i--)
            printf("%d", a[n][i]);
        printf("\n");
    }
}
