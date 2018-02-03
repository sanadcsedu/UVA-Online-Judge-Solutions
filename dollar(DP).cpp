#include<stdio.h>
#include<string.h>

int main()
{
    int coins[]={1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
    double table[6001];
    memset(table,0,sizeof(table));
    table[0]=1;
    int i,c,j,z;
    double n;
    for(i=0;i<11;i++)
    {
        c = coins[i];
        for(j=c;j<=6000;j++)
        {
            if(j-c>=0)
            table[j] += table[j-c];
        }
    }
    for(;;)
    {
        scanf("%lf",&n);
        if (n==0.00)break;
        z = n * 20;
        printf("%6.2lf%17.lf\n",n,table[z]);

    }
    return 0;
}
