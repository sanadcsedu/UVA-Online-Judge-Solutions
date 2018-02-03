#include<stdio.h>
#include<string.h>
char num[101][101];
int main()
{
    int i,j,x,z,k,l,sum[104]={0};
    for(i=0;;i++){
        scanf("%s",num[i]);
        if(num[i][0]=='0')break;
    }
    for(j=0;j<i;j++)
    {
        x = strlen (num[j]);
        for(k=x-1,l=102;k>=0;k--,l--)
        {
            sum[l] += (num[j][k]-'0');
            if(sum[l]>9)
            {
                z = sum[l];
                sum[l] %=10;
                sum[l-1] += z/10;
            }
        }
    }
    for(i=0;i<102;i++)
    if(sum[i]!=0)break;
    for(j=i;j<=102;j++)
    printf("%d",sum[j]);
    printf("\n");
    return 0;
}
