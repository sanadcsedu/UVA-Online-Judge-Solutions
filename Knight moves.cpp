#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
int d[8][2]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{-1,-2},{1,-2}};
int flag[8][8];
char c1,c2;
int x1,x2,y1,y2;
typedef struct Node
{
    int x,y,depth;
}node;
node t,n;
int bfs()
{
    memset(flag,0,sizeof(flag));
    flag[x1-1][y1]=1;
    t.x=x1-1;
    t.y=y1;
    t.depth=0;
    queue<node>Q;
    Q.push(t);
    while(!Q.empty())
    {
        t=Q.front();Q.pop();
        if(t.x==x2-1&&t.y==y2)
        return t.depth;
        for(int i=0;i<8;i++)
        {
            int tx=t.x+d[i][0];
            int ty=t.y+d[i][1];
            if(tx>=0&&tx<8&&ty>=0&&ty<8&&!flag[tx][ty])
            {
                flag[tx][ty]=1;
                n.x=tx;
                n.y=ty;
                n.depth=t.depth+1;
                Q.push(n);
            }
        }
    }
    return 0;
}
int main()
{
    while(scanf("%c%d %c%d",&c1,&x1,&c2,&x2)!=EOF)
    {
        getchar();
        int cur=0;
        y1=c1-'a';
        y2=c2-'a';
        printf("To get from %c%d to %c%d takes %d knight moves.\n",c1,x1,c2,x2,bfs());
    }
    return 0;
}
