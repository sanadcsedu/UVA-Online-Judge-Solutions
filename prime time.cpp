#include<stdio.h>
#include<math.h>
#include<string.h>
int primes[10005];
long long int isprime(long long int n)
{
    long long int w,i;
    w = sqrt(n);
    for(i=2;i<=w;i++)
    if(n%i==0)return 0;
    return 1;
}
int main()
{
    long long int a,b,c,i,eular,z,temp;
    double res;
    memset(primes,0,sizeof(primes));
    for(i=0;i<10000;i++)
    {
        eular = i*i + i + 41;
        z = isprime(eular);
        if(z==1)primes[i]=1;
    }
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
            {
            temp=a;
            a=b;
            b=temp;

            b=a;
            }
        c = 0;
        for(i=a;i<=b;i++)
        if(primes[i]==1)c++;

        res = (c*1.0/(b-a+1)*1.0) * 100 + (1e-7);
        printf("%.2lf\n",res);
    }
}
