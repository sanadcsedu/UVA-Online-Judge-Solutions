#include<stdio.h>
#include<string.h>
long long int a[110][110];
bool symmetric(int n)
{
	int i,j;
	for(i=0;i<=n/2;i++)
        for(j=0;j<n;j++)
		{
			if(a[i][j]!=a[n-1-i][n-1-j])
				return false;
		}
    return true;
}
int main()
{
	int tcase,n,t,i,j;
	bool z;
	char ch[10];
	scanf("%d",&tcase);
	for(t=1;t<=tcase;t++)
	{
	    memset(a,0,sizeof(a));
		getchar();
		gets (ch);
        sscanf (ch, "%c = %d", &ch[0] , &n);
        z = true;

		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			{
			    scanf("%lld",&a[i][j]);
			    if(a[i][j]<0)z = false;
			}
		}

		if(!z)printf("Test #%d: Non-symmetric.\n",t);
        else
		{
            z = symmetric(n);
            if(z)printf("Test #%d: Symmetric.\n",t);
            else printf("Test #%d: Non-symmetric.\n",t);
		}
	}
	return 0;
}
