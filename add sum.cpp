#include<stdio.h>
int main()
{
    long long int n,sum,i,j,a,b[10000],c;
    for(;;){

    scanf("%lld",&n);
    if(n==0)break;
    for(i=0;i<n;i++)
    scanf("%lld",&b[i]);

    a = b[0];
    sum = 0;
    for(j=1;j<n;j++)
    {
        c = a + b[j];
        sum = sum + c;
        a = c;
    }
    printf("%lld\n",sum);
}
}
