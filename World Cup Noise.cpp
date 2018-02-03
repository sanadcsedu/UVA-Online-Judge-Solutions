#include<stdio.h>
int main()
{
    unsigned long long fibonacci[55];
    unsigned long long n,j,i,ncase;
    fibonacci[0]=1;
    fibonacci[1]=1;
    for(i=2;i<53;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    scanf("%llu",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%llu",&n);
        printf("Scenario #%llu:\n%llu\n\n",i,fibonacci[n+1]);

    }
}

