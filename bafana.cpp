#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n,k,p,b;
        scanf("%d %d %d",&n,&k,&p);

        b=(k-1+p)%n + 1;

        printf("Case %d: %d\n",i,b);

    }

}
