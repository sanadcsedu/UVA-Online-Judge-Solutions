#include <stdio.h>
#include <string.h>
#include <memory.h>
char s[1002];
int arc[28][28],dgr[28][2],vis[28];
int n,cnt;
void dfs(int s)
{
	int i;
	vis[s]=1;
	cnt++;
	for(i=0;i<26;i++)
		if(!vis[i] && arc[s][i])
			dfs(i);
}
int euler()
{
	int i,sp=-1,lp,s=0,t=0;
	n=0;
	for(i=0;i<26;i++)
	{
		if(dgr[i][0] || dgr[i][1])
		{
			n++;
			lp=i;
		}
		if(dgr[i][0]==dgr[i][1])
			continue;
		if(dgr[i][0]==dgr[i][1]+1)
		{
			s++;
			sp=i;
			if(s>1)
				return 0;
			continue;
		}
		if(dgr[i][0]==dgr[i][1]-1)
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
		memset(arc,0,sizeof(arc));
		memset(dgr,0,sizeof(dgr));
		memset(vis,0,sizeof(vis));
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",s);
			u=s[0]-'a';
			v=s[strlen(s)-1]-'a';
			arc[u][v]++;
			dgr[u][0]++;
			dgr[v][1]++;
		}
		printf("%s\n",euler()==1?"Ordering is possible.":"The door cannot be opened.");
	}
	return 0;
}
