#include<stdio.h>

int main()
{
    long long int n,k,t,z,x,m;
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        t = n;
        for(;;)
        {
            z = n / k;
            if( z < 1)break;
            t = t + z;
            n = n % k + z;

        }


        printf("%lld\n",t);
    }
    return 0;
}
