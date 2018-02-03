#include<stdio.h>

int main()
{
    int a[1000050],b[1000050];
    long long int x,n,j,sum,k,l,carry;

    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&x);

        for(j=0;j<x;j++)
        scanf("%d %d",&a[j],&b[j]);

        for(k=x-1;k>=0;k--)
        {
            sum = a[k] + b[k] + sum;
            a[k] = sum % 10;
            sum =sum / 10;
        }

        for(l=0;l<x;l++)
        {
            printf("%d",a[l]);
        }
         if(n)
            printf("\n\n");
        else
            printf("\n");
    }
}
