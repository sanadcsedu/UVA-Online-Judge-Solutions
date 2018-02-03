#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(!a||!b||!c)printf("The radius of the round table is: %.3lf\n",0);
        else{
        s = (a+b+c)/2.0;
        r= sqrt((s-a)*(s-b)*(s-c)*s)/s;
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}
