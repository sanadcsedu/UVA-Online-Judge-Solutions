#include<stdio.h>
int a[10005];
int main()
{
    int i,x,rem,n,p;
    a[0]=a[1]=x=1;
    for(i=2;i<10001;i++)
    {
        x = x*i;
        while(x%10==0)x /= 10;
        x %= 100000;
        a[i]= x % 10;
    }
    while(scanf("%d",&n)!=EOF)
        printf("%5d -> %d\n",n,a[n]);

    return 0;

}
