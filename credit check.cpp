#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[16];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<16;j++)
        scanf("%1d",&num[j]);

        int even =0 ,odd = 0,k,l,sum = 0;

        for(k=1;k<=15;)
        {
             odd = odd + num[k];
             k=k+2;
        }
        int z,a,b;
        for(l=0;l<=14;)
        {
                z=num[l]*2;
                a=z%10;
                b=z/10;
                even = even + a + b;
                l=l+2;
        }

        sum = even + odd;

        if(sum % 10 == 0)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
