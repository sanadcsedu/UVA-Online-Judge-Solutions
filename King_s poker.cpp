#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[3],ans[3];
    for(;;)
    {
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        if(a[0]==0 && a[1]==0 && a[2]==0)break;
        if(a[0]==a[1] && a[1]==a[2])
        {
            if(a[0]==13)printf("*\n");
            else printf("%d %d %d\n",a[0]+1,a[1]+1,a[2]+1);
        }
        else if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2])
        {
            sort(a,a+3);
            if (a[0]==a[1])
            {
                ans[0]=a[0];
                ans[1]=a[1];
                if (a[2]+1<=13)
                ans[2]=a[2]+1;
                else if (a[0]+1<=13)
                {
                    ans[0]=ans[1]=a[0]+1;
                    ans[2]=1;
                }
            }
            else
            {
                ans[0]=a[1];
                ans[1]=a[2];
                if (a[0]+1!=a[1])
                ans[2]=a[0]+1;
                else if (a[0]+2<=13)
                {
                    ans[2]=a[0]+2;
                }
                else if (a[1]+1<=13)
                {
                    ans[2]=ans[1]=a[1]+1;
                    ans[0]=1;
                }
                else
                ans[0]=ans[1]=ans[2]=1;
            }
            sort(ans,ans+3);
            printf("%d %d %d\n",ans[0],ans[1],ans[2]);
        }
        else printf("1 1 2\n");
    }
    return 0;
}
