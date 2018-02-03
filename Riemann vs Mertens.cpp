#include<stdio.h>
#include<math.h>
int seive[1000005];
int primes[1000005];
int mu[1000005];
int main()
{
    int i,j,n,count,k,c,s,x;
    seive[0]=seive[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(seive[i]==0)
        {
            for(j=i+i;j<1000001;j+=i)
            {
                seive[j]=1;
            }
        }
    }
    for(i=2,k=0;i<1000001;i++)
    {
        if(seive[i]==0)primes[k++]=i;
    }
    for(k=1;k<=1000000;k++)
    {
        x = k;
        s = 0;
        c = 0;
        i=0;
        while(primes[i]<=sqrt(k))
        {
            while(x % primes[i]==0)
            {
                c++;
                x /= primes[i];
                s++;
            }
            if(s>1)
            {
                mu[k]=0;
                break;
            }
             i++;
             s = 0;
        }
        if(x>1)c++;
        if(s<2)
        {
            if(c%2==0)mu[k]= 1;
            else mu[k] = -1;
        }

    }
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        count = 0;
        for(i=1;i<=n;i++)
        count += mu[i];

        printf("%8d%8d%8d\n",n,mu[n],count);
    }
    return 0;
}

