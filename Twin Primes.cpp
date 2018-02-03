#include<stdio.h>
#include<math.h>
int check[20000000];
int primes[100005];
int main()
{
    check[0]=check[1]=1;
    int i,j,k,n,z;
    z = sqrt(20000000);
    for(i=2;i<z;i++)
        if(check[i]==0)
        for(j=i+i;j<19999999;j+=i)
            check[j]=1;

    for(k=1,i=3;k<100005;i+=2)
        if((check[i]==0 && check[i+2]==0))
        primes[k++]=i;
    while(scanf("%d",&n)!=EOF)
        printf("(%d, %d)\n",primes[n],primes[n]+2);
    return 0;
}
