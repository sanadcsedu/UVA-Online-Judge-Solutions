#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int w,i;
    w = sqrt(n);
    for(i=2;i<=w;i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    long long int n,a,b,perfect;
    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)break;
        b = isprime(n);
        if(b==1)
        {
            a = isprime(pow(2,n)-1);
            if(a==1)perfect = pow(2,n-1)*(pow(2,n)-1);
        }
        if(a==1 && b==1)printf("Perfect: %lld!\n",perfect);
        else if(b==1)printf("Given number is prime. But, NO perfect number is available.\n");
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
