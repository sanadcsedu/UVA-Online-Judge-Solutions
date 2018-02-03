#include<stdio.h>
#include<string.h>
char input[105][105];
int c;
void flood_fill(int i, int j)
{
	if(input[i][j]=='*')
	{
		c++;
		input[i][j]='.';
		flood_fill(i-1,j);
		flood_fill(i-1,j+1);
		flood_fill(i-1,j-1);
		flood_fill(i+1,j);
		flood_fill(i+1,j+1);
		flood_fill(i+1,j-1);
		flood_fill(i,j+1);
		flood_fill(i,j-1);
	}
}
int main()
{
	int n,m,i,j,stars;
	for(;;)
	{
		scanf("%d %d",&n,&m);
		if(n==0 && m==0)break;
		memset(input, 0, sizeof(input));
		for(i=0;i<n;i++)
			scanf("%s",input[i]);
		stars = 0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(input[i][j]=='*')
				{
					c = 0;
					flood_fill(i,j);
					if(c==1)stars++;
				}
			}
		}
		printf("%d\n",stars);
	}
	return 0;
}
