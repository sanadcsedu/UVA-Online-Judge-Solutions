#include<stdio.h>
#include<math.h>

const double pi = (acos(-1.0));

int main()
{
    double n,z;

    while(scanf("%lf",&n)!=EOF)
    {
        z = n* sin((108 * pi)/ 180) / sin((63 * pi)/180);

        printf("%.10lf\n",z);

    }
    return 0;
}
