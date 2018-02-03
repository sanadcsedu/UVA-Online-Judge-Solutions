#include<stdio.h>

int main()
{
    long long int n,sum1,i,flag,j,sum2;
    while(scanf("%lld",&n)!=EOF)
    {
            if(n>=0)
            {
                if(n>=14)printf("Overflow!\n");
                else if(n<=7)printf("Underflow!\n");
                else
                {
                    sum1=1;
                    for(i=1;i<=n;i++)
                    {
                        sum1 = sum1 * i;
                    }
                    printf("%lld\n",sum1);
                }
            }
            else
            {
                if(n%2==0)printf("Underflow!\n");
                else printf("Overflow!\n");

            }
}
    }
