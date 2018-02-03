#include<stdio.h>
#include<math.h>

int main()
{
    int a,c,b;
    double s,k,incircle,outcircle,triangle,r;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        s = (a + b + c)/2.0;

        k = sqrt(s * (s-a) * (s-b) * (s-c));

        incircle = 2.0 * asin(1.0) * (k/s) * (k/s);

        triangle = k - incircle;

        r = (a * b * c)/(4.0 * k);
        outcircle = (2.0 * asin(1.0) * r * r) - k;

        printf("%.4lf %.4lf %.4lf\n",outcircle,triangle,incircle);

    }

}

