#include<stdio.h>
int main()
{
    long long int a[15]={561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745,63973};
    long long int n,i,flag;
    for(;;)
    {
        flag = 0;
        scanf("%lld",&n);
        if(n==0)break;
        for(i=0;i<15;i++)
            if(a[i]==n)flag = 1;
        if(flag ==1)printf("The number %lld is a Carmichael number.\n",n);
        else printf("%lld is normal.\n",n);
    }
    return 0;
}
