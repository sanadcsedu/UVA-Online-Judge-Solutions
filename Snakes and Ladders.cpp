#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int players[1000048],a[105];
int main()
{
    int tcase,p,b,c,x,y,i,j,roll,flag,k;
    scanf("%d",&tcase);
    while( scanf("%d %d %d",&p,&b,&c)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(j=0;j<=p;j++)
            players[j]=1;
        for(j=0;j<b;j++)
        {
            scanf("%d %d",&x,&y);
            a[x]=y;
        }
        flag = 0;
        for(j=1,k=1;j<=c;j++,k++)
        {
            scanf("%d",&roll);
            if(k<=p)
            {
                if(flag == 1)continue;
                players[k] = min(players[k]+roll,100);
                if(a[players[k]]!=0)players[k] = a[players[k]];
                if(players[k]==100)flag=1;
            }
        }
        for(j=1;j<=p;j++)
            printf("Position of player %d is %d.\n",j,players[j]);
    }
    return 0;
}
