#include<stdio.h>

int main()
{
    long long int n,i,s,d,x,y;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld",&s,&d);
        if(s>=d)
        {
            x = (s + d) / 2;
            y =  x - d ;

            if((x + y)== s )
            printf("%lld %lld\n",x,y);
            else
            printf("impossible\n");

        }
        else printf("impossible\n");

    }

}
