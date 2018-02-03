#include<stdio.h>
#include<string.h>
int main()
{
    long long int coin[]={1,5,10,25,50};
    long long int x,n;
    long long int table[40000];
    memset(table,0,sizeof(table));
    table[0]=1;
    long long int i,j,c;
    for(i=0;i<5;i++)
    {
        c = coin[i];
        for(j=0;j<=30000;j++)
        {
            table[j+c] += table[j];
        }
    }

    while(scanf("%lld",&n)!=EOF)
    {
        if(n<=4)
        printf("There is only 1 way to produce %lld cents change.\n",n);
        else
        printf("There are %lld ways to produce %lld cents change.\n",table[n],n);
    }
    return 0;
}
