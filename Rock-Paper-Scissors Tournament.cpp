#include<stdio.h>
#include<string.h>
#include<math.h>
int a[105][2];
int main()
{
    char str1[15]={0},str2[15]={0};
    int x,y,i,n,k,game,flag=0;
    double z;
    while(scanf("%d %d\n",&n,&k)==2 && n!=0)
    {
        if(flag==1)printf("\n");
        flag =1;
        memset(a,0,sizeof(a));
        game = (k*n*(n-1))/2;
        for(i=0;i<game;i++)
        {
            scanf("%d %s %d %s",&x,str1,&y,str2);
            if(strcmp(str1,"rock")==0)
            {
                if(strcmp(str2,"paper")==0)
                {
                    a[x][0]++;
                    a[y][1]++;
                }
                if(strcmp(str2,"scissors")==0)
                {
                    a[x][1]++;
                    a[y][0]++;
                }
            }
            else if(strcmp(str1,"paper")==0)
            {
                if(strcmp(str2,"scissors")==0)
                {
                    a[x][0]++;
                    a[y][1]++;
                }
                if(strcmp(str2,"rock")==0)
                {
                    a[x][1]++;
                    a[y][0]++;
                }
            }
            else if(strcmp(str1,"scissors")==0)
            {
                if(strcmp(str2,"rock")==0)
                {
                    a[x][0]++;
                    a[y][1]++;
                }
                if(strcmp(str2,"paper")==0)
                {
                    a[x][1]++;
                    a[y][0]++;
                }
            }

        }
        for(i=1;i<=n;i++)
        {
            if(a[i][1]==0 && a[i][0]==0)printf("-\n");
            else
            {
                z = (a[i][1]*1.0)/((a[i][0]+a[i][1])*1.0);
                printf("%.3lf\n",z);
            }
        }
    }
    return 0;
}
