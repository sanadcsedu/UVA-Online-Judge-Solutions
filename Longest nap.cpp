#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int start[105],end[105];
char text[300];
int main()
{
    int day=1,i,n,hour1,min1,hour2,min2,hh,mm,max,z;
    while(scanf("%d",&n)!=EOF)
    {
        memset(start,0,sizeof(start));
        memset(end,0,sizeof(end));
        getchar();
        end[0]=10*60;
        for(i=1;i<=n;i++)
        {
            gets(text);
            sscanf (text, "%d:%d %d:%d", &hour1, &min1,&hour2, &min2);
            start[i]= hour1*60+min1;
            end[i]=hour2*60+min2;
        }
        start[i] = 18*60;
        sort(start,start+n+2);
        sort(end,end+n+2);
        max = hh = mm = 0;
        for(i=1;i<=n+1;i++)
        {
                z = (start[i]-end[i]);
                if(z)
                {
                    if(z>max)
                    {
                        max = start[i]-end[i];
                        hh = end[i]/60;
                        mm = end[i]%60;
                    }
                }
        }
        if(max>=60)printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n",day,hh,mm,max/60,max%60);
        else printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n",day,hh,mm,max);
        day++;
    }
    return 0;
}
