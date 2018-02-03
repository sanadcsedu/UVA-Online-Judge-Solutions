#include<stdio.h>
int main()
{
    long long int a[25],n,i,j,k=1,product,max,l;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        max = 0;
        for(j=0;j<n;j++)
        {
            product = 1;
            for(l=j;l<n;l++)
            {
                product = product * a[l];
                if(product>max)max = product;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",k++,max);
    }
}
