#include<stdio.h>
#include<string.h>
long long int prime[1000000]={0};
int main()
{
    long long int i,j,k,n,count,x;
    prime[0]=prime[1]=1;
    for(i=2;i<1000;i++)
    {
        if(prime[i]==0)
        for(j=i+i;j<1000000;j+=i)prime[j]=1;
    }
    for(;;)
    {
        count = x = 0;
        scanf("%lld",&n);
        if(n==0)break;
        for(i=2;i<=n/2;i++)
        {
           if(prime[i]==0 && prime[n-i]==0)count++;

        }
        printf("%lld\n",count);
    }
    return 0;
}


