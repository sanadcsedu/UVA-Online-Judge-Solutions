#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int original[25],input[25],LCS[25][25];
int main()
{
    int i,j,n,first,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%d",&z);
         original[z] = i;
    }
    while(scanf("%d",&first)!=EOF)
    {
        input[first] = 1;
        for(i=2;i<=n;i++)
        {
            scanf("%d",&z);
            input[z] = i;
        }
        memset(LCS,0,sizeof(LCS));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(original[i]==input[j])LCS[i][j] = LCS[i-1][j-1] + 1;
                else LCS[i][j] = max(LCS[i][j-1],LCS[i-1][j]);
            }
        }
        printf("%d\n",LCS[n][n]);
    }
    return 0;
}
