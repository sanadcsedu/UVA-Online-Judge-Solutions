#include<stdio.h>
int check[2000000];
int main()
{
    long long int m,n,c,i,j,a;
    for(;;)
    {
        for(i=0;i<1000004;i++)
        check[i]=0;
        scanf("%lld %lld",&n,&m);
        if(n==0 && m==0)break;
        c = 0;
        for(i=1;i<=n;i++){
        scanf("%lld",&a);
        check[a]=1;
        }

        for(i=1;i<=m;i++){
        scanf("%lld",&a);
        if(check[a]==1)c+=1;
        }
        printf("%lld\n",c);
    }
    return 0;
}
