#include<stdio.h>
#include<string.h>
#include<math.h>
long long int big_mod(long long int a,long long int n)
{
    long long int rem;
    rem = a;
    while(n--)
    {
        rem %=  n;
        rem *= a;
    }
    if(rem == a)return 1;
    else return 0;
}
int prime[65005];
int main()
{
    long long int i,j,n,z;
    memset(prime,0,sizeof(prime));
//    memset(cm,0,sizeof(cm));
    prime[0]=prime[1]=1;
    for(i=2;i<255;i++)
    {
        if(prime[i]==0){
        for(j=i+i;j<65001;j+=i)
        prime[j]=1;
        }
    }
    for(i=3;i<65000;i++)
    {
        if(prime[i]==1)
        {
            for(j=2;j<i;j++)
            {
                z = big_mod(i,j);
                if(z == 1)
                printf("%lld ",i) ;
            }
        }

    }
    /*for(;;)
    {
        scanf("%lld",&n);
        if(n==0)break;
        if(cm[n]==1)printf("The number %lld is a Carmichael number.\n",n);
        else printf("%lld is normal.\n",n);
    }*/
    return 0;
}
