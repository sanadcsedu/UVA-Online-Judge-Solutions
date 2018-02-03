#include<stdio.h>
#include<math.h>
const  double pi= 2*asin(1.0);
int main()
{
    double D,V,d;
    for(;;)
    {
        scanf("%lf %lf",&D,&V);
        if(D==0 && V==0)break;
        d = pow(D,3)-((6.0*V)/pi);
        printf("%.3lf\n",cbrt(d));
    }
    return 0;
}
