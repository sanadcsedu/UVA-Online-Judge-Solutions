using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<cmath>
#include<queue>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
int t1,t2,L,R,C,m,n,val[205][205];
bool vis[205][205];
int xpos[]={0,0,1,-1};
int ypos[]={1,-1,0,0};
void init()
{
    FOR(i,205)
    FOR(j,205)
    {
        vis[i][j]=false;
        val[i][j]=-1;
    }
}
void fill_dangerous(int x,int y,int L)
{
    int xl,yl,xr,yr;
    xl=max(x-L,0),yl=max(y-L,0),xr=min(x+L,R-1),yr=min(y+L,C-1);
    for(int i=xl;i<=xr;i++)
    {
        for(int j=yl;j<=yr;j++)
        {
            if((x-i)*(x-i)+(y-j)*(y-j)<=L*L)
            {
                vis[i][j]=true;
            }
        }
    }
}
int BFS()
{
    int x,y,cx,cy;
    queue<pair<int,int> > q;
    if(!vis[0][0])
    {
        q.push(make_pair(0,0));
        val[0][0]=0;
    }
    pair<int,int> temp;
    pair<int,int> child;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        x=temp.first;
        y=temp.second;
        if(x==R-1 and y==C-1) return val[x][y];
        vis[x][y]=true;
        FOR(i,4)
        {
            cx=x+xpos[i],cy=y+ypos[i];
            if(!(cx<0 || cx>=R || cy<0 || cy>=C) and (!vis[cx][cy]))
            {
                val[cx][cy]=val[x][y]+1;
                vis[cx][cy]=true;
                q.push(make_pair(cx,cy));
            }
        }
    }
    return -1;
}

int main()
{
    while(cin>>R>>C &&(R || C))
    {
        cin>>m;
        init();
        FOR(i,m)
        {
            cin>>t1>>t2;
            vis[t1-1][t2-1]=true;
        }
        cin>>n;
        FOR(i,n)
        {
            cin>>t1>>t2>>L;
            fill_dangerous(t1-1,t2-1,L);
        }
        t1=BFS();
        if(t1==-1)
        cout<<"Impossible."<< endl;
        else
        cout<<t1<<endl;
    }
}
