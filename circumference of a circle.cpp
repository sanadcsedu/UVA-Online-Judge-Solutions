#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,s,k,r,area;

    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a = sqrt(pow((x1-x2),2.0) + pow((y2-y1),2.0));
        b = sqrt(pow((x3-x2),2.0) + pow((y2-y3),2.0));
        c = sqrt(pow((x1-x3),2.0) + pow((y3-y1),2.0));

        s = 0.5 * (a + b + c);

        k = sqrt(s* (s-a) * (s-b) *(s-c));

        r = (a * b * c)/(4.0 * k);

        area = 2.0 * r * 2.0 * asin(1.0);

        printf("%.2lf\n",area);


    }
    return 0;
}
