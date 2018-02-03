#include<stdio.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         scanf("%d %d %d",&a,&b,&c);

         if((a>b && b>c)||(c>b && b>a) )
         printf("Case %d: %d\n",i,b);

         else if((c>a && a>b)||(b>a && a>c) )
         printf("Case %d: %d\n",i,a);

         else if((a>c && c>b)||(b>c && c>a) )
         printf("Case %d: %d\n",i,c);

    }
    return 0;

}
