#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<algorithm>
#include<stdlib.h>
#include<ctype.h>
#include<map>
using namespace std;
bool vis[30500];
int input[505][30005],len[505],n,m;
void members(int row)
{
     int i,j,k,z;
     for(i=0;i<len[row];i++)
     {
        z = input[row][i];
        if(vis[z]== false )
        {
            vis[z] = true;
            for(j=0;j<m;j++)
                for(k=0;k<len[j];k++)
                    if(z == input[j][k])members(j);
        }
    }
    return ;

}
int main()
{
    int i,j,c,x;
    for(;;)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)break;
        memset(vis, false, sizeof(vis));
        bool flag = false;
        for(i=0;i<m;i++)
        {
            scanf("%d",&len[i]);
            for(j=0;j<len[i];j++)
            {
                scanf("%d",&input[i][j]);
                if(input[i][j]==0)
                {
                    flag = true;
                    x = i;
                }
            }
        }
        if(flag)members(x);
        else vis[0] = true;
        for(i=0,c=0;i<n;i++)
            if(vis[i])c++;
        printf("%d\n",c);
    }
    return 0;
}
