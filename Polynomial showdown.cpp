#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int a[10];
int main()
{
    int i;
    while(scanf("%d %d %d %d %d %d %d %d %d",&a[8],&a[7],&a[6],&a[5],&a[4],&a[3],&a[2],&a[1],&a[0])==9)
    {
        bool flag = true;
        for(i=8;i>0;i--)
        {
            if(a[i]!=0)
            {
                if(a[i]==-1 || a[i]==1)
                {
                    if(flag)
                    {
                        if(i==1)
                        {
                            if(a[i]<0)printf("-x");
                            else printf("x");
                        }
                        else
                        {
                            if(a[i]<0)printf("-x^%d",i);
                            else printf("x^%d",i);
                        }
                        flag = false;
                    }
                    else
                    {

                        if(i==1)
                        {
                            if(a[i]<0)printf(" - x");
                            else printf(" + x");
                        }
                        else
                        {
                            if(a[i]<0)printf(" - x^%d",i);
                            else printf(" + x^%d",i);
                        }
                    }
                }
                else
                {
                    if(flag)
                    {
                        if(i==1)printf("%dx",a[i]);
                        else printf("%dx^%d",a[i],i);
                        flag = false;
                    }
                    else
                    {
                        if(i==1)
                        {
                            if(a[i]<0)printf(" - %dx",(-1)*a[i]);
                            else printf(" + %dx",a[i]);
                        }
                        else
                        {
                            if(a[i]<0)printf(" - %dx^%d",(-1)*a[i],i);
                            else printf(" + %dx^%d",a[i],i);
                        }
                    }
                }
            }
        }
        if(a[0]!=0)
        {
            if(flag)
            {
                flag = false;
                printf("%d",a[0]);

            }
            else
            {
                if(a[0]<0)printf(" - %d",(-1)*a[0]);
                else printf(" + %d",a[0]);
            }
        }
        if(flag)printf("0");
        printf("\n");
    }
    return 0;
}
