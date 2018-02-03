#include<cstdio>
#include<cstring>
using namespace std;
char str[25][25], temp;
int c, n, m;
int dx[] = {0, 0, 1, -1};
int dy[] = {1,-1, 0, 0};
void flood_fill(int x, int y)
{
    if(str[x][y]==temp && x>=0 && x<n)
    {
        c++;
        str[x][y] = 0;
        for(int i=0; i<4; i++)
            flood_fill(dx[i]+x, (dy[i]+y+m)%m );
    }
}
int main()
{
    int a, b, i, j;
    while(scanf("%d %d", &n, &m)==2)
    {
        memset(str, 0, sizeof(str));
        for(i=0; i<n; i++)
            scanf("%s", str[i]);
        scanf("%d %d", &a, &b);
        temp = str[a][b];
        flood_fill(a, b);
        int max = 0;
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                if(str[i][j]==temp)
                {
                    c = 0;
                    flood_fill(i, j);
                    if(max<c)max = c;
                }
            }
        printf("%d\n", max);
    }
    return 0;
}
