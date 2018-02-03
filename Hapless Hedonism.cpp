#include<stdio.h>
long long int DP[1000000];
int main()
{
    long long int tcase,i,N,z;
    for(i=4;i<1000000;i++)
    {
        z = i/2 - 1;
        if(i%2==0)DP[i] = DP[i-1]+ z*z ;
        else DP[i] = DP[i-1] + z*z + z;
    }
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%lld",&N);
        printf("%lld\n",DP[N]);
    }
    return 0;
}
