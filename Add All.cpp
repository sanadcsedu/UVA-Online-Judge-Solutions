#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,a[5005],totalc,c,sum;
    for(;;)
    {
         scanf("%d",&n);
         if(n==0)break;
         sum = 0;
         for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         sum += a[i];
         }
         sort(a,a+n);
         totalc = 0;
         c = a[0]+a[1];
         for(i=2;i<n;i++)
         {
             if(c==sum)break;
             totalc += c;

             c = c + a[i];
         }
         printf("%d\n",totalc-a[0]);

    }
    return 0;
}
