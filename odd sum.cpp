#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,i,j,sum;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum =0;
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
