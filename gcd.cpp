#include<stdio.h>

int main()
{
    int n,g,rem,i,a,j,b;
    for(;;)
    {
        scanf("%d",&n);
        if(n == 0) break;
        g=0;
        for(i=1;i<n;i++)
        {

        for(j=i+1;j<=n;j++)
        {
            a = i;
            b = j;
            for(;;)
            {
                rem= a % b;
                if(rem==0)
                {
                    g = g + b;
                    break;
                }
                a = b;
                b = rem;
            }
        }
    }
    printf("%d\n",g);
}
}
