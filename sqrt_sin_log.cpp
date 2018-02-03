#include<stdio.h>
#include<math.h>
int squareroot(int i)
{
    double y = (sqrt(i));
    return (int)floor(i-y);
}
int ln(int i)
{
    double y = log(i);
    return (int)floor(y);
}
int sin2(int i)
{
    double j=sin(i);
    return i*j*j;
}
long long int x[1000005]={0};
int main()
{
    long long int i,n;
    x[0]=1;
    for(i=1;i<1000000;i++)
    x[i]= (x[squareroot(i)]+x[ln(i)]+x[sin2(i)])%1000000;

    for(;;)
    {
        scanf("%lld",&n);
        if(n==-1)break;
        printf("%lld\n",x[n]);

    }
}
