#include<stdio.h>
#include<math.h>

int main()
{
    int a[4000],b[4000];
    int x,y,i,j,k,flag,l;
    while(scanf("%d",&x)!=EOF)
    {
        for(l=0;l<4000;l++)
        {
            a[l]=0;
            b[l]=0;
        }
        for(i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<x-1;j++)
        {
            y = fabs(a[j]-a[j+1]);
            b[y]++;
        }
        flag=1;
        for(k=1;k<x;k++)
        {
            if(b[k]==0)
            {
                flag = 2;
                break;
            }

        }
        if(flag==1)printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;

}
