#include<stdio.h>
#include<math.h>
int prime[3200],check[3200];
int factor(int a,int c)
{
    int c1=0,c2=0,sum=1,j,n=a;
    for(j=0;prime[j]<sqrt(n);j++)
    {
           c1=0,c2=0;
           while(a%prime[j]==0)
           {
               a /= prime[j];
               c1++;
           }
           while(c%prime[j]==0)
           {
               c /= prime[j];
               c2++;
           }
           if(c1>c2)sum *= pow(prime[j],c1);
    }
    if(a>1 && c==1)sum *= a;
    return sum;
}
int main()
{
    int tcase,i,a,c,k,j;
    check[0]=check[1]=1;
    for(i=0;i<3200;i++)
    {
        if(check[i]==0)
            for(j=i+i;j<3200;j+=i)
                check[j]=1;
    }
    for(i=0,k=0;i<3200;i++)
        if(check[i]==0)prime[k++]=i;


    scanf("%d",&tcase);
    for(i=0;i<tcase;i++)
    {
        scanf("%d %d",&a,&c);
        if(c%a==0)printf("%d\n",factor(c,a));
        else printf("NO SOLUTION\n");
    }
    return 0;
}
