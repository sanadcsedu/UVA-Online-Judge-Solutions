#include<stdio.h>
#include<math.h>
int main()
{
    double x,area,res,redian;
    int l,w,h,a;
    redian = (2.0 * asin(1.0))/180.0;
    while(scanf("%d %d %d %d",&l,&w,&h,&a)!=EOF)
    {
        x = l*tan(a*redian);
        if(x<=h)
        {
            area = w*0.5*l*l*tan(a*redian);
            res = (l*h*w)-area;
        }
        else
        {
            area = 0.5*h*h*tan((90-a)*redian);
            res = w*area;
        }
        printf("%.3lf mL\n",res);

    }
    return 0;
}
