#include<stdio.h>
#include<string.h>
#include<math.h>
int sum[45];
int main()
{
    int m,d,i,j,carry;
    for(;;)
    {
        memset(sum, 0, sizeof(sum));
        scanf("%d %d",&m,&d);
        if(m==0 && d==0)break;
        sum[0] = 1;
        for(i=1;i<=d;i++)
        {
            carry = 0;
            for(j=0;j<40;j++)
            {
                sum[j] = sum[j]*m + carry;
                if(sum[j]>9)
                {
                    carry = sum[j]/10;
                    sum[j]%=10;
                }
                else carry = 0;
            }
        }
        for(i=40;i>=0;i--)
            if(sum[i]!=0)break;
        for(;i>=0;i--)
            printf("%d",sum[i]);
        printf("\n");
    }
    return 0;
}
