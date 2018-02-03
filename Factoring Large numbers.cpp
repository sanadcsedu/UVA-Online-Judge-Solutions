#include<cstdio>
#include<cmath>
#define ll long long int
int main()
{
	ll n, i, sq;
	for(;;)
	{
		scanf("%lld", &n);
		if(n<0)break;
		sq = sqrt(double (n));
		for(i=2; i<=sq; i++)
		{
			if(n%i==0)
			{
				while(n % i==0)
				{
					printf("    %lld\n", i);
					n/=i;
				}
				sq = sqrt(double(n));
			}
		}
		if(n>1)printf("    %lld\n", n);
		puts("");
	}
	return 0;
}
