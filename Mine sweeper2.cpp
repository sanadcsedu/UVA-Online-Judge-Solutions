#include<stdio.h>
#include<string.h>
char actual[13][13],input[13][13],output[13][13];
int count(int x,int y)
{
    int c = 0;
    if(actual[x+1][y]=='*')c++;
    if(actual[x+1][y+1]=='*')c++;
    if(actual[x][y+1]=='*')c++;
    if(actual[x][y-1]=='*')c++;
    if(actual[x-1][y]=='*')c++;
    if(actual[x-1][y-1]=='*')c++;
    if(actual[x+1][y-1]=='*')c++;
    if(actual[x-1][y+1]=='*')c++;
    return c;
}
int main()
{
    int game,grid,i,j,trapped,flag=0,z;
    scanf("%d",&game);
    getchar();
    while(game--)
    {
        memset(output,0,sizeof(output));
        memset(input,0,sizeof(input));
        memset(actual,0,sizeof(output));
        trapped = 0;
        if(flag==1)printf("\n");
        flag=1;
        scanf("%d",&grid);
        getchar();
        for(i=0;i<grid;i++)
        gets(actual[i]);
        for(i=0;i<grid;i++)
        {
            gets(input[i]);
            for(j=0;input[i][j];j++)
            {
                if(input[i][j]=='x' && actual[i][j]=='*')
                trapped = 1;
            }
        }
        for(i=0;i<grid;i++)
        {
            for(j=0;j<grid;j++)
            {
                if(input[i][j]=='x')
                {
                    if(trapped==1 && actual[i][j]=='*')output[i][j]='*';
                    else{
                        z = count(i,j);
                        output[i][j] = z+'0';
                    }
                }
                else
                {
                    if(trapped==1 && actual[i][j]=='*')output[i][j]='*';
                    else output[i][j]='.';
                }
            }
        }
        for(i=0;i<grid;i++)
            puts(output[i]);
    }
    return 0;
}
