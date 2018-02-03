#include<math.h>
#include<stdio.h>
int check[46500];
int prime[30000];
int main()
{
    int n,i,holdn,p,j,k;
    check[0]=check[1]=1;
    for(i=2;i<220;i++)
        if(check[i]==0)
            for(j=i+i;j<46499;j+=i)check[j]=1;
    for(i=0,k=0;i<46500;i++)
            if(check[i]==0)prime[k++]=i;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        printf("%d = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n *= -1;
        }
        holdn = n;
        for(i=0,p=1;prime[i]<=sqrt(holdn);i++)
        {
            while(n%prime[i]==0)
            {
                if(p)printf("%d",prime[i]);
                else printf(" x %d",prime[i]);
                p = 0;
                n /= prime[i];
            }
        }
        if(holdn == -1*n)printf(" x %d",holdn);
        else if(holdn == n)printf("%d",holdn);
        else if(n!=1)printf(" x %d",n);
        printf("\n");
    }
    return 0;
}
