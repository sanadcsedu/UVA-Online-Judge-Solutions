#include<stdio.h>
#include<string.h>
char input[210][210],temp[210][210];
int n,flag = 0;
void b_won(int i, int j)
{
	if(i>=0 && j>=0 && i<n && j<n && temp[i][j]=='b')
	{
		if(i==n-1)
		{
		    flag = 1;
		    return;
		}
        temp[i][j] = 'w';
        b_won(  i  , j+1 );
		b_won( i ,  j-1  );
		b_won( i+1 , j+1 );
		b_won( i+1 , j);
	}
	return ;
}
int main()
{
    int tcase,i,j;
	for(tcase=1;;tcase++)
	{
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++)
			scanf("%s",input[i]);
        flag = 0;
        for(i=0;i<n;i++)
		{
			if(input[0][i]=='b')
            {
                for(j=0;j<n;j++)
                    strcpy(temp[j],input[j]);

                b_won(0,i);
            }
            if(flag)break;
		}
		if(flag)printf("%d B\n",tcase);
		else printf("%d W\n",tcase);
	}
	return 0;
}

