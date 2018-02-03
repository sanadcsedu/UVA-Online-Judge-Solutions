#include<stdio.h>
#include<math.h>

int main()
{

    double area,r,n,pi,angle;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        pi = 2 * asin(1);
        angle = (360/n) * (pi/180);
        area = n* .5 * r * r * sin(angle);
        printf("%.3lf\n",area);
    }
}
