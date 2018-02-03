#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        while(n>18)n = ceil(n/18.0);

        if(n>=2 && n<=9)printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
