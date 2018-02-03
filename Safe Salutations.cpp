#include <stdio.h>
long long int c[15];
int main()
{
    c[0]=1;
    for(int i=1;i<11;i++)
        c[i]=2*(2*i+1)*c[i-1]/(i+2);
    bool t=false;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(t)printf("\n");
        t=true;
        printf("%lld\n",c[n-1]);
    }
}

