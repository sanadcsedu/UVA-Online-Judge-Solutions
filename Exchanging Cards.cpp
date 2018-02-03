#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int x[10005],y[10005];
int main()
{
    int i,cntA,cntB,a,b,p,q,max;
    for(;;)
    {
        cntA = cntB = 0;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)break;
        for(i=0;i<a;i++)
        {
            scanf("%d",&p);
            x[p]=1;
        }
        for(i=0;i<b;i++)
        {
             scanf("%d",&q);
             y[q]=1;
        }
        if(p>=q)max = p;
        else max = q;

        for(i=1;i<=max;i++)
        {
            if ( x [i] && !y [i] ) cntA++;
            if ( y [i] && !x [i] ) cntB++;
        }
        printf("%d\n",min(cntA,cntB));
    }
    return 0;
}
