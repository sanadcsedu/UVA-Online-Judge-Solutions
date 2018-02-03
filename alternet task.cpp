#include<stdio.h>
#include<string.h>
int sum_factor(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++){
    if(n%i==0)c+=i;
    if(c>1000)break;}
    return c;
}
int main()
{
    int a[1005];
    memset(a,-1,sizeof(a));
    int i,n,z;
    for(i=1;i<=1000;i++)
    {
        z= sum_factor(i);
        if(z<1000)
        {
            a[z]=i;
        }
    }
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n==0)break;
        printf("Case %d: %d\n",i,a[n]);
    }
}
