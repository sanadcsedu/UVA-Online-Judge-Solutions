#include<stdio.h>

int main()
{
    int x,i,p,c;
    for(i=1;;i++)
    {
        scanf("%d",&x);
        if(x<0)break;
        p=1;
        c=0;
        for(;;)
        {
            if(x==1 || x==0)break;
            p = p*2;
            if(x<=p)
            {
                c++;
                break;
            }
            else c++;
        }
        printf("Case %d: %d\n",i,c);

    }
    return 0;
}
