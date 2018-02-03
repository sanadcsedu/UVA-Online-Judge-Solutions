#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x,y,z,sum;
    for(;;)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)break;

        sum = 1080;
        if(a<b)
        x = 360 - fabs(a-b)*9;
        else
        x = fabs(a-b)*9;

        if(c<b)
        y = 360 - fabs(c-b)*9;
        else
        y = fabs(c-b)*9;

        if(c>d)
        z = fabs(c-d)*9;
        else
        z = 360 - fabs(c-d)*9;

        sum = sum + x + y + z;
        printf("%d\n",sum);
    }
}
