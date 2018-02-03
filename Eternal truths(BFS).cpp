#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<stdlib.h>
#include<map>
#include<algorithm>
#include<list>
#include<vector>
#include<iostream>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647

using namespace std;
int matrix[310][310];
char input[310][310];
int start_x, start_y, end_y, end_x, r, c;
queue <int> Q;

bool valid(int p, int q)
{
    if ( p >= 0 && p <= r && q >= 0 && q <= c ) return true;
    else return false;
}
void change(int r, int c, int v)
{
    matrix[r][c] = v + 1 ;
    Q.push(r);
    Q.push(c);
}
void BFS()
{
    int u, v;
    matrix[start_x][start_y] = 0;
    Q.push(start_x);
    Q.push(start_y);
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        v = Q.front();
        Q.pop();

        if(valid(u-1, v) && matrix[u-1][v]==inf_min )
            change(u-1, v, matrix[u][v]);
        if(valid(u+1, v) && matrix[u+1][v]==inf_min )
            change(u+1, v, matrix[u][v]);
        if(valid(u, v+1) && matrix[u][v+1]==inf_min )
            change(u, v+1, matrix[u][v]);
        if(valid(u, v-1) && matrix[u][v-1]==inf_min )
            change(u, v-1, matrix[u][v]);
    }
}
int main()
{
    int i, j, tcase;
    scanf("%d", &tcase);
    while(tcase--)
    {
        cin >> r >> c;
        getchar();
        //fflush(stdin);
        for(i=0; i<r; i++)
            gets(input[i]);

        for(i=0; i<r; i++)
            for(j=0; j<c; j++)
            {
                if(input[i][j]=='S')
                {
                    start_x = i;
                    start_y = j;
                }
                else if(input[i][j]=='E')
                {
                    end_x = i;
                    end_y = j;
                    matrix[i][j] = inf_min;
                }
                else if(input[i][j]=='#')matrix[i][j] = inf_max;
                else matrix[i][j] = inf_min;//(input[i][j]=='.')
            }

        BFS();
        if(matrix[i][j]==inf_min)printf("NO\n");
        else printf("%d\n",matrix[end_x][end_y]);
    }
    return 0;
}
