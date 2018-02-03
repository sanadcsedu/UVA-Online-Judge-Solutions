#include<stdio.h>
#include<string.h>
int LCS[110][110];
char mother[110],father[110];
int main()
{
    int term=1,i,j,x,y;
    while(1)
    {
        gets(mother);
        if(mother[0]=='#')break;
        gets(father);
        x = strlen(mother);
        y = strlen(father);
        memset(LCS,0,sizeof(LCS));
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                if(mother[i-1]==father[j-1])LCS[i][j]=LCS[i-1][j-1]+1;
                else if(LCS[i][j-1]<=LCS[i-1][j])LCS[i][j] = LCS[i-1][j];
                else LCS[i][j] = LCS[i][j-1];
            }
        }
        printf("Case #%d: you can visit at most %d cities.\n",term,LCS[x][y]);
        term++;
    }
    return 0;
}
