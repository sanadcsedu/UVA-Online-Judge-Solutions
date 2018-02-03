#include<stdio.h>

int main()
{
    long double n,k,sum,i,j,c;

        while(scanf("%Lf %Lf",&n,&k))
        {
        if(n==0)break;

        if(k > n-k) k = n-k;

        for(sum=1,c=k;c>0;n--,c--)
        {
            sum = sum * n;
        }

        for(;k>1;k--)
        {
            sum = sum / k;
        }

        printf("%.0Lf\n",sum);
    }
    return 0;

}
