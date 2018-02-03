#include<stdio.h>
#include<math.h>
int DP[500005],check[1000],primes[1000];
int main()
{
    int i,j,k,n,sum,a,b,temp,tcase,max;
    check[0]=check[1]=1;
    for(i=2;i<1000;i++)
    {
        if(check[i]==0)
            for(j=i+i;j<1000;j+=i)
                check[j]=1;
    }
    for(i=2,k=0;i<1000;i++)
        if(check[i]==0)primes[k++]=i;

    for(i = 1;i<500005;i++)
    {
        n = i;
        sum = 0;
        for(j=0;sqrt(n)>=primes[j];)
        {
            if(n%primes[j]==0)
            {
                sum+=primes[j];
                n /= primes[j];
            }
            else j++;
        }
        if(n>1)sum = sum+n;
        if(i==sum)DP[i]=1;
        else DP[i] = DP[sum]+ 1;
    }
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        max = 0;
        for(j = a;j<=b;j++)
            if(DP[j]>max)max = DP[j];

            printf("Case #%d:\n",i);
            printf("%d\n",max);
    }
    return 0;
}
