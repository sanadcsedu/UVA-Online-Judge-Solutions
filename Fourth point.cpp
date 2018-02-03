#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d1,d2,m,n;;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2)==8)
    {
        if(a1==b1 && a2==b2)
        {
            m=c1+d1-a1;
            n=c2+d2-a2;
        }
        else if(a1==c1 && a2==c2)
        {
            m=b1+d1-a1;
            n=b2+d2-a2;
        }
        else if(a1==d1 && a2==d2)
        {
            m=c1+b1-a1;
            n=c2+b2-a2;
        }
        else if(b1==c1 && b2==c2)
        {
            m=a1+d1-b1;
            n=a2+d2-b2;
        }
        else if(b1==d1 && b2==d2)
        {
            m=a1+c1-b1;
            n=a2+c2-b2;
        }
        else if(c1==d1 && c2==d2)
        {
            n=b1+a1-c1;
            m=b2+a2-c2;
        }
            printf("%.3lf %.3lf\n",m,n);
    }
    return 0;
}
