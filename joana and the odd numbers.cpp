#include<stdio.h>
int main()
{
    long long int n,sum,i,res;
    while(scanf("%lld",&n)!=EOF)
    {
        n = (n+1)/2;
        sum = -1;
        for(i=1;i<=n;i++)
        {
            sum = sum + ((4 * i) -2);
        }
        res = (sum - 4)+(sum - 2)+sum;

        printf("%lld\n",res);
    }
}
