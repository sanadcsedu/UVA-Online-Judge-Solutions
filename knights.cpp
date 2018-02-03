#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,m,ans,x;
    for(;;)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)break;
        m = min(a,b);
        x = max(a,b);
        if(m==1)ans = x;
        else if(m==2)
        {
            ans=x/4;
	        ans*=4;
	        if(x%4==1)ans+=2;
	        else if(x%4>1)ans+=4;
        }
        else ans = (a*b+1)/2;
        printf("%d knights may be placed on a %d row %d column board.\n",ans,a,b);
    }
    return 0;
}
