#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int L[1000000],input[1000000],order[1000000];
int main()
{
	int n=0,i,j,z;
	while(scanf("%d",&input[n++])!=EOF)
	memset(L,1,sizeof(L));
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(input[i]<input[j])
			{
				L[j] = max(L[j],L[j]+1);
			}
		}
	}
    z = 0;
    for(i=0;i<n;i++)
        if(z<L[i]) z = L[i];

	printf("%d\n",z);
	printf("-\n");
	for(i=z;i>=1;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(L[j]==i)
			{
                order[i]=input[j];
            }
		}
	}
	for(i=1;i<=z;i++)
        printf("%d\n",order[i]);

    return 0;
}
