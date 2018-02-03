#include<stdio.h>
#include<math.h>
long long int prime[66000],have[50000];
int main()
{
    long long int i,j,n,sum,k,holdn,f,t;
    prime[0]=prime[1]=1;
    for(i=2;i<260;i++)
        if(prime[i]==0)
            for(j=i+i;j<66000;j+=i)
            prime[j]=1;
    for(i=2,k=0;i<66000;i++)
    if(prime[i]==0)have[k++]=i;

    for(i=1;;i++)
    {
        scanf("%lld",&n);
        if(n==0)break;
        holdn = n;
        for(j=0,f=0,sum=0;have[j]<sqrt(holdn);j++)
        {
            if(n%have[j]==0)
			{
				f++;
				t=1;
				while(n%have[j]==0){
					t*=have[j];
					n/=have[j];
				}
				sum+=t;
			}
        }
        if(f==0) sum= n+1;
		else if(n>1 || f==1) sum+=n;
		printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
