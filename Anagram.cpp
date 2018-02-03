#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char str[110];
int a[110];
int main()
{
	int tcase,i,z,j;
	scanf("%d",&tcase);
	for(i=0;i<tcase;i++)
	{
		memset(a,0,sizeof(a));
		scanf("%s",str);
		for(j=0;str[j];j++)
		{
			if(str[j]>='A' && str[j]<='Z')a[j] = (str[j]-'A')*2;
			else a[j] = (str[j]-'a')*2 + 1;
		}
		z = strlen(str);
		sort(a,a+z);

		do
		{
            for(j=0;j<z;j++)
            {
                if(a[j]%2==0)printf("%c",(a[j]/2)+'A');
                else printf("%c",(a[j]-1)/2 + 'a');
            }
            printf("\n");

		}while(next_permutation(a,a+z));

	}
	return 0;
}
