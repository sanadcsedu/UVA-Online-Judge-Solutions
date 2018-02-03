#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[1000005];
void seive()
{
    long long int i,j;
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(i=2;i<=1000;i++)
    {
        for(j=i+i;j<1000000;j+=i)
        prime[j]=1;
    }
}
int main()
{
    long long int ori,rev,i,n,rem;
    seive();
    while(scanf("%lld",&n)!=EOF)
    {
        ori = n;
        rev = 0;
        for(;;)
        {
            rem = n % 10;
            rev = rev*10 + rem;
            n  = n/10;
            if(n==0)break;
        }

        int x,y;
        x = prime[ori];
        y = prime[rev];
        if(rev == ori && x==0)printf("%lld is prime.\n",ori);
        else if(x==0 && y==0)printf("%lld is emirp.\n",ori);
        else if(x==0 && y==1)printf("%lld is prime.\n",ori);
        else printf("%lld is not prime.\n",ori);
    }
}
