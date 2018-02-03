#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,x;
    for(;;)
    {
        scanf("%lld",&n);
        if(n == 0)break;
        x = sqrt(n);

        if(x * x == n)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
