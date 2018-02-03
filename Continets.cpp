#include<stdio.h>
#include<string.h>
#include<math.h>
char input[25][25];
int c;
void flood_fill(int i, int j)
{
	if(input[i][j]=='l')
	{
		c++;
		input[i][j] = 'w';
		flood_fill(i,j+1);
		flood_fill(i,j-1);
		flood_fill(i+1,j);
		flood_fill(i-1,j);
	}
	return;
}
int main()
{
	int i,j,n,m,x,y,z;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		memset(input, 0, sizeof(input));
		for(i=0;i<n;i++)
			scanf("%s",input[i]);
		scanf("%d %d",&x,&y);
		z = 0;
		for(i=x;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c = 0;
				if(i==x)j = y;
				if(input[i][j]=='l')
				{
					flood_fill(i,j);
					if(c>z)z = c;
				}
			}
		}
		printf("%d\n",z);
	}
	return 0;
}

