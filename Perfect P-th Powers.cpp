#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,c,holdn,neg,p,sum,flag;
    for(;;)
    {
        scanf("%lld",&n);
        flag=0;
        neg = n;
        if(n==0)break;
        holdn = n;
         c=0;
        if(n<0)
        {
            for(i=-2;i>=-sqrt(neg*-1);i--)
            {
                sum =1;
                c = 2;
                for(;;)
                {
                    sum *= i;
                    if(sum<=neg)break;
                    c++;
                }
                if(sum==neg)
                {
                    flag=1;
                    printf("%lld\n",c-1);
                    break;
                }
            }
            if(flag!=1)printf("1\n");

        }
        else
        {
            for(i=2;i<=sqrt(holdn);i++)
            {
                c = 0;
                for(;;)
                {
                    if(n%i != 0 || n==1)break;
                    if(n%i==0)
                    {
                        c++;
                        n = n/i;
                    }

                }
                if(n==1)break;
                else n = holdn;
            }
             if (c==0)c++;
            printf("%lld\n",c);
        }

    }
    return 0;
}
