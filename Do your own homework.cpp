#include<stdio.h>
#include<string.h>
char sub[102][24];
int need[102];
int main()
{
    int i, tcase, n, time, j, z;
    char hw[24];
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%s %d",sub[j],&need[j]);

        scanf("%d %s",&time,hw);
        for(j=0;j<n;j++)
        {
            z = strcmp(sub[j],hw);
            if(z==0)
            {
                if(need[j]<=time)printf("Case %d: Yesss\n",i);
                else if(need[j]<=(time+5))printf("Case %d: Late\n",i);
                else printf("Case %d: Do your own homework!\n",i);
                break;
            }
        }
        if(z!=0)printf("Case %d: Do your own homework!\n",i);
    }
    return 0;
}
