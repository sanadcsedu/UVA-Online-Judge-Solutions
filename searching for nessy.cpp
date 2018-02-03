#include<stdio.h>
int main()
{
    int m,x,n;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        scanf("%d %d",&n,&m);

        m = m/3;
        n = n/3;

        printf("%d\n",(m*n));
    }
    return 0;
}
