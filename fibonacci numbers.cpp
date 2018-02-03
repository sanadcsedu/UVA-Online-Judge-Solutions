#include<stdio.h>
int f[5005][1005]={0};
int main()
{
    int i,j,n;
    f[0][0]=0;
    f[1][0]=f[2][0]=1;
    for(i=3;i<5001;i++)
    {
        for(j=0;j<1001;j++)
        {
            f[i][j]+=f[i-1][j]+f[i-2][j];
            if(f[i][j]>9)
            {
                f[i][j]%=10;
                f[i][j+1]++;
            }
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1001;i>0;i--)
        if(f[n][i]!=0)break;

        for(;i>=0;i--)
        printf("%d",f[n][i]);
        printf("\n");
    }

}
