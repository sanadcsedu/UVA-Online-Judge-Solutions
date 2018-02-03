#include<stdio.h>
int main()
{
    long long int n,res;
    for(;;){
    scanf("%lld",&n);
    if(n==0)break;

    res = n*(n+1)*(2*n+1);
    res /= 6;
    printf("%lld\n",res);

    }
}
