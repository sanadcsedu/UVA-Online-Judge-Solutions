#include<stdio.h>
#include<math.h>
#include<string.h>
long long int factorial[21];
void fac()
{
    factorial[0]=factorial[1]=1;
    long long int sum=1,i;
    for(i=2;i<=20;i++)
    factorial[i] = factorial[i-1]*i;
}
int main()
{
    fac();
    char words[40];
    long long int n,i,index[40],tcase,j,x,k;
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++)
    {
        memset(words,0,sizeof(words));
        memset(index,0,sizeof(index));
        for(j=0;j<40;j++)index[j]=1;
        scanf("%s",words);
        x = strlen(words);
        for(j=0;words[j];j++)
        {
            if(words[j]!=' ')
                for(k=j+1;words[k];k++)
                if(words[j]==words[k])
                {
                    words[k]=' ';
                    index[j]++;
                }
        }
        n=factorial[x];
        for(j=0;j<x;j++)
            if(index[j]>1)n/=factorial[index[j]];

        printf("Data set %lld: %lld\n",i,n);
    }
    return 0;
}
