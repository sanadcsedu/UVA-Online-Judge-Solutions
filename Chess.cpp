#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    char chip;
    int tcase,m,a,b,ans,i;
    scanf("%d",&tcase);
    getchar();
    for(i=1;i<=tcase;i++)
    {
        ans = 0;
        scanf("%c %d %d",&chip,&a,&b);
        getchar();
        m = min(a,b);

        if(chip =='K')
            ans = ((a+1)/2) * ((b+1)/2);
        else if(chip=='r' || chip=='Q')
            ans = m;
        else ans = (a*b+1)/2;

        printf("%d\n",ans);
    }
    return 0;
}

