#include<stdio.h>
#include<string.h>
#include<math.h>
char a[480][120];
int main()
{
	int i,j,sum,c;
	a[0][0]='1';
	a[1][0]='1';
	a[2][0]='2';
	for(i=3;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			sum = (a[i-1][j]-'0')+(a[i-2][j]-'0');
			if(sum>9)
			{
				a[i][j+1] = (sum/10)+'0';
				a[i][j] = (sum%10)+'0';
			}
			else a[i][j]= (sum/10) + '0';
		}
	}
	puts(a[20]);
	return 0;
}
