#include<stdio.h>
int main()
{
    long long int n,b,h,w,z,rent,i,j,cost;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)==4)
    {
        cost = b+1;
        for(i=0;i<h;i++)
        {
            scanf("%lld",&rent);
            for(j=0;j<w;j++)
            {
                scanf("%lld",&z);
                if(z>=n)
                {
                    if(cost>(n*rent))
                    cost=n*rent;
                }
            }

        }
        if(cost>=b)printf("stay home\n");
        else printf("%lld\n",cost);
    }
    return 0;
}
