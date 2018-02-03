#include<stdio.h>
int a[500005];
int main()
{
   int x,j,n,i,z,ans;
   a[1]=1;
   a[2]=2;
   a[3]=2;
   for(i=4;i<=500000;i++)
   {
        x=a[i-1]+2;
        if(x<=i)a[i]=x;
        else a[i]=2;
    }
   while(scanf("%d",&n)==1 && n!=0)
   printf("%d\n",a[n]);

   return 0;
}
