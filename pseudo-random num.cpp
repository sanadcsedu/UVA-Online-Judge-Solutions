#include<stdio.h>

int main()
{
   int a,b,c,d;
   long long int hold,count,i,m[100000],j;
   for(i=1;;i++)
   {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)break;

        count = 0;
        hold = d;
        for(j=0;j<100000;j++)m[j]=0;
        for(;;)
        {
            hold = ((a*hold)+b);
            hold = hold % c;
            m[hold]++;

            if( m[hold] == 2)break;

            count++;
        }
        printf("Case %lld: %lld\n",i,count);

   }
    return 0;
}
