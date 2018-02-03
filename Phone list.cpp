#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char number[10005][11];
bool consistant(int n)
{
    bool flag;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        flag = true;
        for(j=0;number[i][j] && number[i+1][j];j++)
            if(number[i][j]!=number[i+1][j])flag=false;
        if(flag)break;
    }
    return flag;
}
int main()
{

    int tcase,i,n;
    bool z;
    scanf("%d",&tcase);
    while(tcase--)
    {
        memset(number,0,sizeof(number));
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",number[i]);
        qsort(number,n,sizeof(number[0]),(int(*)(const void*, const void*))strcmp);
        z = consistant(n);
        if(z)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
