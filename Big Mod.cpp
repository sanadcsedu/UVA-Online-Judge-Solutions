#include<stdio.h>
#include<math.h>
int bigmod(int b,int p, int m)
{
    int x = 1,power;
    power = b%m;
    while(p)
    {
        if( p & 1 )x = (power*x)%m;
        power = (power*power)%m;
        p>>=1;
    }
    return x;
}
int main()
{
    int B,p,M,z;
    while(scanf("%d %d %d",&B,&p,&M)!=EOF)
    {
        z = bigmod(B,p,M);
        printf("%d\n",z);
    }
    return 0;
}
