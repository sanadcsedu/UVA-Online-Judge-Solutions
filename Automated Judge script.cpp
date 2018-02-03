#include<stdio.h>
#include<string.h>
char AC[150][150],output[150][150];
int accepted(int n,int m)
{
    if(n!=m)return 0;
    for(int i=0;i<n;i++)
        if(strcmp(AC[i],output[i])!=0)return 0;
    return 1;
}
int PE(int n,int m)
{
    char num1[10000],num2[10000];
    memset(num1,0,sizeof(num1));
    memset(num2,0,sizeof(num2));
    int k=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<strlen(AC[i]);j++)
        if(AC[i][j]<='9' && AC[i][j]>='0') num1[k++]=AC[i][j];
    k=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<strlen(output[i]);j++)
        if(output[i][j]<='9' && output[i][j]>='0') num2[k++]=output[i][j];
    if(strcmp(num2,num1)==0) return 1;
    return 0;
}
int main()
{
    int run,i,n,m;
    for(run=1;;run++)
    {
        memset(AC,0,sizeof(AC));
        memset(output,0,sizeof(output));
        scanf("%d",&n);
        getchar();
        if(n==0)break;
        for(i=0;i<n;i++)
        gets(AC[i]);

        scanf("%d",&m);
        getchar();
        for(i=0;i<m;i++)
        gets(output[i]);

        if(accepted(n,m))printf("Run #%d: Accepted\n",run);
        else if(PE(n,m))printf("Run #%d: Presentation Error\n",run);
        else printf("Run #%d: Wrong Answer\n",run);
    }
    return 0;
}
