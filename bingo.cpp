#include<math.h>
#include<stdio.h>

int main()
{
    int n,b;
    int ball[100];
    for(;;)
    {
        scanf("%d %d",&n,&b);
        if(n==0 && b==0)break;
        ball={0};
        int keep[100]={0};
        for(int i=0;i<b;i++)
        {
            scanf("%d",& ball[i]);
        }
        int z,x;
        for(int j=0;j<b;j++)
        {
            z = ball[j];
            for(int k=j;k<b;k++)
            {
                x=fabs(z-ball[k]);
                keep[x]++;
            }
        }
        int flag=0;
        for(int l=0;l<=n;l++)
        {
            if(keep[l]==0)
            {
                flag=2;
            }
        }
        if(flag==2)printf("N\n");
        else printf("Y\n");


    }
}
