#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,b1,b2,c1,c2;
    double det,x,y;
    for(;;)
    {
        scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
        if(a1==0 && a2==0 && b1==0 && b2==0 && c1==0 && c2==0)break;
        det = (a1*b2-b1*a2);
        if(det==0)printf("No fixed point exists.\n");
        else
        {
            x = (c1*b2-c2*b1)/det;
            y = (a1*c2-c1*a2)/det;
            if(x==-0.0)x=0;
            if(y==-0.0)y=0;
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;
}
