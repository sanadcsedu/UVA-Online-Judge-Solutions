#include<stdio.h>
#include<string.h>

int main()
{
    long long int coins[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
    long long int change[40004];
    memset(change,0,sizeof(change));
    change[0]=1;
    long long int i,j,c,n;
    for(i=0;i<21;i++)
    {
        c = coins[i];
        for(j=0;j<=10000;j++)
        {
            change[j+c]+=change[j];
        }
    }

    while(scanf("%lld",&n)!=EOF)
    {
       printf("%lld\n",change[n]);
    }
    return 0;
}
