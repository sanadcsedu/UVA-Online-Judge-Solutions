#include<stdio.h>
long long int DP[1000003];
int main()
{
    long long int z,i,n;
    for(i=3;i<1000001;i++)
    {
        z = i/2 -1;
        if(i%2==0)DP[i]=DP[i-1]+z*z;
        else DP[i]=DP[i-1]+z*z+z;
    }
    for(;;)
    {
        scanf("%lld",&n);
        if(n<3)break;
        printf("%lld\n",DP[n]);
    }
    return 0;
}
