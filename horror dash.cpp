#include<stdio.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    int x,y,max;
    for(int k=1;k<=t;k++)
    {
        scanf("%d",&x);
        max=x;
        for(i=1;i<=x;i++)
        {
            scanf("%d",&y);

            if(max<y)
            max=y;
        }

        printf("Case %d: %d\n",k,max);
    }
}
