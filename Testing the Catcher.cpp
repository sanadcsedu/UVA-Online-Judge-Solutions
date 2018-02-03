#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int LIS[10000],input[10000];
int main()
{
	int a,loop,m,n,i,j,tcase,flag=0;
	for(tcase = 1;;tcase++)
	{
		scanf("%d",&a);
		if(a==-1)break;
		 memset(LIS,0,sizeof(LIS));
		input[0]=a;
		for(i=1;;i++)
		{
			scanf("%d",&n);
			if(n==-1)break;
			input[i] = n;
		}
		loop = i-1;
		for(i=0;i<=loop;i++)
            LIS[i]=1;

		for(i=0;i<=loop;i++)
            for(j=i+1;j<=loop;j++)
                if(input[i]>=input[j])LIS[j] = max(LIS[j],LIS[i]+1);
		if(flag==1)printf("\n");
        flag =1;
		m = 0;
		for(i=0;i<=loop;i++)
            if(m<LIS[i])m = LIS[i];
		printf("Test #%d:\n  maximum possible interceptions: %d\n",tcase,m);
    }
	return 0;
}
