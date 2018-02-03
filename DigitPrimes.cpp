#include<stdio.h>
#include<math.h>
long long int total(long long int q)
{
    long long int sum,rem;
    sum = 0;
    for(;;)
    {
        rem = q%10;
        sum+=rem;
        q = q/10;
        if(q==0)break;
    }
    return sum;
}
long long int seive[1000000]={0};
long long int DP[1000000]={0};
int main()
{
    long long int i,n,a,p,b,c,j;
    seive[0]=seive[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(seive[i]==0)
        {
            for(j=i+i;j<=999999;j+=i)
            seive[j]=1;
        }
    }
    DP[0]=DP[1]=0;
    for(i=2;i<1000000;i++)
    {
        if(seive[i]==0)
        {
            if(seive[total(i)]==0)
            DP[i]=DP[i-1]+1;
            else DP[i]=DP[i-1];

        }
        else DP[i]=DP[i-1];
    }
    scanf("%lld",&n);
    for(p=1;p<=n;p++)
    {
        scanf("%lld %lld",&a,&b);
        c = DP[b]-DP[a-1];
        printf("%lld\n",c);
    }
    return 0;
}
