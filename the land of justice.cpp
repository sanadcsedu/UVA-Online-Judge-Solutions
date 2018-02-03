#include<stdio.h>
int main()
{
    long long int n,res;
    for(;;)
    {
        scanf("%lld",&n);
        if(n<0)break;
        if(n==1)printf("0%%\n");
        else{res = n*25;
        printf("%lld%%\n",res);
        }
    }

}
