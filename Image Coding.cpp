#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[25];
int bytes[30];
int main()
{
	int i,j,k,tcase,R,C,Max,Min,ans,z,c;
	scanf("%d",&tcase);
	for(i=1;i<=tcase;i++)
	{
		memset(bytes,0,sizeof(bytes));
		scanf("%d %d %d %d",&R,&C,&Max,&Min);
		for(j=0;j<R;j++)
		{
			scanf("%s",a);
			for(k=0;a[k];k++)
			{
				z = a[k] - 'A';
				bytes[z]++;
			}
		}
		sort(bytes,bytes+30);
		reverse(bytes,bytes+30);
		for(c=1,j=1;j<=27;j++)
			if(bytes[j]==bytes[0])c++;

		ans = c*Max*bytes[0] + (R*C - c*bytes[0])*Min;
        printf("Case %d: %d\n",i,ans);
	}
	return 0;
}
