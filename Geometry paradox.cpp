#include<stdio.h>
#include<math.h>
#include<string.h>
const double pi=2*asin(1.0);
int main()
{
    char input[50];
    int r1,r2,t,tcase,i;
    double res;
    scanf("%d",&tcase);
    getchar();
    for(i=1;i<=tcase;i++)
    {
        memset(input,0,sizeof(input));
        r1=r2=0;
        gets(input);
        sscanf(input,"%d %d",&r1,&r2);
        if(r1==0 && r2!=0)
        {
            t=r2;
            res = (pi*t*t*1.0)/8.0;
        }
        else if(r1!=0 && r2==0)
        {
             t=r1;
             res = (pi*t*t*1.0)/8.0;
        }
        else
            res = pi*((r1+r2)*(r1+r2)-(r1*r1+r2*r2));

        printf("%.4lf\n",res);
    }
    return 0;
}
