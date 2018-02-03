#include<stdio.h>
int main()
{
    long long int n,i,sum;
    for(;;)
    {
        scanf("%lld",&n);
        if(n<0)break;

        sum =0;
        for(i=1;i<=n;i++)
        {
            sum =sum + i;
        }
        printf("%lld\n",sum+1);

    }
    return 0;

}
