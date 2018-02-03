#include<stdio.h>

int happy(long long int z)
{
    long long int sum=0,rem;
    for(;;)
    {
        rem = z%10;
        sum = sum + (rem*rem);
        z = z/10;
        if(z==0)break;
    }
    return sum;
}
int main()
{
    long long int ncase,n,y[10000],i,hold,x;
    scanf("%lld",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%lld",&n);
        hold = n;

        for(int j=0;j<10000;j++)
        y[j]=0;

        for(;;)
        {
            x = happy(hold);
            y[x]++;

            if(x == 1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",i,n);
                break;
            }

            if(y[x] == 2)
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
                break;
            }
            hold = x;
        }
    }
    return 0;
}
