#include<stdio.h>
#include<math.h>
int main()
{
    long long int tcase,i,j,x,res,n,z;
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%lld",&n);
        printf("Case %lld:",i);
        z = sqrt(n);
        if(n == z*z)z--;
        for(x=z;x>=1;x--)
            if((n%x)==0)printf(" %lld",n-x*x);
        printf("\n");
    }
    return 0;
}
