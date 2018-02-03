#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,x,y,c,i;
    for(;;)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)break;
        c= 0;
        for(i=a;i<=b;i++)
        {
            x = sqrt(i);
            if((x*x) == i)c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
