#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,k,sum,i,j,c;
    while(scanf("%lld %lld",&n,&k))
    {
        if(n==0 && k==0)break;
        j = k;
        if(k > n-k) k = n-k;
        sum = 1;
        for(i=1;i<=k;i++)
        sum = sum * (n-i+1)/i;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,j,sum);
    }
    return 0;
}
