#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[3],L[3];
int LIS()
{
	int i,j,ans,m;
	L[0] = L[1] = L[2] = 1;
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
			if(a[i]<a[j])
				L[j] = max(L[j],L[j]+1);
	}
	for(m=0,i=0;i<3;i++)
		if(m<L[i])m = L[i];

	for(ans=0,j=2;j>=0;j--)
	{
		if(m==L[j])
		{
		    ans+= a[j];
		    m--;
		}
	}
	return ans;
}
int main()
{
	int tcase=1,Max,i,z,n;
	while(scanf("%d",&n) && n)
	{
		Max = 0;
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d",&a[0],&a[1],&a[2]);
			z = LIS();
			if(z>Max)Max = z;
		}
		printf("Case %d: maximum height = %d\n",tcase++,Max);
	}
	return 0;
}
