#include<stdio.h>
#include<math.h>
char a[2000000];
int main()
{
    int n,startD,startR,i,min,ans;
    while(scanf("%d",&n)== 1 && n!=0)
    {
        scanf("%s",a);
        min = 2000000;
        startD = startR = -10;
        for(i=0;a[i];i++)
        {
            if(a[i]=='Z')
            {
                min = 0;
                break;
            }
            else if(a[i]=='R')startR = i;
            else if(a[i]=='D')startD = i;

            if(startR>=0 && startD>=0 )
            {
                ans = fabs(startD-startR);
                if(ans<min)min = ans;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
