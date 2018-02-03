#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,h,m,hnew,mnew;
    double a;
    for(i=1;i<=n;i++)
    {
        scanf("%d:%d",&h,&m);
        h = h%12;
        a = h*30+0.5*m;

        a =fabs(360 - a);

        hnew = a/30;
        mnew = (a - (hnew * 30))/(.5) ;

        if(hnew == 0)
        {
            if(mnew<10)printf("12:0%d\n",mnew);
            else printf("12:%d\n",mnew);
        }
        else
        {
            if(hnew<10)
            {
                if(mnew<10)printf("0%d:0%d\n",hnew,mnew);
                else printf("0%d:%d\n",hnew,mnew);
            }
            else
            {
                if(mnew<10)printf("%d:0%d\n",hnew,mnew);
                else printf("%d:%d\n",hnew,mnew);
            }

        }
    }
}


