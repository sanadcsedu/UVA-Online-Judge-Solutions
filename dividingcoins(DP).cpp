#include<stdio.h>
#include<string.h>

int divide(int coins[],int nc)
{
   int table[50010];
   memset (table,0,sizeof(table));
   table[0]=1;
   int total = 0;

   for(int i=0;i<nc;i++)
   total += coins[i];

   for(int i=0;i<nc;i++)
   {
       int c = coins[i];
       for(int j=total;j>=0;j--)
       {
           if(table[j])
           table[j+c]=1;
       }
   }
   int count = 0;
   if( total%2 == 0 )
   {
       for(int k = total/2;k>=0;k--){
       if(table[k])break;
       else count++;
       }
   }
   else
   {
       for(int k = total/2;k>=0;k--){
       if(table[k])break;
       else count++;
       }
   }
   return count;
}
int main()
{
    int ncase,coin[110],m,i,j,x;
    scanf("%d",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%d",&m);

        for(j=0;j<m;j++)
        scanf("%d",&coin[j]);

        x = divide(coin,m);
        printf("%d\n",x);

    }
    return 0;
}
