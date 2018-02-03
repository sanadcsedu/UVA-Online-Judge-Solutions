#include<stdio.h>
#include<string.h>
int main()
{
    int tcase,i,j,k,a,b,c,t;
    scanf("%d",&tcase);
    for(t=1;t<=tcase;t++)
    {
        scanf("%d %d %d",&a,&b,&c);
        bool flag = false;
        for(i=-100;i<=100;i++)
        {
            for(j=-100;j<=100;j++)
            {
                for(k=-100;k<=100;k++)
                {
                    if(i==j || j==k || k==i) continue;
                    else if(i+j+k == a && i*j*k == b && i*i+j*j+k*k == c )
                    {
                        flag = true;
                        printf("%d %d %d\n",i,j,k);
                        break;
                    }
                }
                if(flag)break;
            }
            if(flag)break;
        }
        if(!flag)printf("No solution.\n");
    }
    return 0;
}
