#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,x,z,rem;
    while(scanf("%d %d",&n,&d)!=EOF)
    {
        z = 1;
        for(;;)
        {
            rem = n % d;
            x = n / d;
            if (rem == 0)
            {
                printf("%d]",x);
                break;
            }
            if(z)printf("[%d;",x);
            else printf("%d,",x);
            z = 0;
            n = d;
            d = rem;
        }
        printf("\n");
    }
}
