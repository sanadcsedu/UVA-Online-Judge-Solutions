#include<stdio.h>
long long int total(long long int n)
{
    long long int sum,z,i,x,d=0;
    if(n==0)return 0;
    d = n%10;
    sum = total(n/10) + 45*(n/10) + (d*d + d)/2;
    return sum;
}
int main()
{
    long long int p,q,x,y;
    for(;;)
    {
        scanf("%lld %lld",&p,&q);
        if(p<0 && q<0)break;
        x = total(p-1);
        y = total(q);
        printf("%lld\n",y-x);
    }
    return 0;
}
