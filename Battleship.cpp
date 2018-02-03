#include<stdio.h>
#include<string.h>
int n;
char input[105][105];
void flood_fill(int i, int j)
{
 	if (input[i][j]== 'x' || input[i][j]=='@')
 	{
 	    input[i][j]='.';
		flood_fill(i-1,j);
		flood_fill(i,j+1);
        flood_fill(i+1,j);
		flood_fill(i,j-1);
    }
    return ;
}
int main()
{
	int tcase,i,j,k,c;
	scanf("%d",&tcase);
	for(i=1;i<=tcase;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%s",input[j]);
		c = 0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
			{
				if(input[j][k]=='x')
				{
					c++;
					flood_fill(j,k);
				}
			}
		printf("Case %d: %d\n",i,c);
	}
	return 0;
}
