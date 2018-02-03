#include<stdio.h>
#include<string.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int tcase,i,j,k,l,n,m,z;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        char a[35]={0},b[35]={0};
        scanf("%s %s",a,b);
        l = strlen(a);
        for(m=0,k=0,j=l-1;j>=0;j--,k++)
            m += (a[j]-'0')*pow(2,k);

        l = strlen(b);
        for(n=0,k=0,j=l-1;j>=0;j--,k++)
            n += (b[j]-'0')*pow(2,k);
        z = gcd(m,n);
        if(z==1)printf("Pair #%d: Love is not all you need!\n",i);
        else printf("Pair #%d: All you need is love!\n",i);
    }
    return 0;
}
