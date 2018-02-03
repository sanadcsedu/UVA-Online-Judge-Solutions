#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,n,tcase,sum,p,q,d;
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++)
    {
        sum =0;
        scanf("%lld",&n);
        if(n>0)
        {
            p = n;
            d = floor(sqrt(n));
            for(j=1;j<=d;++j)
            {
                q = n/j;
                sum += (p-q)*(j-1) + q;
                p = q;
            }
            if(n/d>d)sum+=d;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
