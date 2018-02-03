#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    double cel,x,fer,celnew;
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf",&cel,&fer);

        x=((9*cel)/5)+32;
        celnew=x+fer;

        celnew=((celnew-32)*5)/9;

        printf("Case %d: %.2lf\n",i,celnew);
    }
    return 0;

}
