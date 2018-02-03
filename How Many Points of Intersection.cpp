#include <stdio.h>

int main(){
	long long int cases = 0;
	long long int m, n, result;

	while (scanf("%lld %lld",&m,&n)==2){
		if (!m && !n) break;

		result = (( (m*(m-1))/2) * (n*(n-1)/2));
		printf("Case %lld: %lld\n",++cases,result);
	}
	return 0;
}
