#include<stdio.h>
#include<string.h>
#include<math.h>
#include<list>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdlib.h>
#include<ctype.h>
#include<map>
#include<iostream>
using namespace std;
int same_team[1000000];
char str[20];
int main()
{
    list < int > team_queue;
    list < int > :: iterator it,st[1005];
    int n,p,i,mem,x,z,M,j,flag,F,t=1,a=0;
    while(scanf("%d",&n) && n)
    {
        memset(same_team, 0, sizeof(same_team));
        for(i=0; i<1001;i++)
            st[i] = team_queue.begin();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&mem);
            for(j=1;j<=mem;j++)
            {
                scanf("%d",&p);
                same_team[p] = i;
            }
        }
        if(a)printf("\n");
        a = 1;
        printf("Scenario #%d\n",t++);
        for(;;)
        {
            scanf("%s",str);
            if(strcmp(str,"ENQUEUE")==0)
            {
                scanf("%d",&x);
                z = same_team[x];
                printf("%d\n",z);
                flag = F = 0;
                for(it = st[z]; it!= team_queue.end(); it++)
                {
                    M = *it;
                    if(flag==1)
                    {
                        st[z] = it;
                        flag = 0;
                        F = 1;
                    }
                    if(z == same_team[M])flag = 1;
                }
                if(flag==1)
                    {
                        st[z] = it;
                        flag = 0;
                        F = 1;
                    }
                if(F == 1)team_queue.insert(st[z], x);
                else
                {
                    team_queue.insert(it, x);
                    st[z] = it;
                }
            }
            else if(strcmp(str,"DEQUEUE")==0)
            {
                printf("%d\n",team_queue.front());
                team_queue.pop_front();
            }
            else break;
        }
    }
    return 0;
}
