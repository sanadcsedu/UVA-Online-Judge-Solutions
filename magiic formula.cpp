#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,l,i,res,count;
    for(;;)
    {
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l);
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        break;
        count = 0;
        for(i=0;i<=l;i++)
        {
            res = a*i*i + b*i +c;

            if(res%d == 0)count++;
        }
        printf("%lld\n",count);


    }
    return 0;
}
