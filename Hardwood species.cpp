#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct RES
{
	char name[35];
	int amount;
}res[10005];
char str[35];
bool cmp(RES a,RES b)
{
    return strcmp(a.name,b.name)<0;
}
int main()
{
	int tcase,i,flag,c,n;
	scanf("%d",&tcase);
	getchar();
	getchar();
	for(i=0;i<tcase;i++)
	{
		n = 0;
		c = 0;
		while(gets(str)!=NULL)
		{
			flag = 0;
			for(i=0;i<n;i++)
			{
				if(strcmp(str,res[i].name)==0)res[i].amount++;
				flag = 1;
			}
			if(flag == 0)
			{
				strcpy(res[n].name, str);
				res[n].amount = 1;
				n++;
			}
			c++;
		}
		for(i=0;i<n;i++)
		puts(res[i].name);
		/*sort(res, res+n , cmp );
		for(i=0;i<n;i++)
			printf("%s %.4lf\n",res[i].name, (100*res[i].amount)/(double)c);*/
	}
	return 0;
}
