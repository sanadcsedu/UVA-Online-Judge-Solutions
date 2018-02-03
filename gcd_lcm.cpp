#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    long long int a,b;
    long long int x=a,y=b;
    long long int m=a*b;
    long long int rem,l;

    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        x=a;
        y=b;
        m=a*b;
        int flag=0;
        for(;;)
        {
            rem=a%b;
            if(rem==0)
            {
                if(b==x||b==y)
                {
                    l=m/b;
                    if(l==y||l==x)
                    {
                        printf("%lld %lld\n",b,l);
                        break;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            a=b;
            b=rem;
        }
        if(flag==1)printf("-1\n");
    }
}
