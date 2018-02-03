#include<stdio.h>
int num[110][110];
int main()
{
    int i,j,k,n,temp,max;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&num[i][j]);
                num[i][j] += num[i-1][j];
            }
        }
        max = num[1][1];
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                temp = 0;
                for(k=1;k<=n;k++)
                {
                    if(temp<0)temp = 0;
                    else temp += num[j][k]-num[i-1][k];
                    if(max<temp)max = temp;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
