#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[55][600];
int cmp(void const *aa, void const *bb)
{
	char *a = (char*)aa;
	char *b = (char*)bb;
	char p[600]={0}, q[600]={0};
	strcpy(p,a);
	strcat(p,b);
	strcpy(q,b);
	strcat(q,a);
	return strcmp(q,p);
}
int main()
{
	int n,i;
	while(scanf("%d",&n) && n)
	{
		memset(a, 0, sizeof(a));
		for(i=0;i<n;i++)
			scanf("%s",a[i]);
		qsort(a, n, sizeof(a[0]),cmp);
		for(i=0;i<n;i++)
			printf("%s",a[i]);
		printf("\n");
	}
	return 0;
}

