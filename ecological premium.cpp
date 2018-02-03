#include<stdio.h>

int main()
{
    int n,f,i,j;
    long long int x,y,z,total;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
        scanf("%d",&f);
        total = 0;
        for(j=1;j<=f;j++)
        {
            scanf("%lld %lld %lld",&x,&y,&z);

            total = total + x*z;

        }
            printf("%lld\n",total);
        }
    }



}
