#include<stdio.h>

int main()
{
    long long int a,b,c,x,i;
    for(i=1;;i++)
    {
       scanf("%lld %lld",&a,&b);
       if(a<0 && b<0 )break;

       c = 0;
       x = a;
       for(;a <= b;)
       {
            c++;
            if(a == 1)break;
            if(a % 2 == 0)
            {
                a = a/2;
            }
            else
            {
                a = 3 * a + 1 ;
            }

       }
       printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,x,b,c);
    }

}
