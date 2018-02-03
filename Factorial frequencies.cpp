#include<stdio.h>
#include<math.h>
#include<string.h>
int fac[380][800];
int main()
{
    int i,j,n;
   int fre[10];
   fac[0][0]=fac[1][0]=1;
   for(i=2;i<370;i++)
           for(j=0;j<800;j++)
        {
            fac[i][j]+=fac[i-1][j]*i;
            if(fac[i][j]>9)
            {
                fac[i][j+1]=fac[i][j]/10;
                fac[i][j]%=10;
            }
        }
   for(;;)
   {
        memset(fre,0,sizeof(fre));
        scanf("%d",&n);
        if(n==0)break;
        for(i=800-1;i>=0;i--)
            if(fac[n][i]!=0)break;
        for(;i>=0;i--)
            fre[fac[n][i]]++;
        printf("%d! --\n   ",n);
        for(i=0;i<10;i++)
        {
            printf("(%d)%5d    ",i,fre[i]);
            if(i==4 || i==9)
            {
                printf("\n");
                if(i==4)printf("   ");
            }
        }
   }
   return 0;
}
