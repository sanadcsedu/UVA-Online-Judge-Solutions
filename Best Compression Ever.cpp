#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,b,i,sum;
    while(scanf("%lld %lld",&N,&b)!=EOF)
    {
        sum =0;
        for(i=0;i<=b;i++)
        sum += pow(2,i);
        if(sum>=N)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
