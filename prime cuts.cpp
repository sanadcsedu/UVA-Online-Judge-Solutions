#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c,j,x;
    int prime[1005];
    memset(prime,0,sizeof(prime));
    int a[400];
    prime[0]=1;
    prime[1]=0;
    for(i=2;i<=33;i++)
    {
        if(prime[i]==0){
        for(j=i+i;j<1001;j+=i)
        {
            prime[j]=1;
        }
    }
    }
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        j = 0;
        for(i=1;i<=n;i++)
        {
            if(prime[i]==0){
            a[j++]=i;
            }
        }
        printf("%d %d:",n,c);


            c = c * 2 - (j%2);
            x = (j-c)/2;
        if(c>=j)
        {
            x = 0;
            c = j;
        }

        for(i=x;i<(x+c);i++)
        printf(" %d",a[i]);
        printf("\n\n");
    }
}

