#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int parent[50];
int Find(int n)
{
	if(parent[n]==n)return n;
	else return parent[n] = Find(parent[n]);
}
void Union(int a, int b)
{
    parent[Find(a)] = Find(b);
}
int main()
{
	freopen("input.txt", "r", stdin);
    int tcase, i, ans, n,flag=0;
	char high, abc[3];
    scanf("%d", &tcase);
    getchar();
    getchar();
    for(int t=0; t<tcase; t++)
	{
	    if(flag)printf("\n");
		memset(parent, 0, sizeof(parent));
        scanf("%c", &high);
		n = high-'A';
		gets(abc);
		for(i=0; i<=n; i++)
			parent[i] = i;
		while(gets(abc))
		{
		    int z = strlen(abc);
		    if(z==0)break;
			Union(abc[0]-'A', abc[1]-'A');
		}
        ans = 0;
		for(i=0; i<=n; i++)
			if(parent[i] == i)ans++;
        printf("%d\n", ans);
		flag++;
	}
	return 0;

}

