#include<stdio.h>
#include<math.h>
#include<string.h>
long long int isprime(long long int n)
{
    long long int w,i;
    w = sqrt(n);
    for(i = 2;i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
//long long int primes[100000];
int main()
{
    long long int i,j,z,flag,n,w,sum;
    /*memset(primes,0,sizeof(primes));
    for(i=2,j=0;i<100000000;i++)
    {
        z = isprime (i);
        if(z==1)primes[j++]=i;
    }*/
    while (scanf("%lld",&n)!=EOF)
    {
        flag = 0;
        w = sqrt(n);
        for(i=1;i<=w;i++)
        {
            if(isprime(i))
            {
                sum = n - i;
                if(isprime(sum))
                {
                        flag = 1;
                        printf("%lld is the sum of %lld and %lld.\n",n,i,sum);
                        break;

                }
            }
        }
        if(flag == 0)printf("%lld is not the sum of two primes!\n",n);
    }
}
