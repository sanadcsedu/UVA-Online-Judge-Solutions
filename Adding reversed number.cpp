#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[300],b[300];
int sum[305];
int main()
{
    int tcase,x,y,p,q,m,i,j,k;
    scanf("%d",&tcase);
    while(tcase--)
    {
        memset(sum,0,sizeof(sum));
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s %s",a,b);
        x = strlen(a);
        y = strlen(b);
        m = max(x,y);
        m--;
        for(i=0,j=0,k=0;m>=0;i++,j++,m--,k++)
        {
            if(i>=x)p = 0;
            else p = a[i]-'0';
            if(j>=y)q=0;
            else q = b[j]-'0';
            sum[k] += p + q;
            if(sum[k]>9)
            {
                sum[k+1] = sum[k]/10;
                sum[k]%=10;
            }
        }
        for(i=300-1;i>=0;i--)
        if(sum[i]!=0)break;

        for(j=0;j<300;j++)
        if(sum[j]!=0)break;

        for(k=j;k<=i;k++)
        printf("%d",sum[k]);

        printf("\n");
    }
    return 0;
}

