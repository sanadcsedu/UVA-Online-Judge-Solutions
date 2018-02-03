#include<stdio.h>
#include<string.h>
long long int prime[1000000];
long long int only_prime[1000000];
void seive()
{
    long long int i,j,k;
    memset(prime,0,sizeof(prime));
    memset(only_prime,0,sizeof(only_prime));
    prime[0]=prime[1]=1;
    for(i=2;i<1000;i++)
    {
        if(prime[i]==0){
        for(j=i+i;j<1000000;j+=i)
        {
            prime[j]=1;
        }
        }
    }
    for(i=2,k=0;i<1000000;i++)
    {
        if(prime[i]==0){
        only_prime[k]=i;
        k++;
        }
    }
}
int main()
{
    seive();
    long long int n,i,sum,flag;
    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)break;
        flag=0;
        for(i=0;n>only_prime[i];i++)
        {
            sum = n - only_prime[i];
            if(prime[sum]==0)
            {
                flag=1;
                printf("%lld = %lld + %lld\n",n,only_prime[i],sum);
                break;
            }
        }
        if(flag!=1)printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

