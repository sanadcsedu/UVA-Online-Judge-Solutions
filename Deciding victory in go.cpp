#include <cstdio>
#include <cstring>
char table[10][10],cnt1,table2[10][10],cnt2;
void dfs_w(int i, int j)
{
    if (i<0||i==9||j<0||j==9||table[i][j]=='X') return;
    cnt1++;
    table[i][j]='X';
    dfs_w(i-1,j);
    dfs_w(i,j+1);
    dfs_w(i+1,j);
    dfs_w(i,j-1);
}
void dfs_b(int i, int j)
{
    if (i<0||i==9||j<0||j==9||table2[i][j]== 'O') return;
    cnt2++;
    table2[i][j]='O';
    dfs_b(i-1,j);
    dfs_b(i,j+1);
    dfs_b(i+1,j);
    dfs_b(i,j-1);
}
int main ()
{
    int t;
    scanf ("%d", &t);
    while ( t--)
    {
        cnt1=0;cnt2=0;
        for( int i=0;i<9;i++) scanf("%s",table[i]);
        for( int i=0;i<9;i++) strcpy(table2[i],table[i]);
        for (int i=0;i<9;i++)
            for (int j=0;j<9;j++)
                if(table[i][j]=='O')    dfs_w(i,j);
                else if(table2[i][j]=='X')   dfs_b(i,j);
        int k=cnt1+cnt2-81;
        cnt1-=k;
        cnt2-=k;
        printf("Black %d White %d\n",cnt2,cnt1);
    }
}
