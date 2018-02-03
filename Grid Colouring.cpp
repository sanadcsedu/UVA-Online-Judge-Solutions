
#include <stdio.h>
#include <string.h>
char maze[100][100];
int n=-1;
void dfs(int i,int j,char c)
{
    maze[i][j]=c;
    if(maze[i][j-1]==' ')  dfs(i,j-1,c);
    if(maze[i][j+1]==' ')  dfs(i,j+1,c);
    if(maze[i-1][j]==' ')  dfs(i-1,j,c);
    if(maze[i+1][j]==' ')  dfs(i+1,j,c);
}
int main()
{
    while(gets(maze[++n])!=NULL)
    {
        if(maze[n][0]!='_') continue;
        for(int i=0;i<n;i++)
            for(int j=0;maze[i][j];j++)
                if(maze[i][j]!='X'&&maze[i][j]!=' ')
                {
                    char c=maze[i][j];
                    dfs(i,j,c);
                }
        for(int i=0;i<=n;i++)   puts(maze[i]);
        n=-1;
    }
}
