#include<stdio.h>
long long int a[85];
int main()
{
    int i,n;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=80;i++)
    a[i]=a[i-1]+a[i-2];
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        printf("%lld\n",a[n]);
    }
    return 0;
}
