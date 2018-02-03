#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<stdlib.h>
#include<ctype.h>
#include<map>
using namespace std;
struct score
{
	int team;
	int problem[12];
	int time[12];
	bool submit;
}a[105];
char input[20];
void reset()
{
	for(int i=0;i<=101;i++)
	{
		a[i].team = i;
		memset(a[i].problem,0,sizeof(a[i].problem));
		memset(a[i].time, 0 , sizeof(a[i].time));
		a[i].submit = false;
	}
}
void total()
{
	for ( int i = 1; i < 102; i++ )
       for ( int j = 1; j <= 9; j++ )
	   {
            if ( a[i].problem[j] )
			{
                a[i].problem[10]++;
                a[i].time[10] += a[i].time[j];
            }
       }
}
bool cmp(score x, score y)
{
	if(x.problem[10]>y.problem[10])return true;
	if(x.problem[10]==y.problem[10] && x.time[10]<y.time[10])return true;
	if(x.problem[10]==y.problem[10] && x.time[10]==y.time[10] && x.team < y.team)return true;
	return false;
}
int main()
{
	int i,t,pro,pen,flag = 0,tcase;
	char d;
	scanf("%d",&tcase);
	getchar();
	gets(input);
	while(tcase--)
	{
		reset();
		while(gets(input) && strlen(input))
		{
			sscanf(input,"%d %d %d %c",&t,&pro,&pen,&d);
			a[t].submit = true;
			if ( d == 'R' || d == 'U' || d == 'E' ) continue;
			if(d == 'C')
			{
				if(!a[t].problem[pro])
				{
					a[t].problem[pro] = 1;
					a[t].time[pro] += pen;
				}

			}
			else
			{
				if(!a[t].problem[pro])
					a[t].time[pro] += 20;
			}
		}
			total();
			sort(a, a+101, cmp);
			if(flag)printf("\n");
			flag = 1;
			for(i=0;i<=101;i++)
				if(a[i].submit)printf("%d %d %d\n",a[i].team,a[i].problem[10],a[i].time[10]);
	}

	return 0;
}
