#include<stdio.h>
#include<math.h>
int main()
{
    long long int ncase,i,sum,n;
    scanf("%lld",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%lld",&n);
        sum = (sqrt(1+8*n)-1)/2;
        printf("%lld\n",sum);
    }
}
