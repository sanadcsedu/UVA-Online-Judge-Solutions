#include<stdio.h>

int main()
{
    long long int c,d,sum,tcase,n,rem;
    scanf("%lld",&tcase);
    for(int j=1;j<=tcase;j++){

    scanf("%lld",&n);
    c = 0;
    sum =0;
    d = n;
    for(;;)
    {
        sum = 0;
        for(;;)
        {
            rem = d % 10;
            sum = rem + sum*10;
            d = d / 10;
            if(d == 0)break;
        }

        if(sum == n)break;
        else
        {
            c++;
            d = n + sum;
            n = n + sum;
        }
    }
        printf("%lld %lld\n",c,n);
    }
    return 0;
}
