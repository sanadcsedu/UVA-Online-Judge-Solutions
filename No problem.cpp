#include<stdio.h>

int main()
{
    int i,j,k,l,x;
    for(l=1;;l++)
    {
        scanf("%d",&x);
        if(x<0)break;
        int create[20],need[20];
        for(i=0;i<=11;i++)
        {
                scanf("%d",&create[i]);
        }
        for(j=0;j<=11;j++)
        {
                scanf("%d",&need[j]);
        }
        printf("Case %d:\n",l);

        for(k=0;k<=11;k++)
        {
            if(x>=need[k])
            {
                printf("No problem! :D\n");
                x = x + create[k]-need[k];
            }
            else
            {
                printf("No problem. :(\n");
                x = x + create[k];
            }

        }

    }
    return 0;

}
