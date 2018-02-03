#include<stdio.h>
int main()
{
    int ncase,n,m,c,i,b;
    scanf("%d",&ncase);
    for(i=1;i<=ncase;i++)
    {
        c = 0;
        scanf("%d %d",&n,&m);
        for(;;)
        {
            b = n - m;
            c++;
            if(b==0)
            {
                printf("%d\n",c);
                break;
            }
            if(b<0)
            {
                printf("cannot do this\n");
                break;
            }
            n = b + 1;
        }
    }
}
