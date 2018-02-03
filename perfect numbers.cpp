#include<stdio.h>
#include<math.h>
int isprime(long long int n)
{
    long long int z,i;
    z = sqrt(n);
    for(i=2;i<=z;i++)
    if(n%i==0)return 0;
    return 1;
}
int main()
{
    long long int ncase,i,z,x,n,p;
    scanf("%lld",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%lld",&n);
        z = isprime(n);
        x = isprime(pow(2,p)-1);
        if(z==1 && x==1)printf("Yes\n");
        else printf("No\n");
    }
}
