#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,bin,hex,bin1,j,x,rem,cb,ch,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&bin);
        x = log10 (bin);
        bin1 = bin;
        hex = 0;
        for(j=0;j<=x;j++)
        {
            rem = bin1 % 10;
            hex = hex + rem * pow(16,j);
            bin1 = bin1 / 10;
        }
        cb = 0,ch = 0;
        for(;;)
        {
            p = bin % 2;
            if(p==1)cb++;
            bin = bin / 2;
            if(bin == 0)break;
        }
           for(;;)
        {
            q = hex % 2;
            if(q==1)ch++;
            hex = hex / 2;
            if(hex == 0)break;
        }

        printf("%d %d\n",cb,ch);
    }
}



