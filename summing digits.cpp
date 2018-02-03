#include<stdio.h>
#include<math.h>

int main()
{

    long long int a,z,x;
    for(;;)
    {
        scanf("%lld",&a);
        if(a==0)break;

        if(a<10)printf("%lld\n",a);


        for(;a>=10;)
        {
            x = log10(a);
            long long int p,i,t_p = 0;

            for(i=x;i>=0;i--)
            {
                z = pow(10,i);
                p = a / z;
                t_p =t_p + p;
                a = a % z;
                if(a==0)break;

            }
            if(t_p<10)printf("%d\n",t_p);
            a = t_p;
        }
    }
}
