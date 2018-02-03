#include <stdio.h>
#include <string.h>
char s[1002];
int DFS[28][28],edge[28][2],vis[28];
int n,cnt;
void dfs(int s)
{
	int i;
	vis[s]=1;
	cnt++;
	for(i=0;i<26;i++)
		if(!vis[i] && DFS[s][i])
			dfs(i);
}
int euler()
{
	int i,sp=-1,lp,s=0,t=0;
	n=0;
	for(i=0;i<26;i++)
	{
		if(edge[i][0] || edge[i][1])
		{
			n++;
			lp=i;
		}
		if(edge[i][0]==edge[i][1])
			continue;
		if(edge[i][0]==edge[i][1]+1)
		{
			s++;
			sp=i;
			if(s>1)
				return 0;
			continue;
		}
		if(edge[i][0]==edge[i][1]-1)
		{
			t++;
			if(t>1)
				return 0;
			continue;
		}
		return 0;
	}
	if(s!=t)
		return 0;
	cnt=0;
	if(sp!=-1)
		dfs(sp);
	else
		dfs(lp);
	if(cnt!=n)
		return 0;
	return 1;
}
int main()
{
	int T,i,u,v;
	scanf("%d",&T);
	while(T--)
	{
		memset(DFS,0,sizeof(DFS));
		memset(edge,0,sizeof(edge));
		memset(vis,0,sizeof(vis));
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",s);
			u=s[0]-'a';
			v=s[strlen(s)-1]-'a';
			DFS[u][v]++;
			edge[u][0]++;
			edge[v][1]++;
		}
		if(euler())printf("Ordering is possible.\n");
		else printf("The door cannot be opened.\n");
	}
	return 0;
}


