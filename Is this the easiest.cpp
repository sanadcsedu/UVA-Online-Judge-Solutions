#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long int a,b,c;

    for(int i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c)
            printf("Case %d: Equilateral\n",i);

            else if(a==b || b==c || c==a)
            printf("Case %d: Isosceles\n",i);

            else
            printf("Case %d: Scalene\n",i);

        }
        else
        printf("Case %d: Invalid\n",i);


    }
    return 0;
}
