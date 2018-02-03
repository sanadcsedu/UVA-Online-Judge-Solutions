#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,sum,i;
    printf("PERFECTION OUTPUT\n");
    for(;;){
    scanf("%lld",&n);
    if(n==0)
    {
        printf("END OF OUTPUT\n");
        break;
    }
    if(n==1)
    {
        printf("%5lld  DEFICIENT\n",n);
        continue;
    }
    sum = 0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)printf("%5lld  PERFECT\n",n);
    else if(sum < n)printf("%5lld  DEFICIENT\n",n);
    else printf("%5lld  ABUNDANT\n",n);
}
}
