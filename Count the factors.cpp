#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[1000005];
int main()
{
    long long int i,j,n,factor,w,c;
    prime[0]=prime[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<=1000000;j+=i)
            prime[j]=1;
        }
    }
    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)break;
        w = sqrt(n);
        c = 0;
        for(i=2;i<=n/2;i++)
            if(n%i==0 && prime[i]==0)c++;
        if(c==0)printf("%lld : %lld\n",n,1);
        else printf("%lld : %lld\n",n,c);
    }
    return 0;
}
