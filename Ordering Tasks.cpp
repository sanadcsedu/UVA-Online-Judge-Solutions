#include<stdio.h>
#include<string.h>
#include<math.h>
int x[105][105],visit[105],topsort[105];
int n,m,top;
void DFS(int u)
{
    visit[u]=1;
    for(int v=1;v<=n;v++)
    {
        if(x[u][v] && !visit[v])
            DFS(v);
    }
    topsort[--top]=u;
}
int main()
{
	int a,b,i;
	while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)break;
        memset(x,0,sizeof(x));
        memset(visit,0,sizeof(visit));
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);
            x[a][b]=1;
        }
        top=n;
        for(i=1;i<=n;i++)
        {
            if(!visit[i])
                DFS(i);
        }
        for(i=0;i<n;i++)
            printf("%d ",topsort[i]);
        printf("\n");
    }
	return 0;
}
