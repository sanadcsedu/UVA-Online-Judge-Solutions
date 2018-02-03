#include<stdio.h>
#include<math.h>

double perimeter(int x,int y,int z)
{
    double s,p,m,t;
    t = x+y+z;
    s= t/2.0;

    if(s<x || s<z || s<y)return -1;

    p=s*(s-x)*(s-y)*(s-z);
    m=sqrt(p);
    return m;
}

int main()
{
    int a,b,c;
    double area,k;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        k = perimeter(a,b,c);
        if(k == -1)
        {
            printf("-1\n");
        }
        else
        {
            area = (4.0*k)/3.0;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
