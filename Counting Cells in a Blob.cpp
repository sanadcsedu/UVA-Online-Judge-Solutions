#include<stdio.h>
#include<string.h>
char input[30][30],line[30];
int c;
void flood_fill(int i, int j)
{
	if(input[i][j]=='1')
	{
		c++;
		input[i][j]='0';
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
	int i,j,blobs,tcase,x;
	scanf("%d",&tcase);
    getchar();
    getchar();
    while(tcase--)
	{
        memset(input, 0, sizeof(input));
		x = 0;
        while(gets(line))
        {
         if(strcmp(line,"")==0)
            break;
         strcpy(input[x++],line);
        }
		blobs = 0;
		for(i=0;i<x;i++)
		{
			for(j=0;input[i][j];j++)
			{
				if(input[i][j]=='1')
				{
					c = 0;
					flood_fill(i,j);
					if(blobs<c)blobs = c;
				}
			}
		}
		printf("%d\n",blobs);
        if(tcase)printf("\n");
	}
	return 0;
}
